#ifndef PIN_H
#define PIN_H

#include <QDialog>

namespace Ui {
class PIN;
}

class PIN : public QDialog
{
    Q_OBJECT

public:
    explicit PIN(QWidget *parent = nullptr);
    ~PIN();

public slots:

private slots:
    void on_N1_clicked();
    void on_N4_clicked();
    void on_N2_clicked();
    void on_N3_clicked();
    void on_N5_clicked();
    void on_N6_clicked();
    void on_N7_clicked();
    void on_N8_clicked();
    void on_N9_clicked();
    void on_N0_clicked();
    void on_clearBtn_clicked();
    void on_enterBtn_clicked();

private:
    Ui::PIN *ui;
    QString syotettyPin;
    int yritykset = 3;
    void paivitaNaytto();
    void tarkistaPin();
    void tilinLukitus();
};

#endif // PIN_H
