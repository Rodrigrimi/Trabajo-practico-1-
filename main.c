/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "Nuebo.h"





int main()
{
    float resDivision;
    float resSuma;
    float resResta;
    float resMultiplicacion;
    long int resFactorial;
    long int resFactorial2;
    float numeroIngradoA=0;
    float numeroIngradoB=0;
    int opcionA;
    do
    {
        MostrarMenu(numeroIngradoA,numeroIngradoB);
        opcionA=CargarNumeros(opcionA);

        switch(opcionA)
        {
        case 1:

            numeroIngradoA=CargarNumeros(numeroIngradoA);

            break;
        case 2:

            numeroIngradoB=CargarNumeros(numeroIngradoB);

            break;
        case 3:
            if(numeroIngradoB==0)
            {
                printf("No se puede Calcular si no ha cargado datos\n");
            }
            else
            {
                printf("\t\tExito al calcular las operaciones\n\n\n");
                resDivision=Divission(numeroIngradoA,numeroIngradoB);
                resSuma=SumarTotales(numeroIngradoA,numeroIngradoB);
                resResta=RestarTotales(numeroIngradoA,numeroIngradoB);
                resMultiplicacion=MultiplicarTotales(numeroIngradoA,numeroIngradoB);
                resFactorial=CalcularFactorial(numeroIngradoA);
                resFactorial2=CalcularFactorial(numeroIngradoB);
            }
            break;
        case 4:
            printf ("\nEl resultado de A+B es:: %.2f\n",resSuma);
            printf ("\nEl resultado de A+B es:: %.2f\n",resSuma);
            printf ("\nEl resultado de A-B es:  %.2f\n",resResta);
            printf ("\nEl resultado de la A*B es: %.2f\n",resMultiplicacion);
            if(numeroIngradoB==0)
            {
                printf("\nNo es posible dividir por cero\n");
            }
            else
            {
                printf ("\nEl resultado de A/B es: %.2f\n",resDivision);
            }

            if(numeroIngradoA== (int) numeroIngradoA && numeroIngradoA>=0)
            {
                printf ("\nEl factorial de A es: %ld ",resFactorial);
            }
            else
            {
                printf("\nNo se puede realizar el factorial de un numero negativo y decimal\n");
            }
             if(numeroIngradoB== (int) numeroIngradoB && numeroIngradoB>=0)
            {
                printf ("y El factorial de B es: %ld \n",resFactorial2);
            }
            else
            {
                printf("\nNo se puede realizar el factorial de un numero negativo y decimal\n");
            }
            break;
        case 5:
            printf("\t\tGracias por usar la calculadora\n");
            break;
        default:
            printf("\t\tSe genero un error ingrese nuevamente\n");
            MostrarMenu(numeroIngradoA,numeroIngradoB);
            break;
        }
    }
    while(opcionA!=5);
    return 0;
}
