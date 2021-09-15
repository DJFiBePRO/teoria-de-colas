#ifndef FUNC_PFCS_H
#define FUNC_PFCS_H
#include <math.h>
double Factorial(double a)
{
    double b = 1;

    for (double num = a; num >= 1; num--)
    {
        b *= num;
    }
    return b;
}
double CalcularPo(double miu,double landa,double M)
{
    double sumatoria = 0;

    for (int n = 0; n <= M; n++)
    {
        double respuesta = (Factorial(M) / Factorial(M - n)) * pow((landa / miu), n);
        sumatoria = sumatoria + respuesta;
    }

    double respuestaPo = 1 / sumatoria;
    return respuestaPo;
}
double CalcularPn(double miu,double landa,double M,double N)
{
    double respuestaPn = (Factorial(M) / Factorial(M - N)) * pow((landa / miu), N) * CalcularPo(miu,landa,M);
    return respuestaPn;
}
double CalcularL(double miu,double landa,double M)
{
    double respuestaL = M-(miu/landa)*(1-CalcularPo(miu,landa,M));
    return respuestaL;
}
double CalcularLq(double miu,double landa,double M)
{
    double respuestaLq = M - ((landa+miu) / landa) * (1 - CalcularPo(miu,landa,M));
    return respuestaLq;
}
double CalcularLn(double miu,double landa,double M)
{
    double respuestaLn = CalcularLq(miu,landa,M) / (1-CalcularPo(miu,landa,M));
    return respuestaLn;
}
double CalcularWq(double miu,double landa,double M)
{
    double Lq=CalcularLq(miu,landa,M);
    double L=CalcularL(miu,landa,M);
    double respuestaWq = Lq/((M-L)*landa);
    return respuestaWq;
}
double CalcularW(double miu,double landa,double M)
{
    double respuestaW = CalcularWq(miu,landa,M) + (1/miu);
    return respuestaW;
}

double CalcularWn(double miu,double landa,double M)
{
    double respuestaWn = CalcularWq(miu,landa,M) / (1 - CalcularPo(miu,landa,M));
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
double CalcularCtte(double miu,double landa,double M,double horas,double cte)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCtte=(landa*horas*CalcularWq(miu,landa,M)*cte);
    return respuestaCtte;
}
double CalcularCtts(double miu,double landa,double M,double horas,double cts)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCtts=(landa*horas*CalcularW(miu,landa,M)*cts);
    return respuestaCtts;
}
double CalcularCttse(double miu,double landa,double M,double horas,double ctse)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCttse=(landa*horas*CalcularW(miu,landa,M)*ctse);
    return respuestaCttse;
}
double CalcularCTs(double cs)
{
    double respuestaCts=1*cs;
    return respuestaCts;
}
double CalcularCT(double miu,double landa,double M,double horas,double cte,double cts,double ctse,double cs)
{
    horas=ComprobarHorasEsCero(horas);
    double respuestaCt=CalcularCtte(miu,landa,M,horas,cte)+CalcularCtts(miu,landa,M,horas,cts)+CalcularCttse(miu,landa,M,horas,ctse)+CalcularCTs(cs);
    return respuestaCt;
}
#endif // FUNC_PFCS_H
