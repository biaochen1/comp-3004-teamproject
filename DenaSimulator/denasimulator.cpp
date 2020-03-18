#include "denasimulator.h"
#include "ui_denasimulator.h"

DenaSimulator::DenaSimulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DenaSimulator)
{
    ui->setupUi(this);

    model = new QStringListModel(this);
    MainPageList << "Program" << "Frequency" << "MED"<<"Settings";

    model->setStringList(MainPageList);

    for (int i = 0; i < MainPageList.size(); i++) {
        model->setData(model->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        model->setData(model->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui -> mainMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> mainMenu->verticalHeader()->hide();
    ui -> mainMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> mainMenu->horizontalHeader()->hide();
    ui -> mainMenu->setShowGrid(false);

    ui -> mainMenu -> setModel(model);

    ui->mainMenu->selectRow(0);
}

DenaSimulator::~DenaSimulator()
{
    delete ui;
}

void DenaSimulator::on_downButton_clicked()
{
    int currentRow = ui->mainMenu->currentIndex().row();

    int futureRow = currentRow;

    if(currentRow < MainPageList.size() - 1) {
        futureRow++;
    }

    ui->mainMenu->selectRow(futureRow);
}

void DenaSimulator::on_upButton_clicked()
{
    int currentRow = ui->mainMenu->currentIndex().row();

    int futureRow = currentRow;

    if(currentRow > 0) {
        futureRow--;
    }

    ui->mainMenu->selectRow(futureRow);
}

