#include "denasimulator.h"
#include "ui_denasimulator.h"
#include <iostream>

using namespace std;

const int OFF_STATE = 0;
const int ON_STATE = 1;
const int MAIN_MENUS_PAGE = 0;
const int MED_PAGE = 20;
const int TREATMENT_PAGE = 21;
const int PROGRAM_PAGE = 10;
const int FREQUENCY_PAGE = 30;
const int SETTIGNS_PAGE = 40;

static int currState = ON_STATE;
static int currMenuOption = 0;
static int currentPage = 0;

static int ENGLISH = 0;
static int FRENCH = 1;

DenaSimulator::DenaSimulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DenaSimulator)
{
    ui->setupUi(this);

    mainMenuModel = new QStringListModel(this);
    MainPageListModelEnglish << "PROGRAMS" << "FREQUENCY" << "MED" << "SCREENING" << "CHILDREN" << "SETTINGS";
    MainPageListModelFrench << "PROGRAMMES" << "LA FRÉQUENCE" << "MED" << "DÉPISTAGE" << "ENFANTS" << "RÉGLAGES";
    mainMenuModel->setStringList(MainPageListModelEnglish);

    for (int i = 0; i < MainPageListModelEnglish.size(); i++) {
        mainMenuModel->setData(mainMenuModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        mainMenuModel->setData(mainMenuModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui -> mainMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> mainMenu->verticalHeader()->hide();
    ui -> mainMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> mainMenu->horizontalHeader()->hide();
    ui -> mainMenu->setShowGrid(false);

    ui -> mainMenu -> setModel(mainMenuModel);

    ui->mainMenu->selectRow(0);

    settingModel = new QStringListModel(this);
    SettingPageListModel << "SOUND" << "BRIGHTNESS" << "ECONOMY" << "RECORDING" << "CLOCK" << "ALARM CLOCK" << "LANGUAGE" << "COLOUR";
    SettingPageListModelFrench << "DU SON" << "LUMINOSITÉ" << "ÉCONOMIE" << "ENREGISTREMENT" << "L'HORLOGE" << "RÉVEIL" << "LANGUE" << "COULEUR";

    settingModel->setStringList(SettingPageListModel);

    for (int i = 0; i < SettingPageListModel.size(); i++) {
        settingModel->setData(settingModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        settingModel->setData(settingModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui->settingsMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->settingsMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);


    ui->settingsMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> settingsMenu->horizontalHeader()->hide();
    ui -> settingsMenu->setShowGrid(false);
    ui -> settingsMenu -> setModel(settingModel);
    ui -> settingsMenu->verticalHeader()->hide();
    ui->settingsMenu->selectRow(0);
    ui->settingsMenu->close(); // by default hiding this one

    freqModel = new QStringListModel(this);
    FreqPageEnglish << "Symptom 1" << "Symptom 2" << "Symptom 3" << "Symptom 4"
                    << "Symptom 5" << "7720";
    FreqPageFrench << "Symptom 1" << "Symptom 2" << "Symptom 3" << "Symptom 4"
                   << "Symptom 5" << "7720";

    freqModel->setStringList(FreqPageEnglish);

    for (int i = 0; i < FreqPageEnglish.size(); i++) {
        freqModel->setData(freqModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        freqModel->setData(freqModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui->freqMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->freqMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);


    ui->freqMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> freqMenu->horizontalHeader()->hide();
    ui -> freqMenu->setShowGrid(false);
    ui -> freqMenu -> setModel(freqModel);
    ui -> freqMenu->verticalHeader()->hide();
    ui->freqMenu->selectRow(0);
    ui->freqMenu->close(); // by default hiding this one
}

DenaSimulator::~DenaSimulator()
{
    delete ui;
}

void DenaSimulator::on_downButton_clicked()
{
    if(!ui->mainMenu->isHidden()){
        int currentRow = ui->mainMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow < MainPageListModelEnglish.size() - 1) {
            futureRow++;
        }

        ui->mainMenu->selectRow(futureRow);
    }

    if(!ui->settingsMenu->isHidden()){
        int currentRow = ui->settingsMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow < SettingPageListModel.size() - 1) {
            futureRow++;
        }

        ui->settingsMenu->selectRow(futureRow);
    }

    if(!ui->freqMenu->isHidden()){
        int currentRow = ui->freqMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow < FreqPageEnglish.size() - 1) {
            futureRow++;
        }

        ui->freqMenu->selectRow(futureRow);
    }
}

void DenaSimulator::on_upButton_clicked()
{
    if(!ui->mainMenu->isHidden()){
        int currentRow = ui->mainMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow > 0) {
            futureRow--;
        }

        ui->mainMenu->selectRow(futureRow);
    }

    if(!ui->freqMenu->isHidden()){
        int currentRow = ui->freqMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow > 0) {
            futureRow--;
        }

        ui->freqMenu->selectRow(futureRow);
    }

    if(!ui->settingsMenu->isHidden()){
        int currentRow = ui->settingsMenu->currentIndex().row();

        int futureRow = currentRow;

        if(currentRow > 0) {
            futureRow--;
        }

        ui->settingsMenu->selectRow(futureRow);
    }
}


void DenaSimulator::on_powerButton_released()
{
    cout << "Power Button" << endl;
    if (currState == OFF_STATE) {
        currState = MAIN_MENUS_PAGE;
        //change the display to show menus
        ui->mainMenu->show();
    }
    else {
        currState = OFF_STATE;
        //change the display to show black screen
        ui->mainMenu->close();
        ui->settingsMenu->close();
        ui->freqMenu->close();
    }
}

void DenaSimulator::on_returnButton_clicked()
{
    if (currState != OFF_STATE){
        currState -= 1;
        //change the display to previous screen
    }
}

void DenaSimulator::on_mainMenuButton_clicked()
{
    if (currState != OFF_STATE) {
        currState = MAIN_MENUS_PAGE;
        //change the display to the main menu
    }
}

void DenaSimulator::treatmentActive(){
    if (currState==MED_PAGE) {
        currState = TREATMENT_PAGE;
    }
    if (currState == TREATMENT_PAGE) {
        //update the timer as the treatment button is held down
    }
}

void DenaSimulator::on_confirmButton_released()
{
    if (currMenuOption == 2) {
        currState = MED_PAGE;
        //change the display to the med screen
    }

    cout << "Enter Button | ";
    int currentOption = ui->mainMenu->currentIndex().row();


    cout << "Option Index :" << currentOption << endl;

    if(currentOption == 1 && currentPage == MAIN_MENUS_PAGE){
        cout << "Frequency Chosen" << endl;
        ui->mainMenu->close();
        ui->freqMenu->show();
        currentPage = FREQUENCY_PAGE;
    }
    else if (currentOption == 5 && currentPage == MAIN_MENUS_PAGE){
        cout << "Settings Chosen" << endl;

        ui->mainMenu->close();

        ui->settingsMenu->show();
        currentPage = SETTIGNS_PAGE;
    }
}
