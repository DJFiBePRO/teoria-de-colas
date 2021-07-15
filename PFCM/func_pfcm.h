#ifndef FUNC_PFCM_H
#define FUNC_PFCM_H
#include "math.h"
double Factorial(int a)
{
    double b = 1;

    for (int num = a; num >= 1; num--)
    {
        b *= num;
    }
    return b;
}
double CalcularPo(double miu,double landa, double M, double K)
{
    double sumatoria1 = 0;
    double sumatoria2 = 0;
    // primera parte

    for (int n = 0; n <= (K-1); n++)
    {
        double respuesta1 = (Factorial((int)M) / (Factorial(((int)M - n))*Factorial(n))) * pow((landa / miu), n);
        sumatoria1 = sumatoria1 + respuesta1;
    }

    // segunda parte
    for (int n = (int)K ; n <= M; n++)
    {
        double respuesta2 = (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial((int)K) *(pow(K,(n-K))))) * pow((landa / miu), n);
        sumatoria2 = sumatoria2 + respuesta2;
    }
    double respuestaPo = 1 / (sumatoria1+sumatoria2);
    return respuestaPo;
}
double CalcularPn(double miu,double landa, double M, double K,double N)
{
    double respuestaPn = 0;
    if (N >= 0 && N <= K)
    {
        respuestaPn  = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - (int)N)) * Factorial((int)N))) * pow((landa / miu), N);
    }
    else
    {
        respuestaPn = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - (int)N)) * Factorial((int)K) * (pow(K, ((int)N - K))))) * pow((landa / miu), N);
    }
    return respuestaPn;
}
double CalcularL(double miu,double landa, double M, double K)
{
    double sumatoriaL1 = 0;
    double sumatoriaL2 = 0;
    double sumatoriaL3 = 0;
    double respuestaL = 0;
    for (int n=0; n<= (K-1); n++)
    {
        double PnL1= CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial(n))) * pow((landa / miu), n);
        double respuestaL1 = n * PnL1;
        sumatoriaL1 = sumatoriaL1 + respuestaL1;
    }

    for (int n = (int)K; n <= M; n++)
    {
        double PnL2 = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial((int)K) * (pow(K, (n - K))))) * pow((landa / miu), n);
        double respuestaL2 = (n - K) * PnL2;
        sumatoriaL2 = sumatoriaL2 + respuestaL2;
    }



    for (int n=0; n<=(K-1); n++)
    {
        double PnL3 = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial(n))) * pow((landa / miu), n);
        sumatoriaL3 = sumatoriaL3 + PnL3;
    }

    respuestaL = sumatoriaL1 + sumatoriaL2 + (K * (1 - sumatoriaL3));
    return respuestaL;

}
double CalcularLq(double miu,double landa, double M, double K)
{
    double respuestaLq=0;
    double sumatoriaL2 = 0;
    for (int n = (int)K; n <= M; n++)
    {
        double PnL2 = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial((int)K) * (pow(K, (n - K))))) * pow((landa / miu), n);
        double respuestaL2 = (n - K) * PnL2;
        sumatoriaL2 = sumatoriaL2 + respuestaL2;
    }
    respuestaLq = sumatoriaL2;
    return respuestaLq;
}
double CalcularPe(double miu,double landa, double M, double K)
{
    double respuestaPe=0;
    for (int n = (int)K; n <= M; n++)
    {
        double Pe = CalcularPo(miu,landa,M,K) * (Factorial((int)M) / (Factorial(((int)M - n)) * Factorial((int)K) * (pow(K, (n - K))))) * pow((landa / miu), n);
        respuestaPe = respuestaPe + Pe;

    }
    return respuestaPe;
}
double CalcularLn(double miu,double landa, double M, double K)
{
    double respuestaLn = CalcularLq(miu,landa,M,K) / CalcularPe(miu,landa,M,K);
    return respuestaLn;
}
double CalcularW(double miu,double landa, double M, double K)
{
    double respuestaW = CalcularL(miu,landa,M,K) / landa;
    return respuestaW;
}
double CalcularWq(double miu,double landa, double M, double K)
{
    double respuestaWq = CalcularLq(miu,landa,M,K) /landa;
    return respuestaWq;
}
double CalcularWn(double miu,double landa, double M, double K)
{
    double respuestaWn =  CalcularWq(miu,landa,M,K)/ CalcularPe(miu,landa,M,K);
    return respuestaWn;
}
double CalcularCtte(double miu,double landa,double m,double k,double horas,double cte)
{
    double respuestaCtte=(landa*horas*CalcularWq(miu,landa,m,k)*cte);
    return respuestaCtte;
}
double CalcularCtts(double miu,double landa,double m,double k,double horas,double cts)
{
    double respuestaCtts=(landa*horas*CalcularW(miu,landa,m,k)*cts);
    return respuestaCtts;
}
double CalcularCttse(double miu,double landa,double m,double k,double horas,double ctse)
{
    double respuestaCttse=(landa*horas*CalcularW(miu,landa,m,k)*ctse);
    return respuestaCttse;
}
double CalcularCTs(double k,double cs)
{
    double respuestaCts=k*cs;
    return respuestaCts;
}
double CalcularCT(double miu,double landa,double M,double K,double horas,double cte,double cts,double ctse,double cs)
{
    double respuestaCt=CalcularCtte(miu,landa,M,K,horas,cte)+CalcularCtts(miu,landa,M,K,horas,cts)+CalcularCttse(miu,landa,M,K,horas,ctse)+CalcularCTs(K,cs);
    return respuestaCt;
}
#endif // FUNC_PFCM_H
