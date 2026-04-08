#include "pin.h"
#include "ui_pin.h"
#include <QTimer>

PIN::PIN(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PIN)
{
    ui->setupUi(this);
}

PIN::~PIN()
{
    delete ui;
}

void PIN::paivitaNaytto()
{
    QString piilotettuPin(syotettyPin.length(), '*');
    ui->lineEdit->setText(piilotettuPin);
}

void PIN::tarkistaPin()
{
    QString oikeaPin = "1234"; // tähä jotenki myöhemmi et vertaa
                               // sitä tietokantaan jotenki

    if (syotettyPin == oikeaPin) {
        qDebug() << "PIN oikein";
        // laitan saman viestin käyttöliittymään koska voin
        ui->tekstiruutu->setText("PIN oikein");
        // sit täältä hypätään sinne valikkoon?
    } else {
        yritykset--;
        qDebug() << "PIN väärin. yrityksiä jäljellä: "<<yritykset;
        // laitan saman viestin käyttöliittymään koska voin
        ui->tekstiruutu->setText("PIN väärin. yrityksiä jäljellä: "+ QString::number(yritykset));
    }
    if (yritykset == 0) {
        tilinLukitus();
    }
    syotettyPin.clear();
    ui->lineEdit->clear();
}

void PIN::tilinLukitus()
{
    qDebug() << "Liian monta yritystä, lukitaan tili";
    // laitan saman viestin käyttöliittymään koska voin
    ui->tekstiruutu->setText("Liian monta yritystä, lukitaan tili.");

    // tässä pitäs olla vissiin se tilin lukitus homma
    // mut se on tulevaisuuden ongelma

    // suljen vaa sovelluksen koska miksi ei (2sek odotus)
    QTimer::singleShot(2000, QApplication::quit);
}

void PIN::on_N1_clicked()
{
    if (syotettyPin.length() < 4) { // tarkistetaa pituus
        syotettyPin += "1"; // lisätään pin muuttujaan numero
        paivitaNaytto(); // pistetään näytölle
    }
}

void PIN::on_N2_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "2";
        paivitaNaytto();
    }
}

void PIN::on_N3_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "3";
        paivitaNaytto();
    }
}

void PIN::on_N4_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "4";
        paivitaNaytto();
    }
}

void PIN::on_N5_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "5";
        paivitaNaytto();
    }
}

void PIN::on_N6_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "6";
        paivitaNaytto();
    }
}

void PIN::on_N7_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "7";
        paivitaNaytto();
    }
}

void PIN::on_N8_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "8";
        paivitaNaytto();
    }
}

void PIN::on_N9_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "9";
        paivitaNaytto();
    }
}

void PIN::on_N0_clicked()
{
    if (syotettyPin.length() < 4) {
        syotettyPin += "0";
        paivitaNaytto();
    }
}


void PIN::on_clearBtn_clicked()
{
    // tyhjennetään lineEdit ...
    ui->lineEdit->clear();
    //... ja se itse pinmuuttuja
    syotettyPin.clear();
}

void PIN::on_enterBtn_clicked()
{
    tarkistaPin();
}

