#ifndef DENASIMULATOR_H
#define DENASIMULATOR_H

#include <QMainWindow>
#include <QStringListModel>
#include <QTimer>
#include <QTime>
#include <QElapsedTimer>

#include <QMediaPlayer>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class DenaSimulator; }
QT_END_NAMESPACE

class DenaSimulator : public QMainWindow
{
    Q_OBJECT

public:
    DenaSimulator(QWidget *parent = nullptr);
    ~DenaSimulator();

private slots:
    void on_downButton_clicked();

    void on_upButton_clicked();

    void on_powerButton_released();

    void on_returnButton_clicked();

    void on_mainMenuButton_clicked();

    void init_settings_page();

    void init_programs_page();

    void init_frequency_page();

    void init_main_page();

    void handle_main_page_selection(int currentOption);

    void on_rightButton_clicked();

    void setCountdown();

    void setCountUp();

    void on_touchSkinButton_clicked();

    void on_leftButton_clicked();

    void on_confirmButton_clicked();

    void init_language_page();

    void updateBattery();



private:
    Ui::DenaSimulator *ui;
    void hideAll();
    void closeAll();
    bool isSettingPowerLevel();
    void handle_settings_page_selection(int currentOption);
    void handle_language_selection(int selection);
    void disable_Buttons();
    void enable_Buttons();
    void resetAllMenus();
    QStringListModel *mainMenuModel;
    QStringListModel *programMenuModel;
    QStringListModel *settingModel;
    QStringListModel *languageModel;

    QStringList MainPageListModelEnglish;
    QStringList MainPageListModelFrench;
     QStringList MainPageListModelSpanish;

    QStringList ProgramPageListModelEnglish;
    QStringList ProgramPageListModelFrench;
    QStringList ProgramPageListModelSpanish;

    QStringList SettingPageListModel;
    QStringList SettingPageListModelFrench;
    QStringList SettingPageListModelSpanish;

    QStringList LanguagePageListModel;
    QStringList LanguagePageListModelFrench;
    QStringList LanguagePageListModelSpanish;

    QStringListModel *freqModel;
    QStringList FreqPageEnglish;
    QTimer *treatmentQTimer;
    QTime *treatmentQTime;
    QTimer *batteryTimer;

    QMediaPlayer *buttonsound;
};
#endif // DENASIMULATOR_H
