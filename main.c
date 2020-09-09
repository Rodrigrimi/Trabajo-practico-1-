#include <stdio.h>
#include <stdlib.h>
#include "Nuebo.h"





int main()
{
    char numeroIngresado[1];
    int validoNumero;
    float transformaNumeroUno;
    float transformaNumeroDos;
    float resDivision;
    int resSuma;
    int resResta;
    int resMultiplicacion;
    int resFactorial;
    char respuesta;
    char opcionA;


    do
    {
        printf("1- Ingresar el primer numero a calcular \n");
        printf("2- Ingresar el segundo numero a calcular \n");
        printf("3- Calcular todas las operaciones \n");
        printf("4- Informar resultados \n");
        printf("5- Salir \n");
        scanf("%c", &opcionA);
        while(opcionA!='1' || opcionA!='2')
        {
            printf("No hay datos Ingresados");
            printf("1- Ingresar el primer numero a calcular \n");
            printf("2- Ingresar el segundo numero a calcular \n");
            fflush(stdin);
            scanf("%c", &opcionA);
        }
        switch(opcionA)
        {
            case '1':

                    transformaNumeroUno;
                break;
            case '2':

                break;
            case '3':



                break;
            case '4':
                printf ("El resultado de la SUMA es: %d\n",resSuma);
                printf ("El resultado de la RESTA es: %d\n",resResta);
                printf ("El resultado de la DIVISION es: %d\n",resDivision);
                printf ("El resultado de la MULTIPLICACION es: %d\n",resMultiplicacion);
                printf ("El resultado de la CALCULO FACTORIAL DEL PRIMER NUMERO es: %d\n",resFactorial);
                printf ("El resultado de la CALCULO FACTORIAL DEL SEGUNDO NUMERO es: %d\n",resFactorial);
                break;
            default:
                printf("Desea continuar cargando los datos; s/n \n ", respuesta);
                fflush(stdin);
                scanf("%c",&respuesta);
                break;

        }

    }while(respuesta=='s');



    return 0;

}

/*
void ValidarNumero(char numero[])

{
    int i;
    int retorno;
    retorno =1;
    for(i=0;i<strlen(numero);i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("Ingrese solamente NUMEROS:  \n");
            getch();
            retorno=0;
            return retorno;
        }
    }
    return retorno;
}*/
