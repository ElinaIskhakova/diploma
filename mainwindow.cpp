#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     double Kb;
    QString glubinaNaporaStr = ui->GlubinaNapora->text();
    int  glubinaNapora  = glubinaNaporaStr.toInt();  //qstring ? int
    if(glubinaNapora>=1200)
    {
        Kb=1.05;

    }
  else
        Kb=1.5;
    QString DavlenieplastaStr = ui->Davlenieplasta->text();
     int  Davlenieplasta =DavlenieplastaStr.toInt();  //qstring ? int
      double p1=round(Kb*Davlenieplasta* pow10(6)/(9.81*glubinaNapora));

    QString Finalstr = QString::number(p1);

    ui->Plotnost->setText(Finalstr); // ?????? ??? ?????? ?????? ????????? ??????

}
