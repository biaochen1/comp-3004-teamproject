#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

const int OFF_STATE = 0;
const int MENUS_STATE = 1;
const int MED_STATE = 2;
const int TREATMENT_STATE = 3;

int currState = OFF_STATE;
int prevState = OFF_STATE;
int currMenuOption = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display->setText(QString(" "));
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

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::arrowButtonPressed(){
    if (currState == 0) {
        return;
    }
    QPushButton *button = (QPushButton *)sender();
    QString btnPressed = button->text();
    QString *menuOptions[5] = ["PROGRAMS", "FREQUENCY", -];
    if (currState == 1) {
        if (btnPressed == "Up"){
            ui->Display->setText(QString(""));
        }
    } else {
        return;
    }
}
