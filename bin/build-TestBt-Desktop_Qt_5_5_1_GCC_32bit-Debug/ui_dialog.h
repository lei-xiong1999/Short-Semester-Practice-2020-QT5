/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textRecv;
    QLabel *label_2;
    QLineEdit *textSend;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QPushButton *btnOpen;
    QPushButton *btnSend;
    QPushButton *btnClear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(674, 300);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 556, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textRecv = new QTextEdit(verticalLayoutWidget);
        textRecv->setObjectName(QStringLiteral("textRecv"));
        textRecv->setReadOnly(true);

        verticalLayout->addWidget(textRecv);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        textSend = new QLineEdit(verticalLayoutWidget);
        textSend->setObjectName(QStringLiteral("textSend"));

        verticalLayout->addWidget(textSend);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(comboBox);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_4);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(comboBox_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(label_5);

        btnOpen = new QPushButton(verticalLayoutWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnSend = new QPushButton(verticalLayoutWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout->addWidget(btnSend);

        btnClear = new QPushButton(verticalLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\346\216\245\346\224\266\347\252\227\345\217\243", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\347\252\227\345\217\243", 0));
        label_3->setText(QApplication::translate("Dialog", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "COM1", 0)
         << QApplication::translate("Dialog", "COM2", 0)
         << QApplication::translate("Dialog", "COM3", 0)
         << QApplication::translate("Dialog", "COM4", 0)
        );
        label_4->setText(QApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "1200", 0)
         << QApplication::translate("Dialog", "4800", 0)
         << QApplication::translate("Dialog", "9600", 0)
         << QApplication::translate("Dialog", "38400", 0)
         << QApplication::translate("Dialog", "115200", 0)
        );
        label_5->setText(QApplication::translate("Dialog", "bps", 0));
        btnOpen->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        btnSend->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", 0));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
