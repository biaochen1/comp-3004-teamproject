#include "denasimulator.h"
#include "ui_denasimulator.h"
#include <iostream>

using namespace std;

const int OFF_STATE = 0;
const int ON_STATE = 1;


const int MAIN_MENUS_PAGE = 0;
const int PROGRAM_PAGE = 10;
const int MED_PAGE = 20;
const int TREATMENT_PAGE = 21;
const int FREQUENCY_PAGE = 30;
const int SETTIGNS_PAGE = 40;

static int POWER_STATE = ON_STATE;
static int currMenuOption = 0;
static int currentPage = 0;

static int ENGLISH = 0;
static int FRENCH = 1;

DenaSimulator::DenaSimulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DenaSimulator)
{
    ui->setupUi(this);

    init_main_page();

    init_frequency_page();

    init_settings_page();

    init_programs_page();

    init_med_page();

    ui->powerWidget->setVisible(false);
    ui->powerLabel->setAlignment(Qt::AlignCenter);


    ui->treatmentWidget->setVisible(false);
    ui->counterLabel->setAlignment(Qt::AlignCenter);
}

DenaSimulator::~DenaSimulator()
{
    delete ui;
}

void DenaSimulator::init_med_page(){

}

void DenaSimulator::init_main_page(){
    mainMenuModel = new QStringListModel(this);
    MainPageListModelEnglish << "PROGRAMS" << "FREQUENCY" << "MED" << "SCREENING" << "CHILDREN" << "SETTINGS";    // English options
    MainPageListModelFrench << "PROGRAMMES" << "LA FRÉQUENCE" << "MED" << "DÉPISTAGE" << "ENFANTS" << "RÉGLAGES"; // French options


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
}

