#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <func_pfcs.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString nString=ui->TXT_N->text();
    double N=nString.toDouble();
    QString mString=ui->TXT_M->text();
    double M=mString.toDouble();

    ui->RespuestaPo_3->setText(QString::number(CalcularPo(miu,landa,M)));
    ui->RespuestaPe->setText(QString::number(1-CalcularPo(miu,landa,M)));
    ui->RespuestaPn_3->setText(QString::number(CalcularPn(miu,landa,M,N)));
    ui->RespuestaL_3->setText(QString::number(CalcularL(miu,landa,M)));
    ui->RespuestaLq_3->setText(QString::number(CalcularLq(miu,landa,M)));
    ui->RespuestaLn_3->setText(QString::number(CalcularLn(miu,landa,M)));
    ui->RespuestaW_3->setText(QString::number(CalcularW(miu,landa,M)));
    ui->RespuestaWq_3->setText(QString::number(CalcularWq(miu,landa,M)));
    ui->RespuestaWn_3->setText(QString::number(CalcularWn(miu,landa,M)));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString mString=ui->TXT_M->text();
    double M=mString.toDouble();


    QString horasString=ui->TXT_Horas->text();
    double horas=horasString.toDouble();

    QString cteString=ui->TXT_Cte->text();
    double cte=cteString.toDouble();

    QString ctseString=ui->TXT_Ctse->text();
    double ctse=ctseString.toDouble();

    QString ctsString=ui->TXT_Cts->text();
    double cts=ctsString.toDouble();

    QString csString=ui->TXT_Cs->text();
    double cs=csString.toDouble();

    //Mostrar Resultados

    ui->RespuestaCtte->setText(QString::number(CalcularCtte(miu,landa,M,horas,cte)));
    ui->RespuestaCtts->setText(QString::number(CalcularCtts(miu,landa,M,horas,cts)));
    ui->RespuestaCttse->setText(QString::number(CalcularCttse(miu,landa,M,horas,ctse)));
    ui->RespuestaCts->setText(QString::number(CalcularCTs(cs)));
    ui->RespuestaCt->setText(QString::number(CalcularCT(miu,landa,M,horas,cte,cts,ctse,cs)));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString mString=ui->TXT_M->text();
    double M=mString.toDouble();

    QString numString=ui->TXT_Num->text();
    double num=numString.toDouble();
    double sumatoria=0;
    QString formula ="";
    ui->LblParcial->setText("");

    if(ui->comboBox->currentIndex()==0)
    {
        formula.append("1-(P");
        for(int i=0;i<num;i++)
        {
            double pn=CalcularPn(miu,landa,M,i);
            formula.append(QString::number(i)+": ");
            formula.append(QString::number(pn)+" ");
            if(!(i+1==num)){
                formula.append("+ P");
            }
            else{
                formula.append(")");
            }
            sumatoria+=pn;
        }
        ui->LblParcial->setText("1-("+(QString::number(sumatoria))+")");
        sumatoria=1-sumatoria;
    }
    else if(ui->comboBox->currentIndex()==1)
    {
        formula.append("(P");
        for(int i=0;i<=num;i++)
        {
            double pn=CalcularPn(miu,landa,M,i);
            formula.append(QString::number(i)+": ");
            formula.append(QString::number(pn)+" ");
            if(!(i==num)){
                formula.append("+ P");
            }
            else{
                formula.append(")");
            }
            sumatoria+=pn;
        }

    }
    ui->LblFormula->setText(formula);
    ui->RespuestaProbabilidad->setText(QString::number(sumatoria));
}


