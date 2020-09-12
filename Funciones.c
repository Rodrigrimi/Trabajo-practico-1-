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

int CalcularFactorial (float number)
{

    int factorial;
    int returnValue;
    long int factor = 1;

    if (number== (int) number && number>=0)
    {
        for (factorial = number; factorial > 0; factorial--)
        {
            factor = factor * factorial;
            returnValue=factor;
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
