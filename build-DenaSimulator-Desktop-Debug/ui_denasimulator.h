/********************************************************************************
** Form generated from reading UI file 'denasimulator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENASIMULATOR_H
#define UI_DENASIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QTableView *languageMenu;
    QMenuBar *menubar;
    QMenu *menuDENA2;
    QMenu *menuSimulator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DenaSimulator)
    {
        if (DenaSimulator->objectName().isEmpty())
            DenaSimulator->setObjectName(QStringLiteral("DenaSimulator"));
        DenaSimulator->resize(446, 978);
        QFont font;
        font.setPointSize(20);
        DenaSimulator->setFont(font);
        centralwidget = new QWidget(DenaSimulator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        downButton->setGeometry(QRect(200, 780, 81, 81));
        QFont font1;
        font1.setPointSize(36);
        downButton->setFont(font1);
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(330, 650, 81, 81));
        rightButton->setFont(font1);
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QStringLiteral("upButton"));
        upButton->setGeometry(QRect(200, 520, 81, 81));
        upButton->setFont(font1);
        mainMenu = new QTableView(centralwidget);
        mainMenu->setObjectName(QStringLiteral("mainMenu"));
        mainMenu->setGeometry(QRect(100, 20, 281, 421));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(70, 650, 81, 81));
        leftButton->setFont(font1);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(200, 650, 81, 81));
        QFont font2;
        font2.setPointSize(24);
        confirmButton->setFont(font2);
        powerButton = new QPushButton(centralwidget);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setGeometry(QRect(10, 20, 61, 141));
        QFont font3;
        font3.setPointSize(11);
        powerButton->setFont(font3);
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(40, 460, 81, 81));
        QFont font4;
        font4.setPointSize(36);
        font4.setBold(true);
        font4.setWeight(75);
        returnButton->setFont(font4);
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenuButton = new QPushButton(centralwidget);
        mainMenuButton->setObjectName(QStringLiteral("mainMenuButton"));
        mainMenuButton->setGeometry(QRect(360, 460, 81, 81));
        mainMenuButton->setFont(font4);
        mainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));
        settingsMenu = new QTableView(centralwidget);
        settingsMenu->setObjectName(QStringLiteral("settingsMenu"));
        settingsMenu->setGeometry(QRect(100, 20, 281, 421));
        freqMenu = new QTableView(centralwidget);
        freqMenu->setObjectName(QStringLiteral("freqMenu"));
        freqMenu->setGeometry(QRect(100, 20, 281, 421));
        powerWidget = new QWidget(centralwidget);
        powerWidget->setObjectName(QStringLiteral("powerWidget"));
        powerWidget->setGeometry(QRect(100, 20, 281, 141));
        powerLine = new QLineEdit(powerWidget);
        powerLine->setObjectName(QStringLiteral("powerLine"));
        powerLine->setGeometry(QRect(0, 70, 281, 71));
        powerLabel = new QLabel(powerWidget);
        powerLabel->setObjectName(QStringLiteral("powerLabel"));
        powerLabel->setGeometry(QRect(0, 0, 281, 71));
        programMenu = new QTableView(centralwidget);
        programMenu->setObjectName(QStringLiteral("programMenu"));
        programMenu->setGeometry(QRect(100, 20, 281, 421));
        treatmentWidget = new QWidget(centralwidget);
        treatmentWidget->setObjectName(QStringLiteral("treatmentWidget"));
        treatmentWidget->setGeometry(QRect(100, 20, 281, 141));
        counterLabel = new QLabel(treatmentWidget);
        counterLabel->setObjectName(QStringLiteral("counterLabel"));
        counterLabel->setGeometry(QRect(0, 0, 281, 71));
        timerText = new QLineEdit(treatmentWidget);
        timerText->setObjectName(QStringLiteral("timerText"));
        timerText->setGeometry(QRect(0, 60, 281, 81));
        touchSkinButton = new QPushButton(centralwidget);
        touchSkinButton->setObjectName(QStringLiteral("touchSkinButton"));
        touchSkinButton->setGeometry(QRect(400, 20, 61, 141));
        touchSkinButton->setFont(font3);
        languageMenu = new QTableView(centralwidget);
        languageMenu->setObjectName(QStringLiteral("languageMenu"));
        languageMenu->setGeometry(QRect(100, 20, 281, 421));
        DenaSimulator->setCentralWidget(centralwidget);
        downButton->raise();
        rightButton->raise();
        upButton->raise();
        mainMenu->raise();
        leftButton->raise();
        confirmButton->raise();
        powerButton->raise();
        returnButton->raise();
        mainMenuButton->raise();
        settingsMenu->raise();
        freqMenu->raise();
        powerWidget->raise();
        programMenu->raise();
        treatmentWidget->raise();
        touchSkinButton->raise();
        powerLabel->raise();
        powerLine->raise();
        counterLabel->raise();
        powerLabel->raise();
        powerLine->raise();
        languageMenu->raise();
        menubar = new QMenuBar(DenaSimulator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 446, 33));
        menuDENA2 = new QMenu(menubar);
        menuDENA2->setObjectName(QStringLiteral("menuDENA2"));
        menuSimulator = new QMenu(menubar);
        menuSimulator->setObjectName(QStringLiteral("menuSimulator"));
        DenaSimulator->setMenuBar(menubar);
        statusbar = new QStatusBar(DenaSimulator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DenaSimulator->setStatusBar(statusbar);

        menubar->addAction(menuDENA2->menuAction());
        menubar->addAction(menuSimulator->menuAction());

        retranslateUi(DenaSimulator);

        QMetaObject::connectSlotsByName(DenaSimulator);
    } // setupUi

    void retranslateUi(QMainWindow *DenaSimulator)
    {
        DenaSimulator->setWindowTitle(QApplication::translate("DenaSimulator", "DenaSimulator", 0));
        downButton->setText(QApplication::translate("DenaSimulator", "\342\206\223", 0));
        rightButton->setText(QApplication::translate("DenaSimulator", "\342\206\222", 0));
        upButton->setText(QApplication::translate("DenaSimulator", "\342\206\221", 0));
        leftButton->setText(QApplication::translate("DenaSimulator", "\342\206\220", 0));
        confirmButton->setText(QApplication::translate("DenaSimulator", "OK", 0));
        powerButton->setText(QApplication::translate("DenaSimulator", "On/Off", 0));
        returnButton->setText(QApplication::translate("DenaSimulator", "\342\206\272", 0));
        mainMenuButton->setText(QApplication::translate("DenaSimulator", "\342\211\241", 0));
        powerLabel->setText(QApplication::translate("DenaSimulator", "Power", 0));
        counterLabel->setText(QApplication::translate("DenaSimulator", "Treatement", 0));
        timerText->setText(QString());
        touchSkinButton->setText(QApplication::translate("DenaSimulator", "touch \n"
" skin \n"
" start", 0));
        menuDENA2->setTitle(QApplication::translate("DenaSimulator", "DENA2", 0));
        menuSimulator->setTitle(QApplication::translate("DenaSimulator", "Simulator", 0));
    } // retranslateUi

};

namespace Ui {
    class DenaSimulator: public Ui_DenaSimulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENASIMULATOR_H
