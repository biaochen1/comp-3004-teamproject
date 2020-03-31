#ifndef DENASIMULATOR_H
#define DENASIMULATOR_H

#include <QMainWindow>
#include <QStringListModel>
#include <QTimer>
#include <QTime>

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

    void init_med_page();

    void init_main_page();

    void handle_main_page_selection(int currentOption);

    void on_rightButton_clicked();

    void setCountdown();

    void on_touchSkinButton_clicked();

    void on_leftButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::DenaSimulator *ui;
    void medTreatmentActive();
    void hideAll();
    void closeAll();
    QStringListModel *mainMenuModel;
    QStringListModel *programMenuModel;
    QStringListModel *settingModel;
    QStringList MainPageListModelEnglish;
    QStringList MainPageListModelFrench;
    QStringList ProgramPageListModelEnglish;
    QStringList ProgramPageListModelFrench;
    QStringList SettingPageListModel;
    QStringList SettingPageListModelFrench;
    QStringListModel *freqModel;
    QStringList FreqPageEnglish;
    QStringList FreqPageFrench;
    QTimer *treatmentQTimer;
    QTime *treatmentQTime;
};
#endif // DENASIMULATOR_H
