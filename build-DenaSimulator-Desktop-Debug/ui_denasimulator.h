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

    void setupUi(QMainWindow *DenaSimulator)
    {
        if (DenaSimulator->objectName().isEmpty())
            DenaSimulator->setObjectName(QStringLiteral("DenaSimulator"));
        DenaSimulator->resize(460, 996);
        QFont font;
        font.setPointSize(20);
        DenaSimulator->setFont(font);
        centralwidget = new QWidget(DenaSimulator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        downButton->setGeometry(QRect(190, 870, 81, 81));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        downButton->setFont(font1);
        downButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(320, 740, 81, 81));
        rightButton->setFont(font1);
        rightButton->setCursor(QCursor(Qt::PointingHandCursor));
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QStringLiteral("upButton"));
        upButton->setGeometry(QRect(190, 610, 81, 81));
        upButton->setFont(font1);
        upButton->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenu = new QTableView(centralwidget);
        mainMenu->setObjectName(QStringLiteral("mainMenu"));
        mainMenu->setGeometry(QRect(10, 20, 441, 461));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(60, 740, 81, 81));
        leftButton->setFont(font1);
        leftButton->setCursor(QCursor(Qt::PointingHandCursor));
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(190, 740, 81, 81));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        confirmButton->setFont(font2);
        confirmButton->setCursor(QCursor(Qt::PointingHandCursor));
        powerButton = new QPushButton(centralwidget);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setGeometry(QRect(10, 920, 61, 51));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        powerButton->setFont(font3);
        powerButton->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(60, 560, 81, 81));
        returnButton->setFont(font1);
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenuButton = new QPushButton(centralwidget);
        mainMenuButton->setObjectName(QStringLiteral("mainMenuButton"));
        mainMenuButton->setGeometry(QRect(320, 560, 81, 81));
        mainMenuButton->setFont(font1);
        mainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));
        settingsMenu = new QTableView(centralwidget);
        settingsMenu->setObjectName(QStringLiteral("settingsMenu"));
        settingsMenu->setGeometry(QRect(10, 20, 441, 461));
        freqMenu = new QTableView(centralwidget);
        freqMenu->setObjectName(QStringLiteral("freqMenu"));
        freqMenu->setGeometry(QRect(10, 20, 441, 461));
        powerWidget = new QWidget(centralwidget);
        powerWidget->setObjectName(QStringLiteral("powerWidget"));
        powerWidget->setGeometry(QRect(100, 20, 281, 141));
        powerLine = new QLineEdit(powerWidget);
        powerLine->setObjectName(QStringLiteral("powerLine"));
        powerLine->setGeometry(QRect(0, 70, 281, 71));
        powerLabel = new QLabel(powerWidget);
        powerLabel->setObjectName(QStringLiteral("powerLabel"));
        powerLabel->setGeometry(QRect(-10, 0, 281, 71));
        powerLine->raise();
        powerLabel->raise();
        programMenu = new QTableView(centralwidget);
        programMenu->setObjectName(QStringLiteral("programMenu"));
        programMenu->setGeometry(QRect(10, 20, 441, 461));
        treatmentWidget = new QWidget(centralwidget);
        treatmentWidget->setObjectName(QStringLiteral("treatmentWidget"));
        treatmentWidget->setGeometry(QRect(90, 20, 281, 141));
        counterLabel = new QLabel(treatmentWidget);
        counterLabel->setObjectName(QStringLiteral("counterLabel"));
        counterLabel->setGeometry(QRect(10, 0, 281, 71));
        timerText = new QLineEdit(treatmentWidget);
        timerText->setObjectName(QStringLiteral("timerText"));
        timerText->setGeometry(QRect(-20, 70, 321, 81));
        touchSkinButton = new QPushButton(centralwidget);
        touchSkinButton->setObjectName(QStringLiteral("touchSkinButton"));
        touchSkinButton->setGeometry(QRect(60, 500, 341, 51));
        touchSkinButton->setFont(font3);
        touchSkinButton->setCursor(QCursor(Qt::OpenHandCursor));
        languageMenu = new QTableView(centralwidget);
        languageMenu->setObjectName(QStringLiteral("languageMenu"));
        languageMenu->setGeometry(QRect(10, 20, 441, 461));
        DenaSimulator->setCentralWidget(centralwidget);
        treatmentWidget->raise();
        mainMenu->raise();
        settingsMenu->raise();
        freqMenu->raise();
        programMenu->raise();
        languageMenu->raise();
        downButton->raise();
        rightButton->raise();
        upButton->raise();
        leftButton->raise();
        confirmButton->raise();
        powerButton->raise();
        returnButton->raise();
        mainMenuButton->raise();
        powerWidget->raise();
        touchSkinButton->raise();
        powerLabel->raise();
        powerLine->raise();
        counterLabel->raise();
        powerLabel->raise();
        powerLine->raise();
        menubar = new QMenuBar(DenaSimulator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 33));
        menuDENA2 = new QMenu(menubar);
        menuDENA2->setObjectName(QStringLiteral("menuDENA2"));
        menuSimulator = new QMenu(menubar);
        menuSimulator->setObjectName(QStringLiteral("menuSimulator"));
        DenaSimulator->setMenuBar(menubar);

        menubar->addAction(menuDENA2->menuAction());
        menubar->addAction(menuSimulator->menuAction());

        retranslateUi(DenaSimulator);

        QMetaObject::connectSlotsByName(DenaSimulator);
    } // setupUi

    void retranslateUi(QMainWindow *DenaSimulator)
    {
        DenaSimulator->setWindowTitle(QApplication::translate("DenaSimulator", "DenaSimulator", 0));
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("DenaSimulator", "Down", 0));
#endif // QT_NO_TOOLTIP
        downButton->setText(QApplication::translate("DenaSimulator", "\342\206\223", 0));
