#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    listModel = new QStringListModel(this);
    MainPageListModel << "PROGRAMS" << "FREQUENCY" << "MED" << "SCREENING" << "CHILDREN" << "SETTINGS";

    listModel->setStringList(MainPageListModel);


    for (int i = 0; i < MainPageListModel.size(); i++) {
            listModel->setData(listModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
            listModel->setData(listModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
        }

    ui -> mainMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->mainMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);

        ui -> mainMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui -> mainMenu->horizontalHeader()->hide();
        ui -> mainMenu->setShowGrid(false);
        ui -> mainMenu -> setModel(listModel);
        ui -> mainMenu->verticalHeader()->hide();
        ui->mainMenu->selectRow(0);





    settingModel = new QStringListModel(this);
    SettingPageListModel << "SOUND" << "BRIGHTNESS" << "ECONOMY" << "RECORDING" << "CLOCK" << "ALARM CLOCK" << "LANGUAGE" << "COLOUR";
    settingModel->setStringList(SettingPageListModel);

        for (int i = 0; i < SettingPageListModel.size(); i++) {
            settingModel->setData(settingModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
            settingModel->setData(settingModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
        }

        ui->settingMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->settingMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);


        ui->settingMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui -> settingMenu->horizontalHeader()->hide();
        ui -> settingMenu->setShowGrid(false);
        ui -> settingMenu -> setModel(settingModel);
        ui -> settingMenu->verticalHeader()->hide();
        ui->settingMenu->selectRow(0);

}




MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_powerButton_clicked()
{

cout << "Power Button" << endl;
exit(0);
}

void MainWindow::on_upButton_clicked()
{
    cout << "Up Button" << endl;
    int currentOption = ui->mainMenu->currentIndex().row();
    int previousOption = currentOption;

    if(currentOption < MainPageListModel.size()) {
        previousOption--;
    }

    ui->mainMenu->selectRow(previousOption);

}


void MainWindow::on_downButton_clicked()
{
    cout << "Down Button" << endl;

    int currentOption = ui->mainMenu->currentIndex().row();

    int nextOption = currentOption;

    if(currentOption >= 0) {
        nextOption++;
    }

    ui->mainMenu->selectRow(nextOption);





    int currOption = ui->settingMenu->currentIndex().row();

    int neOption = currOption;

    if(currOption >= 0) {
        neOption++;
    }

    ui->settingMenu->selectRow(neOption);

    }




void MainWindow::on_leftButton_clicked()
{
    cout << "Left Button" << endl;


}



void MainWindow::on_enterButton_clicked()
{
    cout << "Enter Button | ";

    int currentOption = ui->mainMenu->currentIndex().row();

    cout << "Option Index :" << currentOption << endl;
    cout << "Main Menu Selection made " << endl;


         if (currentOption == 5){
             cout << "Settings Chosen" << endl;
             ui->mainMenu->close();
         }

}

void MainWindow::on_rightButton_clicked()
{

    cout << "Right Button" << endl;






}

void MainWindow::on_backButton_clicked()
{

    cout << "Back Button" << endl;
    if(ui->mainMenu->close()){

        ui->mainMenu->show();
    }
}
