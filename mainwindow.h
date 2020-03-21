#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_upButton_clicked();

    void on_powerButton_clicked();

    void on_leftButton_clicked();

    void on_downButton_clicked();

    void on_enterButton_clicked();

    void on_rightButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *listModel;
    QStringList MainPageListModel;
};

#endif // MAINWINDOW_H
