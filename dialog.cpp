#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //查找可用的串口
    ui->comboBox->clear();
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->comboBox->addItem(serial.portName());
            serial.close();
        }
    }
    ui->comboBox_2->setCurrentIndex(4);
    ui->btnSend->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnOpen_clicked()
{
    if(ui->btnOpen->text() == "打开串口")
    {
        serial = new QSerialPort;
        //设置串口名
        serial->setPortName(ui->comboBox->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        int bps = ui->comboBox_2->currentText().toInt();
        serial->setBaudRate(bps);
        //设置数据位数
        serial->setDataBits(QSerialPort::Data8);
        //设置奇偶校验
        serial->setParity(QSerialPort::NoParity);
        //设置停止位
        serial->setStopBits(QSerialPort::OneStop);
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);
        //关闭设置菜单使能
        ui->comboBox->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->btnOpen->setText("关闭串口");
        ui->btnSend->setEnabled(true);
        //连接信号槽
        QObject::connect(serial, &QSerialPort::readyRead, this, &Dialog::Read_Data);
    }
    else
    {
        //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();
        //恢复设置使能
        ui->comboBox->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
        ui->btnOpen->setText("打开串口");
        ui->btnSend->setEnabled(false);
    }
}

void Dialog::on_btnSend_clicked()
{
    QString str = ui->textSend->text() + "\n";
    QByteArray buf = str.toLatin1();
    serial->write(buf);
}

void Dialog::Read_Data()
{
    static QString frame_buff;
    QByteArray buf;

    buf = serial->readAll();
    if(!buf.isEmpty())
    {
        QString str = ui->textRecv->toPlainText();
        str += QString(buf);
        ui->textRecv->clear();
        ui->textRecv->append(str);
        frame_buff +=QString(buf);
        int len =frame_buff.indexOf("\n");
        while(len>=0)
        {
            // ui->textRecv->append(frame_buff.left(len));
            process_frame(frame_buff.left(len));
            frame_buff = frame_buff.mid(len + 1);
            len = frame_buff.indexOf("\n");
        }
    }
    buf.clear();
}

void Dialog::on_btnClear_clicked()
{
    ui->textRecv->clear();
    ui->textSend->clear();
}


bool Dialog::check_frame(QString frame_str)
{
    QByteArray barry =frame_str.toLatin1();
    int len =barry.count();
    if(len>2)
    {
        //bool bok;
        //int chksum=frame_str.right(2).toInt(&bok,16);
        //int sum=0;
        //for (int i =0;i<len-2;++i)
        //    sum+=barry[i];
        //    sum %=256;
        //if(sum==chksum)
             return true;
    }
    return false;
}

void Dialog::process_frame(QString frame_str)
{
    frame_str= frame_str.trimmed();
    if(!check_frame(frame_str))
    {
        ui->textRecv->append(frame_str + "check sum error!\n");
        return;
    }
    frame_str=frame_str.left(frame_str.length()-2);

    int i;
    int led_sta[4],btn_sta[4];
    QString tstr;
    QString adval, ax, ay, az, gx, gy, gz;
    QString volta, pitch, roll, yaw;

    if(frame_str.indexOf("5MBD")==0&&frame_str.length()>=12)
    {
        for (i=0;i<4;++i)
            led_sta[i]=(frame_str[4+i]=='0')? 0:1;
        for (i=0;i<4;++i)
            btn_sta[i]=(frame_str[8+i]=='U')?0:1;

        led_sta[0] ? ui->stateLED1->setChecked(true) : ui->stateLED1->setChecked(false);
        led_sta[1] ? ui->stateLED2->setChecked(true) : ui->stateLED2->setChecked(false);
        led_sta[2] ? ui->stateLED3->setChecked(true) : ui->stateLED3->setChecked(false);
        led_sta[3] ? ui->stateLED4->setChecked(true) : ui->stateLED4->setChecked(false);
        btn_sta[0] ? ui->stateKEY1->setChecked(true) : ui->stateKEY1->setChecked(false);
        btn_sta[1] ? ui->stateKEY2->setChecked(true) : ui->stateKEY2->setChecked(false);
        btn_sta[2] ? ui->stateKEY3->setChecked(true) : ui->stateKEY3->setChecked(false);
        btn_sta[3] ? ui->stateKEY4->setChecked(true) : ui->stateKEY4->setChecked(false);

        //ui->textRecv->append(tstr);
    }
    else if (frame_str.indexOf("5MYD")==0&& frame_str.length()>5)
    {
        //adval=frame_str.mid(5,j-i).toInt();
        adval = frame_str.mid(4,4);
        ax = frame_str.mid(8,6);
        ay = frame_str.mid(14,6);
        az = frame_str.mid(20,6);
        gx = frame_str.mid(26,6);
        gy = frame_str.mid(32,6);
        gz = frame_str.mid(38,6);

        ui->dataVolt->setText(adval);
        ui->dataAccX->setText(ax);
        ui->dataAccY->setText(ay);
        ui->dataAccZ->setText(az);
        ui->dataGyroX->setText(gx);
        ui->dataGyroY->setText(gy);
        ui->dataGyroZ->setText(gz);

    }

    else if (frame_str.indexOf("5MRD")==0&& frame_str.length()>5)
    {
        //adval=frame_str.mid(5,j-i).toInt();
        volta = frame_str.mid(4,4);
        pitch = frame_str.mid(8,6);
        roll = frame_str.mid(14,6);
        yaw = frame_str.mid(20,6);

        ui->dataVolt_2->setText(volta);
        ui->dataPitch->setText(pitch);
        ui->dataRoll->setText(roll);
        ui->dataYaw->setText(yaw);

    }

}


