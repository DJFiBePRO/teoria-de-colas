#ifndef FUNC_PICM_H
#define FUNC_PICM_H
#include <math.h>
double Factorial(double a)
{
    double b=1;
    for(double num=a;num>=1;num--)
    {
        b*=num;
    }
    return b;
}
double CalcularPo(double miu,double landa,double k)
{
    double sumatoria=0;
    for(int ni=0;ni<=(k-1);ni++)
    {
        double factor=1/Factorial(ni);
        double elevado = pow((landa/miu),ni);

        double respuesta = factor*elevado;
        sumatoria=sumatoria+respuesta;
    }

    double segundaparte = 0;
    segundaparte = (1/Factorial(k))*(pow((landa/miu), (k))*((k*miu)/((k*miu)-landa)));
    double respuestaPo=1/(sumatoria+segundaparte);//Respuesta Po
    return respuestaPo;
}
double CalcularPk(double miu,double landa,double k)
{
    double parteUno=(1 / Factorial(k));
    double parteDos = pow((landa / miu), k);
    double parteTres = (k * miu) / ((k * miu) - landa);
    double respuestaPk = parteUno * parteDos * parteTres * CalcularPo(miu,landa,k);//Respuesta Pk
    return respuestaPk;
}
double CalcularPne(double miu,double landa,double k)
{
    double respuestaPne=1-CalcularPk(miu,landa,k); //Respuesta Pne
    return respuestaPne;
}
double CalcularPn(double miu,double landa,double k,double n)
{
    double respuestaPn=0;
    if (n <= k)
    {
        respuestaPn = (CalcularPo(miu,landa,k)/ Factorial(n)) * pow(((landa / miu)), n);
    }
    else if (n > k)
    {
        respuestaPn = (1 / (Factorial(k) * (pow(k, (n - k)))) * pow((landa / miu), n)*CalcularPo(miu,landa,k));
    }
    return respuestaPn;
}
double CalcularL(double miu,double landa,double k)
{
    double arriba = (landa * miu) * pow((landa/miu),k);
    double abajo = Factorial((k-1))*pow(((k*miu)-landa),2);
    double alado = landa / miu;

    double respuestaL = ((arriba/abajo) * CalcularPo(miu,landa,k)) + alado; //Respuesta L
    return respuestaL;
}
double CalcularLq(double miu,double landa,double k)
{
    double arribaLq = (landa * miu) * pow((landa / miu), k)*CalcularPo(miu,landa,k);
    double abajoLq = Factorial((k - 1)) * pow(((k * miu) - landa), 2);

    double respuestaLq = arribaLq / abajoLq; //Respuesta Lq
    return respuestaLq;
}
double CalcularLn(double miu,double landa,double k)
{
    double respuestaLn = CalcularLq(miu,landa,k) / CalcularPk(miu,landa,k); //Respuesta Ln
    return respuestaLn;
}
double CalcularW(double miu,double landa,double k)
{
    double arribaW = miu * pow((landa / miu), k) * CalcularPo(miu,landa,k);
    double abajoW = Factorial((k - 1)) * pow(((k * miu) - landa), 2);
    double aladoW = 1 / miu;

    double respuestaW = (arribaW/ abajoW)+aladoW;   //Respuesta W
    return respuestaW;
}
double CalcularWq(double miu,double landa,double k)
{
    double arribaWq =miu * pow((landa / miu), k) * CalcularPo(miu,landa,k);
    double abajoWq = Factorial((k - 1)) * pow(((k * miu) - landa), 2);

    double respuestaWq = arribaWq/ abajoWq;     //Respuesta Wq
    return respuestaWq;
}
double CalcularWn(double miu,double landa,double k)
{
    double respuestaWn = CalcularWq(miu,landa,k) / CalcularPk(miu,landa,k);   //Respuesta Wn
    return respuestaWn;
}
double ComprobarHorasEsCero(double horas)
{
    double respuesta=0;
    if(horas==0)
    {
        respuesta=1;
    }
    else {
        respuesta=horas;
    }
    return respuesta;
}
double CalcularCtte(double miu,double landa,double k,double horas,double cte)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCtte=(landa*horas*CalcularWq(miu,landa,k)*cte);
    return respuestaCtte;
}
double CalcularCtts(double miu,double landa,double k,double horas,double cts)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCtts=(landa*horas*CalcularW(miu,landa,k)*cts);
    return respuestaCtts;
}
double CalcularCttse(double miu,double landa,double k,double horas,double ctse)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCttse=(landa*horas*(1/miu)*ctse);
    return respuestaCttse;
}
double CalcularCTs(double k, double cs)
{
    double respuestaCts=k*cs;
    return respuestaCts;
}
double CalcularCT(double miu,double landa,double k,double horas,double cte,double cts,double ctse,double cs)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCt=CalcularCtte(miu,landa,k,horas,cte)+CalcularCtts(miu,landa,k,horas,cts)+CalcularCttse(miu,landa,k,horas,ctse)+CalcularCTs(k,cs);
    return respuestaCt;
}
#endif // FUNC_PICM_H
