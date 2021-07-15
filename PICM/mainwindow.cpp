#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
#include <func_picm.h>

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
void MainWindow::on_PS_Calcular_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString kString=ui->TXT_K->text();
    double k=kString.toDouble();
    QString nString=ui->TXT_N->text();
    double n=nString.toDouble();

    if((k*miu)>landa)
    {
        ui->LblCE->setText("Si cumple con la condicion de estabilidad");
    }
    else
    {
        ui->LblCE->setText("No cumple con la condicion de estabilidad");
    }

    //Mostrar Resultados
    ui->RespuestaPo->setText(QString::number(CalcularPo(miu,landa,k)));
    ui->RespuestaPk->setText(QString::number(CalcularPk(miu,landa,k)));
    ui->RespuestaPne->setText(QString::number(CalcularPne(miu,landa,k)));
    ui->RespuestaPn->setText(QString::number(CalcularPn(miu,landa,k,n)));
    ui->RespuestaL->setText(QString::number(CalcularL(miu,landa,k)));
    ui->RespuestaLq->setText(QString::number(CalcularLq(miu,landa,k)));
    ui->RespuestaLn->setText(QString::number(CalcularLn(miu,landa,k)));
    ui->RespuestaW->setText(QString::number(CalcularW(miu,landa,k)));
    ui->RespuestaWq->setText(QString::number(CalcularWq(miu,landa,k)));
    ui->RespuestaWn->setText(QString::number(CalcularWn(miu,landa,k)));
}

void MainWindow::on_pushButton_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString kString=ui->TXT_K->text();
    double k=kString.toDouble();

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

    ui->RespuestaCtte->setText(QString::number(CalcularCtte(miu,landa,k,horas,cte)));
    ui->RespuestaCtts->setText(QString::number(CalcularCtts(miu,landa,k,horas,cts)));
    ui->RespuestaCttse->setText(QString::number(CalcularCttse(miu,landa,k,horas,ctse)));
    ui->RespuestaCts->setText(QString::number(CalcularCTs(k,cs)));
    ui->RespuestaCt->setText(QString::number(CalcularCT(miu,landa,k,horas,cte,cts,ctse,cs)));


}

void MainWindow::on_pushButton_2_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
    QString kString=ui->TXT_K->text();
    double k=kString.toDouble();
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
            double pn=CalcularPn(miu,landa,k,i);
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
            double pn=CalcularPn(miu,landa,k,i);
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
