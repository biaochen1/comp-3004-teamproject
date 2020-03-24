#ifndef DENAS_2_H
#define DENAS_2_H

#include <QMainWindow>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class denas_2; }
QT_END_NAMESPACE

class denas_2 : public QMainWindow
{
    Q_OBJECT

public:
    denas_2(QWidget *parent = nullptr);
    ~denas_2();

private:
    Ui::denas_2 *ui;
    QStringListModel *model;
    QStringList MainPage;
    QStringListModel *freqModel;
    QStringList FreqPage;


private slots:
    void on_buttonDown_clicked();
    void on_buttonUp_clicked();
    void on_buttonLeft_clicked();
    void on_buttonRight_clicked();
    void on_buttonOk_clicked();
    void on_powerButton_clicked();

};
#endif // DENAS_2_H
