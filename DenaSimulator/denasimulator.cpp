#include "denasimulator.h"
#include "ui_denasimulator.h"
#include <iostream>

using namespace std;

const int OFF_STATE = 0;
const int ON_STATE = 1;


const int MAIN_MENUS_PAGE = 0;
const int PROGRAM_PAGE = 10;
const int MED_PAGE = 20;
const int FREQUENCY_PAGE = 30;
const int SETTIGNS_PAGE = 40;
const int LANGUAGE_PAGE = 41;

static int POWER_STATE = ON_STATE;
static int currentPage = 0;
static int currentBatteryLevel = 100;

static int BATTERY_DRAIN_SPEED = 3000;

DenaSimulator::DenaSimulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DenaSimulator)
{
    ui->setupUi(this);

    init_main_page();

    init_frequency_page();

    init_settings_page();

    init_programs_page();

    init_language_page();

    ui->powerWidget->setVisible(false);
    ui->powerLabel->setAlignment(Qt::AlignCenter);
    ui->powerBar->setRange(1, 20);
    ui->powerBar->setValue(1);
    ui->powerBar->setFormat("%v");

    ui->treatmentWidget->setVisible(false);
    ui->counterLabel->setAlignment(Qt::AlignCenter);
    ui->timerText->setAlignment(Qt::AlignCenter);
    ui->timerText->setReadOnly(true);

    ui->batteryLevel->setVisible(true);
    ui->batteryLevel->setValue(currentBatteryLevel);
    batteryTimer = new QTimer();
    QObject :: connect (batteryTimer, SIGNAL (timeout ()), this, SLOT (updateBattery ()));
    batteryTimer->start(BATTERY_DRAIN_SPEED);
}

DenaSimulator::~DenaSimulator()
{
    delete ui;
}


void DenaSimulator::init_language_page(){
    languageModel = new QStringListModel(this);
    LanguagePageListModel << "ENGLISH" << "FRENCH" << "SPANISH";
    LanguagePageListModelFrench <<"ANGLAIS" <<"FRANÇAIS" << "ESPAGNOL";
    LanguagePageListModelSpanish <<"INGLÉS" << "FRANCÉS" <<"ESPAÑOL";
    languageModel->setStringList(LanguagePageListModel);

    for (int i = 0; i < LanguagePageListModel.size(); i++) {
        languageModel->setData(languageModel->index(i, 0), Qt::AlignRight, Qt::TextAlignmentRole);
        languageModel->setData(languageModel->index(0, i), Qt::AlignRight, Qt::TextAlignmentRole);
    }

    ui->languageMenu->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->languageMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);


    ui->languageMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui -> languageMenu->horizontalHeader()->hide();
    ui -> languageMenu->setShowGrid(false);
    ui -> languageMenu -> setModel(languageModel);
    ui -> languageMenu->verticalHeader()->hide();
    ui->languageMenu->selectRow(0);
    ui->languageMenu->close(); // by default hiding this one
}

void DenaSimulator::init_main_page(){
    mainMenuModel = new QStringListModel(this);
    MainPageListModelEnglish << "PROGRAMS" << "FREQUENCY" << "MED" << "SCREENING" << "CHILDREN" << "SETTINGS";
    MainPageListModelFrench << "PROGRAMMES" << "LA FRÉQUENCE" << "MED" << "DÉPISTAGE" << "ENFANTS" << "RÉGLAGES";
    MainPageListModelSpanish << "PROGRAMAS"<< "FRECUENCIA"<< "DEM"<< "EVALUACIÓN"<< "NIÑOS"<< "AJUSTES";

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

void DenaSimulator::updateBattery() {
    if (POWER_STATE == ON_STATE) {
        currentBatteryLevel -= 1;
        ui->batteryLevel->setValue(currentBatteryLevel);
        if (currentBatteryLevel == 0) {
            POWER_STATE = OFF_STATE;
            closeAll();
            disable_Buttons();
            delete batteryTimer;
        }
    }
}

void DenaSimulator::init_frequency_page() {
    freqModel = new QStringListModel(this);
    FreqPageEnglish << "1.0-9.9 Hz" << "10 Hz" << "20 Hz" << "60 Hz"
                    << "77 Hz" << "125 Hz" << "140 Hz" << "200 Hz" << "7710" << "7720" << "77AM";

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
    ProgramPageListModelSpanish <<"ALERGIA"<< "DOLOR"<<
                                  "INT.PAIN" << "BLOATING" << "DYSTONIA" << "GYN.PAIN" <<"GINECOLOGÍA" << "HIPERTENSIÓN" << "HIPOTONIA" << "CABEZA" <<"GARGANTA";

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
    SettingPageListModelSpanish << "SONIDO" << "BRILLO" << "ECONOMÍA" << "GRABACIÓN" << "RELOJ" << "RELOJ DE ALARMA" << "IDIOMA" << "COLOR";

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
    }else if (!ui->languageMenu->isHidden()){
        curView = ui->languageMenu;
        curList = LanguagePageListModel;
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
    } else if (!ui->languageMenu->isHidden()){
        curView = ui->languageMenu;
    }

    int currentRow = curView->currentIndex().row();
    int futureRow = currentRow;

    if(currentRow >0) {
        futureRow--;
    }

    curView->selectRow(futureRow);
}

