#ifndef DENASIMULATOR_H
#define DENASIMULATOR_H

#include <QMainWindow>
#include <QStringListModel>

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

    void on_confirmButton_released();

private:
    Ui::DenaSimulator *ui;
    void treatmentActive();
    QStringListModel *mainMenuModel;
    QStringListModel *settingModel;
    QStringList MainPageListModelEnglish;
    QStringList MainPageListModelFrench;
    QStringList SettingPageListModel;
    QStringList SettingPageListModelFrench;
    QStringListModel *freqModel;
    QStringList FreqPageEnglish;
    QStringList FreqPageFrench;
};
#endif // DENASIMULATOR_H
