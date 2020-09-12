#include "Nuebo.h"
void MostrarMenu(float numeroIngradoA,float numeroIngradoB)
{
    printf("1. Ingresar 1er operando (A=%.2f) \n",numeroIngradoA);
    printf("2. Ingresar 2do operando (B=%.2f) \n",numeroIngradoB);
    printf("3- Calcular todas las operaciones \n");
    printf("4- Informar resultados \n");
    printf("5- Salir \n");
    printf("\n");
}
float CargarNumeros(float numeros)
{
    printf("Ingrese un numero: ");
    fflush(stdin);
    scanf("%f", &numeros);
    printf("\n");
    return numeros;
}
long int CalcularFactorial (float number)
{

    int factorial;
    int returnValue;
    long int factor = 1;

    if (number== (int) number && number>=0)
    {
        for (factorial = number; factorial > 0; factorial--)
        {
            factor = factor * factorial;
            number=factor;
        }
    }
    else if (number<0)
    {
        returnValue= -1;
    }
    else
    {
        returnValue= 0;
    }
    return (returnValue);
}
long int CalcularFactorial2 (float number2)
{

    int factorial2;
    int returno;
    long int factor2 = 1;

    if (number2== (int) number2 && number2>=0)
    {
        for (factorial2 = number2; factorial2 > 0; factorial2--)
        {
            factor2 = factor2 * factorial2;
            number2=factor2;
        }
    }
    else if (number2<0)
    {
        returno= -1;
    }
    else
    {
        returno= 0;
    }
    return (returno);
}
float Divission(float numero,float divisor)
{
    float resultado;
    resultado=numero/divisor;
    return resultado;
}
float SumarTotales(float numero, float acum)
{
    float suma;
    suma=numero+acum;
    return suma;
}
float RestarTotales(float numero, float acum)
{
    float resta;
    resta=numero-acum;
    return resta;
}
float MultiplicarTotales(float numero, float acum)
{
    long int multiplicaNumero;
    multiplicaNumero=numero*acum;
    return multiplicaNumero;
}
