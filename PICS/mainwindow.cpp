#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "func_pics.h"

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
    QString nString=ui->TXT_N->text();
    double n=nString.toDouble();


    if(miu>landa)
    {
        ui->LblCE->setText("Si cumple con la condicion de estabilidad");
    }
    else
    {
        ui->LblCE->setText("No cumple con la condicion de estabilidad");
    }
    char f='G';
    int presc=-1;
    //Mostrar Resultados
    ui->RespuestaRo->setText(QString::number(CalcularRo(miu,landa),f,presc));
    ui->RespuestaPo->setText(QString::number(CalcularPo(miu,landa),f,presc));
    ui->RespuestaPn->setText(QString::number(CalcularPn(miu,landa,n),f,presc));
    ui->RespuestaL->setText(QString::number(CalcularL(miu,landa),f,presc));
    ui->RespuestaLq->setText(QString::number(CalcularLq(miu,landa),f,presc));
    ui->RespuestaLn->setText(QString::number(CalcularLn(miu,landa),f,presc));
    ui->RespuestaW->setText(QString::number(CalcularW(miu,landa),f,presc));
    ui->RespuestaWq->setText(QString::number(CalcularWq(miu,landa),f,presc));
    ui->RespuestaWn->setText(QString::number(CalcularWn(miu,landa),f,presc));
}

void MainWindow::on_pushButton_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();


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
    ui->RespuestaCtte->setText(QString::number(CalcularCtte(miu,landa,horas,cte)));
    ui->RespuestaCtts->setText(QString::number(CalcularCtts(miu,landa,horas,cts)));
    ui->RespuestaCttse->setText(QString::number(CalcularCttse(miu,landa,horas,ctse)));
    ui->RespuestaCts->setText(QString::number(CalcularCTs(cs)));
    ui->RespuestaCt->setText(QString::number(CalcularCT(miu,landa,horas,cte,cts,ctse,cs)));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString miuString=ui->TXT_Miu->text();
    double miu=miuString.toDouble();
    QString landaString=ui->TXT_Landa->text();
    double landa=landaString.toDouble();
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
            double pn=CalcularPn(miu,landa,i);
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
            double pn=CalcularPn(miu,landa,i);
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
