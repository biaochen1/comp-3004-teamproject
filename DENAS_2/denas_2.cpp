#include "denas_2.h"
#include "ui_denas_2.h"

denas_2::denas_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::denas_2)
{
    ui->setupUi(this);

    model = new QStringListModel(this);
    MainPage << "Program" << "Frequency" << "MED" << "Settings";

    model->setStringList(MainPage);

    for(int i=0; i<MainPage.size(); i++){
        model->setData(model->index(i,0), Qt::AlignRight, Qt::TextAlignmentRole);
        model->setData(model->index(0,i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui->display->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->display->horizontalHeader()->hide();
    ui->display->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->display->verticalHeader()->hide();
    ui->display->setShowGrid(false);
    ui->display->setModel(model);
    ui->display->selectRow(0);


    freqModel = new QStringListModel(this);
    FreqPage << "Symptom 1" << "Symptom 2" << "Symptom 3" << "Symptom 4"
             << "Symptom 5" << "7720";

    freqModel->setStringList(FreqPage);

    for(int i=0; i<FreqPage.size(); i++){
        freqModel->setData(freqModel->index(i,0), Qt::AlignRight, Qt::TextAlignmentRole);
        freqModel->setData(freqModel->index(0,i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui->display->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->display->horizontalHeader()->hide();
    ui->display->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->display->verticalHeader()->hide();
    ui->display->setShowGrid(false);
    ui->display->setModel(model);
    ui->display->selectRow(0);

}

denas_2::~denas_2()
{
    delete ui;
}

void denas_2::on_buttonDown_clicked(){
    int currSelect = ui->display->currentIndex().row();
    int nextSelect = currSelect;

    if(currSelect>=0 && currSelect<=3){
        nextSelect++;
    }

    ui->display->selectRow(nextSelect);
}

void denas_2::on_buttonUp_clicked(){
    int currSelect = ui->display->currentIndex().row();
    int prevSelect = currSelect;

    if(currSelect>=0 && currSelect<=3){
        prevSelect--;
    }

    ui->display->selectRow(prevSelect);
}

void denas_2::on_buttonLeft_clicked(){
    return;
}

void denas_2::on_buttonRight_clicked(){
    return;
}

void denas_2::on_buttonOk_clicked(){
    int currSelect = ui->display->currentIndex().row();

    if(currSelect == 1){
        ui->display->close();
        //ui->setupUi(this->freqModel);

    }
}

void denas_2::on_powerButton_clicked(){
    return;
}
