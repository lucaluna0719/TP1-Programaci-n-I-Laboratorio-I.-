#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
   int primerValor;
   int segundoValor;
   int flagPrimero=0;
   int flagSegundo=0;
   int flagCalculador=0;
   int resultadoSuma;
   float resultadoDivision;
   int resultadoResta;
   int resultadoMultiplicacion;
   char seguir='s';
   int resultadorFactorPrimero;
   int resultadoFactorSegundo;
   int seleccionaOpcion;

   do
    {
        if(flagPrimero==0)
        {
            printf("1-Ingrese primer valor (a=x).\n");

        }
        else
        {
            printf("1-ingrese primer valor (a=%d) \n" ,primerValor);
        }
        if(flagSegundo==0)
        {

            printf("2-ingrese segundo valor (b=y) \n");

        }
        else
        {
            printf("2-ingrese segundo valor (b=%d) \n",segundoValor);
        }

        printf("3-Calcular todas las operaciones: \n");
        printf("4-Mostrar resultado: \n");
        printf("5-Salir \n");
        printf("Selecione opcion.\n");

        scanf("%d", &seleccionaOpcion);

        switch(seleccionaOpcion)
        {
        case 1:
            printf("ingrese el primer valor:  ");
            scanf("%d", &primerValor);
            flagPrimero=1;
            flagCalculador=0;
            break;
        case 2:
             printf("ingrese el segundo valor: ");
            scanf("%d", &segundoValor);
            flagSegundo=1;
            flagCalculador=0;
            break;
        case 3:
    if(flagPrimero==0 || flagSegundo==0)
        {
            printf("Ingrese ambos operadores\n");

        }
        else
            {
                resultadoSuma=sumar(primerValor, segundoValor);
                resultadoResta=resta(primerValor, segundoValor);
                resultadoMultiplicacion=multiplicacion(primerValor, segundoValor);
                resultadoDivision=dividir(primerValor, segundoValor);
                resultadorFactorPrimero=factoreo(primerValor);
                resultadoFactorSegundo=factoreo(segundoValor);
                flagCalculador=1;
                printf("Operaciones calculadas \n");
            } system("pause");
             break;
        case 4:
        if(flagCalculador==0)
            {
                    printf("Primero calcule operaciones... \n");
            }
        else
        {
                printf("1_ el resultado de %d+%d es: %d\n" ,primerValor, segundoValor,resultadoSuma);
                printf("2_ el resultado de %d-%d es: %d\n" ,primerValor, segundoValor, resultadoResta);
                printf("3_ el resultado de %d*%d es: %d\n" ,primerValor, segundoValor, resultadoMultiplicacion);

            if(segundoValor==0)
            {
                printf("no se puede dividir por 0. \n");
            }
            else
            {
                printf("4_el resultado de %d/%d es: %.2f\n", primerValor, segundoValor, resultadoDivision);
            }
            //factorial
            if(primerValor < 0 && segundoValor <0)
            {
                printf("No se puede calcular el factorial de los valores.\n");
            }
            else if(primerValor<0)
            {
                printf("El factorial de %d no es posible calcularlo, el factorial de %d es: %d\n", primerValor,segundoValor,resultadoFactorSegundo);
            }
            else if(segundoValor<0)
            {
                printf("El factorial de %d es: %d y el factorial de %d no es posible calcularlo\n",primerValor,resultadorFactorPrimero,segundoValor);

            }
            else
            {
                printf("El factorial de %d es: %d y el factorial de %d es: %d\n", primerValor,resultadorFactorPrimero, segundoValor, resultadoFactorSegundo);
            }

        }
        system("pause");
        break;
        case 5:
            seguir='n';
            break;
        default:
            break;
        }

    }while (seguir=='s');
    return 0;
}