// setting behaviors for simulating turning the machine on/off
void DenaSimulator::on_powerButton_released()
{
    cout << "Power Button" << endl;
    if (POWER_STATE == OFF_STATE) {
        currentBatteryLevel = currentBatteryLevel == 0 ? 100 : currentBatteryLevel; // if battery level is 0, user will recharge it back to 100%
        POWER_STATE = ON_STATE;
        currentPage = MAIN_MENUS_PAGE;
        //change the display to show menus
        ui->mainMenu->selectRow(0);
        ui->mainMenu->show();
        ui->batteryLevel->show();
        ui->batteryLevel->setValue(currentBatteryLevel);
        batteryTimer = new QTimer(this);
        connect(batteryTimer, &QTimer::timeout, this, &DenaSimulator::updateBattery);
        batteryTimer->start(3000);
        enable_Buttons();
    }
    else {
        POWER_STATE = OFF_STATE;
        //change the display to show black screen
        disable_Buttons();
        closeAll();
    }
}

void DenaSimulator::closeAll(){
    ui->mainMenu->close();
    ui->settingsMenu->close();
    ui->freqMenu->close();
    ui->programMenu->close();
    ui->powerWidget->close();
    ui->treatmentWidget->close();
    ui->batteryLevel->hide();
}

// behavior of confirm button for different pages
void DenaSimulator::on_confirmButton_clicked()
{
    if(currentPage == MAIN_MENUS_PAGE) {
        cout << "Enter Button | ";
        int currentOption = ui->mainMenu->currentIndex().row();
        cout << "Option Index :" << currentOption << endl;
        handle_main_page_selection(currentOption);
    } else if (currentPage == PROGRAM_PAGE) {
        ui->programMenu->hide();
        ui->powerWidget->show();
    }else if (currentPage == FREQUENCY_PAGE) {
        ui->freqMenu->hide();
        ui->powerWidget->show();
    } else if (currentPage == SETTIGNS_PAGE) {
        int currentOption = ui->settingsMenu->currentIndex().row();
        handle_settings_page_selection(currentOption);
    } else if (currentPage == LANGUAGE_PAGE) {
        int currentOption = ui->languageMenu->currentIndex().row();
        handle_language_selection(currentOption);
    }
}

//setup different behaviors when return button is clicked. It almost works like a state machine
//while the currentPage is actually the current system state. By observing the current state, we can tell
//which menu we should return to.
void DenaSimulator::on_returnButton_clicked()
{
    if (currentPage != OFF_STATE){
        ui->powerBar->setValue(1);
        if(ui->treatmentWidget->isVisible()){
            delete treatmentQTimer;
            delete treatmentQTime;
            ui->timerText->clear();
            hideAll();

            switch(currentPage){
            case PROGRAM_PAGE:
                ui->programMenu->show();
                break;
            case FREQUENCY_PAGE:
                ui->freqMenu->show();
                break;
            case MED_PAGE:
                ui->mainMenu->show();
                currentPage = MAIN_MENUS_PAGE;
                break;
            default:
                ui->mainMenu->show();
                currentPage = MAIN_MENUS_PAGE;
                break;
            }
        } else if(ui->powerWidget->isVisible()){
            hideAll();

            switch(currentPage){
            case PROGRAM_PAGE:
                ui->programMenu->show();
                break;
            case FREQUENCY_PAGE:
                ui->freqMenu->show();
                break;
            case MED_PAGE:
                ui->mainMenu->show();
                currentPage = MAIN_MENUS_PAGE;
                break;
            default:
                ui->mainMenu->show();
                currentPage = MAIN_MENUS_PAGE;
                break;
            }
        }else if(ui->languageMenu->isVisible()){
            hideAll();

            ui->settingsMenu->show();
            currentPage = SETTIGNS_PAGE;
        }else {
            hideAll();
            switch(currentPage){
            case PROGRAM_PAGE:
            case FREQUENCY_PAGE:
            case MED_PAGE:
            default:
                currentPage = MAIN_MENUS_PAGE;
                ui->mainMenu->show();
                break;
            }
        }
    }
}

void DenaSimulator::on_mainMenuButton_clicked()
{
    if (currentPage != OFF_STATE){
        ui->powerBar->setValue(1);
        if(ui->treatmentWidget->isVisible()){
            delete treatmentQTimer;
            delete treatmentQTime;
            ui->timerText->clear();
        }
        hideAll();
        currentPage = MAIN_MENUS_PAGE;


        resetAllMenus();

        ui->mainMenu->show();
    }
}

void DenaSimulator::hideAll(){
    ui->mainMenu->hide();
    ui->settingsMenu->hide();
    ui->freqMenu->hide();
    ui->programMenu->hide();
    ui->powerWidget->hide();
    ui->treatmentWidget->hide();
    ui->languageMenu->hide();
}

void DenaSimulator::handle_settings_page_selection(int currentOption){
    if(currentOption == 6) {
        currentPage = LANGUAGE_PAGE;
        ui->settingsMenu->hide();
        ui->languageMenu->show();
    }
}