void DenaSimulator::init_frequency_page() {
    freqModel = new QStringListModel(this);
    FreqPageEnglish << "1.0-9.9 Hz" << "10 Hz" << "20 Hz" << "60 Hz" << "77 Hz" << "125 Hz" << "140 Hz" << "200 Hz" << "7710" << "7720" << "77AM";
    FreqPageFrench << "1.0-9.9 Hz" << "10 Hz" << "20 Hz" << "60 Hz" << "77 Hz" << "125 Hz" << "140 Hz" << "200 Hz" << "7710" << "7720" << "77AM";

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


void DenaSimulator::init_programs_page(){
    programMenuModel = new QStringListModel(this);
    ProgramPageListModelEnglish << "ALLERGY" << "PAIN" << "INT.PAIN" << "BLOATING" << "DYSTONIA" << "GYN.PAIN"<<"GYNECOLOGY"
                                << "HYPERTENSION"<<"HYPOTONIA" << "HEAD"<<"THROAT";
    ProgramPageListModelFrench << "ALLERGY" << "PAIN" << "INT.PAIN" << "BLOATING" << "DYSTONIA" << "GYN.PAIN"<<"GYNECOLOGY"
                               << "HYPERTENSION"<<"HYPOTONIA" << "HEAD"<<"THROAT";
    programMenuModel->setStringList(ProgramPageListModelEnglish);

    for (int i = 0; i < ProgramPageListModelEnglish.size(); i++) {
        programMenuModel->setData(programMenuModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        programMenuModel->setData(programMenuModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui -> programMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> programMenu->verticalHeader()->hide();
    ui -> programMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> programMenu->horizontalHeader()->hide();
    ui -> programMenu->setShowGrid(false);

    ui -> programMenu -> setModel(programMenuModel);

    ui->programMenu->selectRow(0);
    ui->programMenu->close();
}


void DenaSimulator::init_settings_page()
{
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
}

void DenaSimulator::on_downButton_clicked()
{
    QTableView *curView = ui->mainMenu;
    QStringList curList = MainPageListModelEnglish;
    if(!ui->mainMenu->isHidden()){
        curList = MainPageListModelEnglish;
        curView = ui->mainMenu;
    }
    else  if(!ui->settingsMenu->isHidden()){
        curList = SettingPageListModel;
        curView = ui->settingsMenu;
    } else if(!ui->freqMenu->isHidden()){
        curList = FreqPageEnglish;
        curView = ui->freqMenu;
    }else if (!ui -> programMenu -> isHidden()) {
        curView = ui->programMenu;
        curList =ProgramPageListModelEnglish;
    }

    int currentRow = curView->currentIndex().row();
    int futureRow = currentRow;

    if(currentRow < curList.size() - 1) {
        futureRow++;
    }

    curView->selectRow(futureRow);
}

void DenaSimulator::on_upButton_clicked()
{
    QTableView *curView = ui->mainMenu;

    if(!ui->mainMenu->isHidden()){
        curView = ui->mainMenu;
    }
    else if(!ui->settingsMenu->isHidden()){
        curView = ui->settingsMenu;
    } else if (!ui -> freqMenu -> isHidden()) {
        curView = ui->freqMenu;
    } else if (!ui -> programMenu -> isHidden()) {
        curView = ui->programMenu;
    }

    int currentRow = curView->currentIndex().row();
    int futureRow = currentRow;

    if(currentRow >0) {
        futureRow--;
    }

    curView->selectRow(futureRow);

    //    delete(curView);

    //    if(!ui->mainMenu->isHidden()){
    //        int currentRow = ui->mainMenu->currentIndex().row();

    //        int futureRow = currentRow;

    //        if(currentRow > 0) {
    //            futureRow--;
    //        }

    //        ui->mainMenu->selectRow(futureRow);
    //    }

    //    if(!ui->freqMenu->isHidden()){
    //        int currentRow = ui->freqMenu->currentIndex().row();

    //        int futureRow = currentRow;

    //        if(currentRow > 0) {
    //            futureRow--;
    //        }

    //        ui->freqMenu->selectRow(futureRow);
    //    }

    //    if(!ui->settingsMenu->isHidden()){
    //        int currentRow = ui->settingsMenu->currentIndex().row();

    //        int futureRow = currentRow;

    //        if(currentRow > 0) {
    //            futureRow--;
    //        }

    //        ui->settingsMenu->selectRow(futureRow);
    //    }
}


void DenaSimulator::on_powerButton_released()
{
    cout << "Power Button" << endl;
    if (POWER_STATE == OFF_STATE) {
        POWER_STATE = ON_STATE;
        currentPage = MAIN_MENUS_PAGE;
        //change the display to show menus
        ui->mainMenu->selectRow(0);
        ui->mainMenu->show();
    }
    else {
        POWER_STATE = OFF_STATE;
        //change the display to show black screen
        ui->mainMenu->close();
        ui->settingsMenu->close();
        ui->freqMenu->close();
        ui->programMenu->close();
        ui->powerWidget->close();

    }
}

void DenaSimulator::on_returnButton_clicked()
{

    cout << currentPage << endl;


    if(ui->mainMenu->isHidden() && ui->settingsMenu->isHidden() && ui->programMenu->isHidden()){
        cout << "Frequency Menu -> Main Menu" << endl;
        ui->freqMenu->hide();
        ui->mainMenu->show();

    }else if(ui->settingsMenu->isHidden() && ui->freqMenu->isHidden() && ui->programMenu->isHidden()){
        cout << "Main Menu" << endl;
        currentPage = MAIN_MENUS_PAGE;

    }else if (ui->freqMenu->isHidden() && ui->mainMenu->isHidden() && ui->programMenu->isHidden()){
        cout << "Settings Menu -> Main Menu" << endl;
        currentPage = MAIN_MENUS_PAGE;
        ui->settingsMenu->hide();
        ui->mainMenu->show();
    }else if(ui->freqMenu->isHidden() && ui->mainMenu->isHidden() && ui->settingsMenu->isHidden()){
        cout << "Programs Menu -> Main Menu" << endl;
        currentPage = MAIN_MENUS_PAGE;
        ui->programMenu->hide();
        ui->mainMenu->show();

    }



//    if (currentPage != OFF_STATE){
//        currentPage -= 1;
//        //change the display to previous screen
//    }
}

void DenaSimulator::on_mainMenuButton_clicked()
{
    if (currentPage != OFF_STATE) {
        currentPage = MAIN_MENUS_PAGE;
        ui->mainMenu->hide();
        ui->settingsMenu->hide();
        ui->freqMenu->hide();
        ui->programMenu->hide();
        ui->powerWidget->hide();

        ui->mainMenu->selectRow(0);
        ui->mainMenu->show();
        //change the display to the main menu
    }
}

void DenaSimulator::treatmentActive(){
    if (currentPage==MED_PAGE) {
        currentPage = TREATMENT_PAGE;
    }
    if (currentPage == TREATMENT_PAGE) {
        //update the timer as the treatment button is held down
    }
}

void DenaSimulator::handle_main_page_selection(int currentOption){
    if(currentOption == 1 && currentPage == MAIN_MENUS_PAGE){
        cout << "Frequency Chosen" << endl;

        ui->mainMenu->hide();
        ui->settingsMenu->hide();
        ui->freqMenu->show();
        currentPage = FREQUENCY_PAGE;
    }
    else if (currentOption == 5 && currentPage == MAIN_MENUS_PAGE){
        cout << "Settings Chosen" << endl;

        ui->mainMenu->hide();
        ui->freqMenu->hide();
        ui->settingsMenu->show();

        currentPage = SETTIGNS_PAGE;
    } else if(currentOption == 2){
        currentPage = MED_PAGE;
        //change the display to the med screen
    } else if (currentOption == 0) {
        ui->mainMenu->hide();
        ui->programMenu->show();
        currentPage = PROGRAM_PAGE;
    }
}

void DenaSimulator::on_confirmButton_released()
{
    if(currentPage == MAIN_MENUS_PAGE) {
        cout << "Enter Button | ";
        int currentOption = ui->mainMenu->currentIndex().row();


        cout << "Option Index :" << currentOption << endl;
        handle_main_page_selection(currentOption);
    } else if (currentPage == PROGRAM_PAGE) {
        ui->programMenu->hide();
        ui->powerWidget->show();
        ui->powerLine->setText("1");
    }
}

void DenaSimulator::on_rightButton_clicked()
{
    if (currentPage == PROGRAM_PAGE && ui->powerWidget->isVisible()) {
        int power = ui->powerLine->text().toInt();
        if(power < 40){
            ui->powerLine->setText(QString::number(power +1));
        }
    }
}

void DenaSimulator::setCountdown(){
    countdownTime->setHMS (0, countdownTime->addSecs (-1).minute (), countdownTime->addSecs (-1).second ());

    ui->timerText->setText(countdownTime->toString());
}

void DenaSimulator::on_touchSkinButton_clicked()
{
    if(currentPage == PROGRAM_PAGE && ui->powerWidget->isVisible()){
        ui->powerWidget->hide();
        ui->treatmentWidget->show();
        countdownTimer = new QTimer ();
        countdownTime = new QTime (0, 10, 59);

        QObject :: connect (countdownTimer, SIGNAL (timeout ()), this, SLOT (setCountdown ()));
        countdownTimer->start(1000);
    }
}
