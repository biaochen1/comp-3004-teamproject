#ifndef DENASIMULATOR_H
#define DENASIMULATOR_H

#include <QMainWindow>
#include <QStringListModel>
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

    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_powerButton_released();

    void on_returnButton_clicked();

    void on_mainMenuButton_clicked();

    void on_confirmButton_released();

    void treatmentActive();

private:
    Ui::DenaSimulator *ui;
    QStringListModel *mainMenuModel;
    QStringListModel *settingModel;
    QStringListModel *medModel;
    QStringList MainPageListModelEnglish;
    QStringList MainPageListModelFrench;
    QStringList SettingPageListModel;
    QStringList SettingPageListModelFrench;
    QStringListModel *freqModel;
    QStringList FreqPageEnglish;
    QStringList FreqPageFrench;
    QTime *timer;
};
#endif // DENASIMULATOR_H
