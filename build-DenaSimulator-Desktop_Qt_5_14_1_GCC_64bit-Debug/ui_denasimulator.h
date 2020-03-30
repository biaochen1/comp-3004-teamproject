/********************************************************************************
** Form generated from reading UI file 'denasimulator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENASIMULATOR_H
#define UI_DENASIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QWidget *powerWidget;
    QLineEdit *powerLine;
    QLabel *powerLabel;
    QTableView *programMenu;
    QWidget *treatmentWidget;
    QLabel *counterLabel;
    QLineEdit *timerText;
    QPushButton *touchSkinButton;
    QMenuBar *menubar;
    QMenu *menuDENA2;
    QMenu *menuSimulator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DenaSimulator)
    {
        if (DenaSimulator->objectName().isEmpty())
            DenaSimulator->setObjectName(QString::fromUtf8("DenaSimulator"));
        DenaSimulator->resize(494, 978);
        QFont font;
        font.setPointSize(20);
        DenaSimulator->setFont(font);
        centralwidget = new QWidget(DenaSimulator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(200, 780, 81, 81));
        QFont font1;
        font1.setPointSize(36);
        downButton->setFont(font1);
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(330, 650, 81, 81));
        rightButton->setFont(font1);
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(200, 520, 81, 81));
        upButton->setFont(font1);
        mainMenu = new QTableView(centralwidget);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(100, 20, 281, 421));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(70, 650, 81, 81));
        leftButton->setFont(font1);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(200, 650, 81, 81));
        QFont font2;
        font2.setPointSize(24);
        confirmButton->setFont(font2);
        powerButton = new QPushButton(centralwidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(10, 20, 61, 141));
        QFont font3;
        font3.setPointSize(11);
        powerButton->setFont(font3);
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(40, 460, 81, 81));
        QFont font4;
        font4.setPointSize(36);
        font4.setBold(true);
        font4.setWeight(75);
        returnButton->setFont(font4);
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenuButton = new QPushButton(centralwidget);
        mainMenuButton->setObjectName(QString::fromUtf8("mainMenuButton"));
        mainMenuButton->setGeometry(QRect(360, 460, 81, 81));
        mainMenuButton->setFont(font4);
        mainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));
        settingsMenu = new QTableView(centralwidget);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        settingsMenu->setGeometry(QRect(100, 20, 281, 421));
        freqMenu = new QTableView(centralwidget);
        freqMenu->setObjectName(QString::fromUtf8("freqMenu"));
        freqMenu->setGeometry(QRect(100, 20, 281, 421));
        powerWidget = new QWidget(centralwidget);
        powerWidget->setObjectName(QString::fromUtf8("powerWidget"));
        powerWidget->setGeometry(QRect(100, 20, 281, 141));
        powerLine = new QLineEdit(powerWidget);
        powerLine->setObjectName(QString::fromUtf8("powerLine"));
        powerLine->setGeometry(QRect(0, 70, 281, 71));
        powerLabel = new QLabel(powerWidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(0, 0, 281, 71));
        programMenu = new QTableView(centralwidget);
        programMenu->setObjectName(QString::fromUtf8("programMenu"));
        programMenu->setGeometry(QRect(100, 20, 281, 421));
        treatmentWidget = new QWidget(centralwidget);
        treatmentWidget->setObjectName(QString::fromUtf8("treatmentWidget"));
        treatmentWidget->setGeometry(QRect(100, 20, 281, 141));
        counterLabel = new QLabel(treatmentWidget);
        counterLabel->setObjectName(QString::fromUtf8("counterLabel"));
        counterLabel->setGeometry(QRect(0, 0, 281, 71));
        timerText = new QLineEdit(treatmentWidget);
        timerText->setObjectName(QString::fromUtf8("timerText"));
        timerText->setGeometry(QRect(0, 60, 281, 81));
        touchSkinButton = new QPushButton(centralwidget);
        touchSkinButton->setObjectName(QString::fromUtf8("touchSkinButton"));
        touchSkinButton->setGeometry(QRect(400, 20, 61, 141));
        touchSkinButton->setFont(font3);
        DenaSimulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DenaSimulator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 494, 37));
        menuDENA2 = new QMenu(menubar);
        menuDENA2->setObjectName(QString::fromUtf8("menuDENA2"));
        menuSimulator = new QMenu(menubar);
        menuSimulator->setObjectName(QString::fromUtf8("menuSimulator"));
        DenaSimulator->setMenuBar(menubar);
        statusbar = new QStatusBar(DenaSimulator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DenaSimulator->setStatusBar(statusbar);

        menubar->addAction(menuDENA2->menuAction());
        menubar->addAction(menuSimulator->menuAction());

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
        powerLabel->setText(QCoreApplication::translate("DenaSimulator", "Power", nullptr));
        counterLabel->setText(QCoreApplication::translate("DenaSimulator", "Treatement", nullptr));
        timerText->setText(QString());
        touchSkinButton->setText(QCoreApplication::translate("DenaSimulator", "touch \n"
" skin \n"
" start", nullptr));
        menuDENA2->setTitle(QCoreApplication::translate("DenaSimulator", "DENA2", nullptr));
        menuSimulator->setTitle(QCoreApplication::translate("DenaSimulator", "Simulator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DenaSimulator: public Ui_DenaSimulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENASIMULATOR_H