void DenaSimulator::handle_language_selection(int selection)
{

    if (selection == 0) {
        mainMenuModel->setStringList(MainPageListModelEnglish);
        settingModel->setStringList(SettingPageListModel);
        programMenuModel->setStringList(ProgramPageListModelEnglish);
        languageModel->setStringList(LanguagePageListModel);
    } else if (selection == 1) {
        mainMenuModel->setStringList(MainPageListModelFrench);
        settingModel->setStringList(SettingPageListModelFrench);
        programMenuModel->setStringList(ProgramPageListModelFrench);
        languageModel->setStringList(LanguagePageListModelFrench);
    } else if (selection == 2) {
        mainMenuModel->setStringList(MainPageListModelSpanish);
        settingModel->setStringList(SettingPageListModelSpanish);
        programMenuModel->setStringList(ProgramPageListModelSpanish);
        languageModel->setStringList(LanguagePageListModelSpanish);
    }


    resetAllMenus();
}

void DenaSimulator::disable_Buttons(){
    ui->confirmButton->setEnabled(false);
    ui->returnButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    ui->leftButton->setEnabled(false);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->mainMenuButton->setEnabled(false);

}

void DenaSimulator::enable_Buttons(){
    ui->confirmButton->setEnabled(true);
    ui->returnButton->setEnabled(true);
    ui->rightButton->setEnabled(true);
    ui->leftButton->setEnabled(true);
    ui->upButton->setEnabled(true);
    ui->downButton->setEnabled(true);
    ui->mainMenuButton->setEnabled(true);

}

void DenaSimulator::resetAllMenus()
{
    ui->languageMenu->selectRow(0);
    ui->settingsMenu->selectRow(0);
    ui->mainMenu->selectRow(0);
    ui->programMenu->selectRow(0);
}

//define what page to go upon confirm button clicked in main page.
void DenaSimulator::handle_main_page_selection(int currentOption){
    if(currentOption == 1 && currentPage == MAIN_MENUS_PAGE){
        cout << "Frequency Chosen" << endl;

        ui->mainMenu->hide();
        ui->freqMenu->show();
        currentPage = FREQUENCY_PAGE;
    }
    else if (currentOption == 5 && currentPage == MAIN_MENUS_PAGE){
        cout << "Settings Chosen" << endl;

        ui->mainMenu->hide();
        ui->settingsMenu->show();
        currentPage = SETTIGNS_PAGE;
    } else if(currentOption == 2){
        currentPage = MED_PAGE;
        ui->mainMenu->hide();
        ui->powerWidget->show();
    } else if (currentOption == 0) {
        ui->mainMenu->hide();
        ui->programMenu->show();
        currentPage = PROGRAM_PAGE;
    }
}

void DenaSimulator::on_rightButton_clicked()
{
    if (isSettingPowerLevel()) {
        int power = ui->powerBar->value() + 1;
        cout << power << endl;
        if (power < ui->powerBar->maximum()) {
            ui->powerBar->setValue(power);
        }
    }
}

void DenaSimulator::on_leftButton_clicked()
{
    if (isSettingPowerLevel()) {
        int power = ui->powerBar->value() - 1;
        cout << power << endl;
        if (power > ui->powerBar->minimum()) {
            ui->powerBar->setValue(power);
        }
    }
}

void DenaSimulator::setCountdown(){
    QTime t = treatmentQTime->addSecs (-1);
    treatmentQTime->setHMS (0, t.minute (), t.second ());

    ui->timerText->setText(treatmentQTime->toString());
}

void DenaSimulator::setCountUp() {
    QTime t = treatmentQTime->addSecs (1);
    treatmentQTime->setHMS (0, t.minute (), t.second ());

    ui->timerText->setText(treatmentQTime->toString());
}

//Utilize QTimer to setup timer countdown to trigger events
void DenaSimulator::on_touchSkinButton_clicked()
{
    treatmentQTimer = new QTimer ();

    if ((currentPage == PROGRAM_PAGE || currentPage == FREQUENCY_PAGE)&& ui->powerWidget->isVisible()) {
        ui->powerWidget->hide();
        ui->treatmentWidget->show();
        treatmentQTime = new QTime (0, 10, 00);

        QObject :: connect (treatmentQTimer, SIGNAL (timeout ()), this, SLOT (setCountdown ()));
        treatmentQTimer->start(1000);
    } else if (currentPage == MED_PAGE && ui->powerWidget->isVisible()){
        ui->powerWidget->hide();
        ui->treatmentWidget->show();
        treatmentQTimer = new QTimer ();
        treatmentQTime = new QTime (0, 0, 00);

        QObject :: connect (treatmentQTimer, SIGNAL (timeout()), this, SLOT (setCountUp ()));
        treatmentQTimer->start(1000);
    }
}

bool DenaSimulator::isSettingPowerLevel()
{
    return (currentPage == PROGRAM_PAGE || currentPage == FREQUENCY_PAGE || currentPage == MED_PAGE )&& ui->powerWidget->isVisible();
}