#ifndef QT_NO_TOOLTIP
        rightButton->setToolTip(QApplication::translate("DenaSimulator", "RIght", 0));
#endif // QT_NO_TOOLTIP
        rightButton->setText(QApplication::translate("DenaSimulator", "\342\206\222", 0));
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("DenaSimulator", "Up", 0));
#endif // QT_NO_TOOLTIP
        upButton->setText(QApplication::translate("DenaSimulator", "\342\206\221", 0));
#ifndef QT_NO_TOOLTIP
        leftButton->setToolTip(QApplication::translate("DenaSimulator", "Left", 0));
#endif // QT_NO_TOOLTIP
        leftButton->setText(QApplication::translate("DenaSimulator", "\342\206\220", 0));
        confirmButton->setText(QApplication::translate("DenaSimulator", "OK", 0));
#ifndef QT_NO_TOOLTIP
        powerButton->setToolTip(QApplication::translate("DenaSimulator", "Power", 0));
#endif // QT_NO_TOOLTIP
        powerButton->setText(QApplication::translate("DenaSimulator", "On/Off", 0));
#ifndef QT_NO_TOOLTIP
        returnButton->setToolTip(QApplication::translate("DenaSimulator", "Return", 0));
#endif // QT_NO_TOOLTIP
        returnButton->setText(QApplication::translate("DenaSimulator", "\342\206\272", 0));
#ifndef QT_NO_TOOLTIP
        mainMenuButton->setToolTip(QApplication::translate("DenaSimulator", "Options", 0));
#endif // QT_NO_TOOLTIP
        mainMenuButton->setText(QApplication::translate("DenaSimulator", "\342\211\241", 0));
        powerLabel->setText(QApplication::translate("DenaSimulator", "Power", 0));
        counterLabel->setText(QApplication::translate("DenaSimulator", "Treatement", 0));
        timerText->setText(QString());
#ifndef QT_NO_TOOLTIP
        touchSkinButton->setToolTip(QApplication::translate("DenaSimulator", "Sensor", 0));
#endif // QT_NO_TOOLTIP
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
