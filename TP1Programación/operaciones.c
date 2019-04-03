#include "operaciones.h"
/** \brief PIDE DOS NUMEROS, LOS SUMA Y DA UN RESULTADO.
 *
 * \param primerValor int PRIMER NUMERO INGRESADO.
 * \param segundoValor int SEGUNDO VALOR INGRESADO.
 * \return int DEVUELVE RESULTADO.
 *
 *
 */
int sumar(int primerValor, int segundoValor)
    {
     int resultado;
     resultado = primerValor + segundoValor;
    return resultado;
    }
/** \brief PIDE DOS NUMEROS, LOS RESTA Y DA UN RESULTADO.
 *
 * \param primerValor int PRIMER NUMERO INGRESADO.
 * \param segundoValor int SEGUNDO VALOR INGRESADO.
 * \return int DEVUELVE RESULTADO.
 *
 */
int resta(int primerValor,  int segundoValor)
    {
    int resultado= primerValor - segundoValor;
    return resultado;
    }
/** \brief PIDE DOS NUMEROS, LOS MULTIPLICA Y DA UN RESULTADO.
 *
 * \param primerValor int PRIMER NUMERO INGRESADO.
 * \param segundoValor int SEGUNDO VALOR INGRESADO.
 * \return int DEVUELVE RESULTADO.
 *
 *
 */
int multiplicacion(int primerValor, int segundoValor)
    {
        int resultado;
        resultado= primerValor*segundoValor;
        return resultado;
    }

/** \brief PIDE DOS VALORES, LOS DIVIDE ENTRE EL PRIMERO INGRESADO SOBRE EL SEGUNDO INGRESADO Y DA EL RESULTADO.
 *
 * \param primerValor int PRIMER NUMERO INGRESADO.
 * \param segundoValor int SEGUNDO VALOR INGRESADO.
 * \return float DEVUELVE RESULTADO.
 *
 */
float dividir(int primerValor, int segundoValor)
    {
        float resultado;
        resultado=(float)primerValor/segundoValor;
        return resultado;
    }
/** \brief DE LOS NUMEROS INGRESADOS SACA EL FACTOREO DE CADA UNO.
 *
 * \param valor int DEPENDE DEL VALOR QUE TENGA VA A DECIR SI SE PUEDE CALCULAR EL FACTOR.
 * \return int RESULTADO DE CADA FACTOREO.
 *
 */
int factoreo(int valor)
{
    int resultado=0;
    if(valor>=0)
    {
        if(valor == 0 || valor == 1)
        {
            resultado=1;
        }
        else
        {
            resultado= valor * factoreo(valor-1);
        }
    }


    return resultado;
}
