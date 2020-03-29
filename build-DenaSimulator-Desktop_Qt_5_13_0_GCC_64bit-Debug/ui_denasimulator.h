/********************************************************************************
** Form generated from reading UI file 'denasimulator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENASIMULATOR_H
#define UI_DENASIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DenaSimulator
{
public:
    QWidget *centralwidget;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *upButton;
    QTableView *mainMenu;
    QPushButton *leftButton;
    QPushButton *confirmButton;
    QPushButton *powerButton;
    QPushButton *returnButton;
    QPushButton *mainMenuButton;
    QTableView *settingsMenu;
    QTableView *freqMenu;
    QLCDNumber *treatmentTimer;
    QProgressBar *medMenu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DenaSimulator)
    {
        if (DenaSimulator->objectName().isEmpty())
            DenaSimulator->setObjectName(QString::fromUtf8("DenaSimulator"));
        DenaSimulator->resize(488, 978);
        centralwidget = new QWidget(DenaSimulator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(200, 780, 81, 81));
        QFont font;
        font.setPointSize(36);
        downButton->setFont(font);
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(330, 650, 81, 81));
        rightButton->setFont(font);
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(200, 520, 81, 81));
        upButton->setFont(font);
        mainMenu = new QTableView(centralwidget);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(100, 20, 281, 421));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(70, 650, 81, 81));
        leftButton->setFont(font);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(200, 650, 81, 81));
        QFont font1;
        font1.setPointSize(24);
        confirmButton->setFont(font1);
        powerButton = new QPushButton(centralwidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(10, 20, 61, 131));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(40, 460, 81, 81));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        returnButton->setFont(font2);
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenuButton = new QPushButton(centralwidget);
        mainMenuButton->setObjectName(QString::fromUtf8("mainMenuButton"));
        mainMenuButton->setGeometry(QRect(360, 460, 81, 81));
        mainMenuButton->setFont(font2);
        mainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));
        settingsMenu = new QTableView(centralwidget);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        settingsMenu->setGeometry(QRect(100, 20, 281, 421));
        freqMenu = new QTableView(centralwidget);
        freqMenu->setObjectName(QString::fromUtf8("freqMenu"));
        freqMenu->setGeometry(QRect(100, 20, 281, 421));
        treatmentTimer = new QLCDNumber(centralwidget);
        treatmentTimer->setObjectName(QString::fromUtf8("treatmentTimer"));
        treatmentTimer->setGeometry(QRect(100, 180, 281, 111));
        medMenu = new QProgressBar(centralwidget);
        medMenu->setObjectName(QString::fromUtf8("medMenu"));
        medMenu->setGeometry(QRect(100, 130, 281, 51));
        medMenu->setValue(24);
        DenaSimulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DenaSimulator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 488, 22));
        DenaSimulator->setMenuBar(menubar);
        statusbar = new QStatusBar(DenaSimulator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DenaSimulator->setStatusBar(statusbar);

        retranslateUi(DenaSimulator);

        QMetaObject::connectSlotsByName(DenaSimulator);
    } // setupUi

    void retranslateUi(QMainWindow *DenaSimulator)
    {
        DenaSimulator->setWindowTitle(QCoreApplication::translate("DenaSimulator", "DenaSimulator", nullptr));
        downButton->setText(QCoreApplication::translate("DenaSimulator", "\342\206\223", nullptr));
        rightButton->setText(QCoreApplication::translate("DenaSimulator", "\342\206\222", nullptr));
        upButton->setText(QCoreApplication::translate("DenaSimulator", "\342\206\221", nullptr));
        leftButton->setText(QCoreApplication::translate("DenaSimulator", "\342\206\220", nullptr));
        confirmButton->setText(QCoreApplication::translate("DenaSimulator", "OK", nullptr));
        powerButton->setText(QCoreApplication::translate("DenaSimulator", "On/Off", nullptr));
        returnButton->setText(QCoreApplication::translate("DenaSimulator", "\342\206\272", nullptr));
        mainMenuButton->setText(QCoreApplication::translate("DenaSimulator", "\342\211\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DenaSimulator: public Ui_DenaSimulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENASIMULATOR_H
