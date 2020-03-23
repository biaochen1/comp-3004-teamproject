#include "mainwindow.h"
#include "ui_mainwindow.h"

const int OFF_STATE = 0;
const int MENUS_STATE = 1;
const int MED_STATE = 2;
const int TREATMENT_STATE = 3;

static int currState = OFF_STATE;
static int currMenuOption = 0;
static int currLevel = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display->setText("");

    QPushButton *arrows[4];
    for (int i=0;i <4; i++) {
        if (i == 0) {
            arrows[i] = MainWindow::findChild<QPushButton *>(QString("UpButton"));
        } else if (i == 1) {
            arrows[i] = MainWindow::findChild<QPushButton *>(QString("DownButton"));
        } else if (i == 2) {
            arrows[i] = MainWindow::findChild<QPushButton *>(QString("LeftButton"));
        } else {
            arrows[i] = MainWindow::findChild<QPushButton *>(QString("RightButton"));
        }
        connect(arrows[i], SIGNAL(released()), this, SLOT(arrowButtonPressed()));
    }
    QPushButton *powerBtn = MainWindow::findChild<QPushButton *>(QString("PowerButton"));
    connect(powerBtn, SIGNAL(released()), this, SLOT(powerButtonPressed()));
    QPushButton *okBtn = MainWindow::findChild<QPushButton *>(QString("OKButton"));
    connect(okBtn, SIGNAL(released()), this, SLOT(okButtonPressed()));
    QPushButton *returnBtn = MainWindow::findChild<QPushButton *>(QString("ReturnButton"));
    connect(returnBtn, SIGNAL(released()), this, SLOT(returnButtonPressed()));
    QPushButton *mainMenuBtn = MainWindow::findChild<QPushButton *>(QString("MainMenuButton"));
    connect(mainMenuBtn, SIGNAL(released()), this, SLOT(mainMenuButtonPressed()));
    QPushButton *treatmentBtn = MainWindow::findChild<QPushButton *>(QString("MainMenuButton"));
    connect(treatmentBtn, SIGNAL(pressed()), this, SLOT(treatmentActive()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::arrowButtonPressed(){
    if (currState == OFF_STATE) {
        return;
    }
    QPushButton *button = (QPushButton *)sender();
    QString btnPressed = button->text();
    if (currState == MENUS_STATE) {
        if (btnPressed == "Up"){
            if (currMenuOption == 0) {
                return;
            }
            else {
                currMenuOption -= 1;
                if (currMenuOption == 0) {
                    //unhighlight frequency
                    //highlight program
                }
                else if (currMenuOption == 1) {
                    //unhighlight med
                    //highlight frequency
                }
                else if (currMenuOption == 2) {
                    //unhighlight settings
                    //highlight med
                }
            }
        }
        else if (btnPressed == "Down"){
            if (currMenuOption == 3) {
                return;
            }
            else {
                currMenuOption += 1;
                if (currMenuOption == 1) {
                    //highlight frequency
                    //unhighlight program
                }
                else if (currMenuOption == 2) {
                    //highlight med
                    //unhighlight frequency
                }
                else if (currMenuOption == 3) {
                    //highlight settings
                    //unhighlight med
                }
            }
        }
    }else if (currState == MED_STATE) {
        if (btnPressed == "Left"){
            if (currLevel == 0) {
                return;
            }
            else {
                currLevel -= 1;
            }
        }
        else if (btnPressed == "Right"){
            if (currLevel == 3) {
                return;
            }
            else {
                currLevel += 1;
            }
        }
        //update value on screen
    } else {
        return;
    }
}

void MainWindow::powerButtonPressed() {
    if (currState == OFF_STATE) {
        currState = MENUS_STATE;
        //change the display to show menus
    }
    else {
        currState = OFF_STATE;
        //change the display to show black screen
    }
}

void MainWindow::returnButtonPressed() {
    if (currState != OFF_STATE){
        currState -= 1;
        //change the display to previous screen
    }
}

void MainWindow::okButtonPressed() {
    if (currMenuOption == 2) {
        currState = MED_STATE;
        //change the display to the med screen
    }
}

void MainWindow::mainMenuButtonPressed(){
    if (currState != OFF_STATE) {
        currState = MENUS_STATE;
        //change the display to the main menu
    }
}

void MainWindow::treatmentActive(){
    if (currState==MED_STATE) {
        currState = TREATMENT_STATE;
    }
    if (currState == TREATMENT_STATE) {
        //update the timer as the treatment button is held down
    }
}

