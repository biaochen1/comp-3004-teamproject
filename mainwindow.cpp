#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
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



    if(!ui->mainMenu->close()){

         cout << "Main Menu Selection made " << endl;

         ui->mainMenu->close();
    }


}

void MainWindow::on_rightButton_clicked()
{





}
