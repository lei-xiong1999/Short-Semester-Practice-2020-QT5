/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_6;
    QLineEdit *dataVolt;
    QLabel *label_7;
    QLineEdit *dataAccX;
    QLabel *label_9;
    QLineEdit *dataGyroX;
    QLabel *label_10;
    QLineEdit *dataAccY;
    QLabel *label_11;
    QLineEdit *dataAccZ;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *dataGyroY;
    QLabel *label_14;
    QLineEdit *dataGyroZ;
    QLabel *label_15;
    QLineEdit *dataPitch;
    QLabel *label_16;
    QLineEdit *dataRoll;
    QLabel *label_17;
    QLineEdit *dataYaw;
    QCheckBox *stateLED1;
    QCheckBox *stateLED2;
    QCheckBox *stateLED3;
    QCheckBox *stateLED4;
    QCheckBox *stateKEY1;
    QCheckBox *stateKEY2;
    QCheckBox *stateKEY3;
    QCheckBox *stateKEY4;
    QLabel *label;
    QTextEdit *textRecv;
    QLabel *label_2;
    QLineEdit *textSend;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnSend;
    QPushButton *btnOpen;
    QPushButton *btnClear;
    QLineEdit *dataVolt_2;
    QLabel *label_8;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(701, 335);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 10, 60, 16));
        dataVolt = new QLineEdit(Dialog);
        dataVolt->setObjectName(QString::fromUtf8("dataVolt"));
        dataVolt->setGeometry(QRect(510, 120, 61, 21));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 120, 31, 16));
        dataAccX = new QLineEdit(Dialog);
        dataAccX->setObjectName(QString::fromUtf8("dataAccX"));
        dataAccX->setGeometry(QRect(510, 150, 61, 21));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(470, 150, 31, 16));
        dataGyroX = new QLineEdit(Dialog);
        dataGyroX->setObjectName(QString::fromUtf8("dataGyroX"));
        dataGyroX->setGeometry(QRect(630, 150, 61, 21));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(580, 150, 41, 20));
        dataAccY = new QLineEdit(Dialog);
        dataAccY->setObjectName(QString::fromUtf8("dataAccY"));
        dataAccY->setGeometry(QRect(510, 180, 61, 21));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(470, 180, 31, 16));
        dataAccZ = new QLineEdit(Dialog);
        dataAccZ->setObjectName(QString::fromUtf8("dataAccZ"));
        dataAccZ->setGeometry(QRect(510, 210, 61, 21));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 210, 31, 16));
        label_13 = new QLabel(Dialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(580, 180, 41, 20));
        dataGyroY = new QLineEdit(Dialog);
        dataGyroY->setObjectName(QString::fromUtf8("dataGyroY"));
        dataGyroY->setGeometry(QRect(630, 180, 61, 21));
        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(580, 210, 41, 20));
        dataGyroZ = new QLineEdit(Dialog);
        dataGyroZ->setObjectName(QString::fromUtf8("dataGyroZ"));
        dataGyroZ->setGeometry(QRect(630, 210, 61, 21));
        label_15 = new QLabel(Dialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(470, 240, 41, 16));
        dataPitch = new QLineEdit(Dialog);
        dataPitch->setObjectName(QString::fromUtf8("dataPitch"));
        dataPitch->setGeometry(QRect(520, 240, 151, 21));
        label_16 = new QLabel(Dialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(470, 270, 31, 16));
        dataRoll = new QLineEdit(Dialog);
        dataRoll->setObjectName(QString::fromUtf8("dataRoll"));
        dataRoll->setGeometry(QRect(520, 270, 151, 21));
        label_17 = new QLabel(Dialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(470, 300, 31, 16));
        dataYaw = new QLineEdit(Dialog);
        dataYaw->setObjectName(QString::fromUtf8("dataYaw"));
        dataYaw->setGeometry(QRect(520, 300, 151, 21));
        stateLED1 = new QCheckBox(Dialog);
        stateLED1->setObjectName(QString::fromUtf8("stateLED1"));
        stateLED1->setGeometry(QRect(480, 30, 87, 19));
        stateLED2 = new QCheckBox(Dialog);
        stateLED2->setObjectName(QString::fromUtf8("stateLED2"));
        stateLED2->setGeometry(QRect(480, 50, 87, 19));
        stateLED3 = new QCheckBox(Dialog);
        stateLED3->setObjectName(QString::fromUtf8("stateLED3"));
        stateLED3->setGeometry(QRect(480, 70, 87, 19));
        stateLED4 = new QCheckBox(Dialog);
        stateLED4->setObjectName(QString::fromUtf8("stateLED4"));
        stateLED4->setGeometry(QRect(480, 90, 87, 19));
        stateKEY1 = new QCheckBox(Dialog);
        stateKEY1->setObjectName(QString::fromUtf8("stateKEY1"));
        stateKEY1->setGeometry(QRect(600, 30, 87, 19));
        stateKEY2 = new QCheckBox(Dialog);
        stateKEY2->setObjectName(QString::fromUtf8("stateKEY2"));
        stateKEY2->setGeometry(QRect(600, 50, 87, 19));
        stateKEY3 = new QCheckBox(Dialog);
        stateKEY3->setObjectName(QString::fromUtf8("stateKEY3"));
        stateKEY3->setGeometry(QRect(600, 70, 87, 19));
        stateKEY4 = new QCheckBox(Dialog);
        stateKEY4->setObjectName(QString::fromUtf8("stateKEY4"));
        stateKEY4->setGeometry(QRect(600, 90, 87, 19));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 11, 60, 16));
        textRecv = new QTextEdit(Dialog);
        textRecv->setObjectName(QString::fromUtf8("textRecv"));
        textRecv->setGeometry(QRect(11, 32, 441, 191));
        textRecv->setReadOnly(true);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 227, 60, 16));
        textSend = new QLineEdit(Dialog);
        textSend->setObjectName(QString::fromUtf8("textSend"));
        textSend->setGeometry(QRect(11, 248, 281, 21));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 290, 50, 23));
        label_3->setMaximumSize(QSize(50, 16777215));
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(70, 290, 70, 21));
        comboBox->setMaximumSize(QSize(70, 16777215));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(210, 290, 81, 21));
        comboBox_2->setMaximumSize(QSize(100, 16777215));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 290, 50, 23));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 290, 31, 21));
        btnSend = new QPushButton(Dialog);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(300, 240, 71, 31));
        btnOpen = new QPushButton(Dialog);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(330, 280, 115, 41));
        btnOpen->setMinimumSize(QSize(115, 0));
        btnOpen->setIconSize(QSize(16, 16));
        btnOpen->setAutoDefault(true);
        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(380, 240, 71, 31));
        dataVolt_2 = new QLineEdit(Dialog);
        dataVolt_2->setObjectName(QString::fromUtf8("dataVolt_2"));
        dataVolt_2->setGeometry(QRect(630, 120, 61, 21));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(590, 120, 31, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\344\270\212\344\274\240\347\212\266\346\200\201", nullptr));
        label_7->setText(QApplication::translate("Dialog", "ADC", nullptr));
        label_9->setText(QApplication::translate("Dialog", "AccX", nullptr));
        label_10->setText(QApplication::translate("Dialog", "GyroX", nullptr));
        label_11->setText(QApplication::translate("Dialog", "AccY", nullptr));
        label_12->setText(QApplication::translate("Dialog", "AccZ", nullptr));
        label_13->setText(QApplication::translate("Dialog", "GyroY", nullptr));
        label_14->setText(QApplication::translate("Dialog", "GyroZ", nullptr));
        label_15->setText(QApplication::translate("Dialog", "Pitch", nullptr));
        label_16->setText(QApplication::translate("Dialog", "Roll", nullptr));
        label_17->setText(QApplication::translate("Dialog", "Yaw", nullptr));
        stateLED1->setText(QApplication::translate("Dialog", "LED1", nullptr));
        stateLED2->setText(QApplication::translate("Dialog", "LED2", nullptr));
        stateLED3->setText(QApplication::translate("Dialog", "LED3", nullptr));
        stateLED4->setText(QApplication::translate("Dialog", "LED4", nullptr));
        stateKEY1->setText(QApplication::translate("Dialog", "KEY1", nullptr));
        stateKEY2->setText(QApplication::translate("Dialog", "KEY2", nullptr));
        stateKEY3->setText(QApplication::translate("Dialog", "KEY3", nullptr));
        stateKEY4->setText(QApplication::translate("Dialog", "KEY4", nullptr));
        label->setText(QApplication::translate("Dialog", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("Dialog", "COM1", nullptr));
        comboBox->setItemText(1, QApplication::translate("Dialog", "COM2", nullptr));
        comboBox->setItemText(2, QApplication::translate("Dialog", "COM3", nullptr));
        comboBox->setItemText(3, QApplication::translate("Dialog", "COM4", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("Dialog", "1200", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Dialog", "4800", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Dialog", "9600", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Dialog", "38400", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("Dialog", "115200", nullptr));

        label_4->setText(QApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Dialog", "bps", nullptr));
        btnSend->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", nullptr));
        btnOpen->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        label_8->setText(QApplication::translate("Dialog", "\347\224\265\345\216\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
