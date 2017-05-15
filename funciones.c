#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


/** \brief Inicializa el status en un array de personas
 *
 * \param personArray[] ePerson el array en el cual inicializara
 * \param arrayLenght int la longitud del array
 * \param value int el valor que le asignara a status
 * \return void
 *
 */
/*void setStatus(ePerson personArray[],int arrayLenght, int value)
{
    int i;
    for(i=0;i<arrayLenght;i++)  //en cada posicion del array
    {
        personArray[i].status==value; //coloca el valor que recibe como parametro
    }
}

/** \brief Busca la primer ocurrencia de una persona mediante su codigo
 *
 * \param personArray[] ePerson es el array en el cual buscar
 * \param arrayLenght int La longitud del array
 * \param id int es el valor que se busca
 * \return int si no hay ocurrencia (-1) y si la hay la posicion en el array de la misma (i)
 *
 */
/*int findPersonById(ePerson personArray[],int arrayLenght,int id)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(personArray[i].id==id&&personArray[i].status==1)
        {
            return i;
        }
    }
    return -1;
}
*/
/** \brief Busca el primer lugar que no se ha utilizado en el array determinado por el valor en variable "status"
 *
 * \param personArray[] ePerson es el array en el cual lo va a buscar
 * \param arrayLenght int longitud del array
 * \return int si lo encuentra (status==0) devuelve el lugar en donde lo encontro (i), si no hay lugares libres
 *
 */
 /*
int findEmptyPlace(ePerson personArray[],int arrayLenght)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(personArray[i].status==0)
        {
            return i;
        }
    }
    return -1;
}
*/
/** \brief Solicita un numero al usuario a traves de la variable message , la deposita en variable auxiliar y luego retorna lo ingresado
 *
 * \param message[] char es el mensaje a ser mostrado
 * \return int el numero a ser ingresado por el usuario
 *
 */
int obtenerNumero(char message[])
{
    int auxiliar;
    printf("%s",message);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/** \brief Solicita un caracter al usuario a traves de variable "message", lo almacena en "auxiliar" y luego retorna lo ingresado alli por el usuario
 *
 * \param message[] char el mensaje a ser mostrado
 * \return char el caracter ingresado por el usuario
 *
 */
char getCharacter(char message[])
{
    char auxiliar;
    printf("%s",message);
    fflush(stdin);
    scanf("%c", &auxiliar);
    return auxiliar;
}

/** \brief Verifica si el valor recibido por la variable string es numerico
 *
 * \param string[] char array con la cadena a ser analizada
 * \return int 1 si es numerico y 0 si no lo es
 *
 */
int isNumeric(char string[])
{
    int i=0;
    while(string[i]!='\0')//hasta encontrar en la cadena el \0 (el final)
    {
        if(string[i]<'0'||string[i]>'9') //si la variable string recibio un numero fuera del rango establecido por la tabla ASCII
        {
            return 0;//falso, no es numerico
        }
        i++;//sigue iterando
    }
    return 1; //verdadero, es numerico
}

/** \brief Verifica si el valor recibido por "string" contiene solo letras. Tambien acepta espacios ' '
 *
 * \param string char  array con la cadena a ser analizada
 * \return int 1 si contiene solo espacios ' ' y letras dentro del rango ASCII. y 0 si no contiene solo letras
 *
 */
int onlyCharacters(char string[])
{
    int i=0;
    while(string[i]!= '\0')
    {
        if((string[i]!= ' ')&&(string[i]<'a'|| string[i]>'z')&& (string[i]<'A' || string[i]>'Z')) //Si la variable string recibio un caracter fuera del rango establecido en el Codigo ASCII
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/** \brief Verifica si el valor recibido por la variable "string" contiene solo letras y numeros . Incluye espacios.
 *
 * \param array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y numeros y 0 si no es alfanumerico
 *
 */
int alphaNumeric (char string[])
{
     int i=0;
     while(string[i] != '\0')
     {
         if((string[i] != ' ')&&(string[i]< 'a' || string [i] > 'z')&&(string[i] < 'A' || string[i]>'Z')&&(string[i]<'0'||string[i]>'9'))
         {
             return 0;
         }
         i++;
     }
     return 1;
}
/** \brief Solicita al usuario un texto y devuelve lo ingresado
 *
 * \param message[] char elmensaje a ser mostrado que pide el texto
 * \param input char array donde se cargara el texto ingresado
 * \return void
 *
 */
void getString(char message[],char input[])
{
    printf("%s",message);
    gets(input);
}

/** \brief Solicita el texto al usuario , analiza si tiene solo letras , y si de ser asi lo devuelve
 *
 * \param message[] char el mensaje a ser mostrado para solicitar el texto
 * \param input[] char el array donde se cargara el texto ingresado
 * \return int 1 si el texto contiene solo letras , 0 si no cumple con la condicion
 *
 */
int getStringChar(char message[],char input[])
{
    char aux[256];
    getString(message,aux); //pide texto a traves del usuario y lo ingresa en el auxiliar de caracteres
    if(onlyCharacters(aux))//analiza si el vector es de solo letras, si es verdadero devuelve la cadena
    {
        strcpy(input,aux);//y la copia en input ya analizada
        return 1;//retorna el texto si tiene solo letras
    }
    return 0; // es falso
}
/** \brief Solicita al usuario un texto numerico para analizar si es completamente de numeros y de ser asi devuelve el texto ingresado
 *
 * \param message[] char el mensaje a mostrar pidiendo al usuario el texto numerico
 * \param input[] char donde se cargara el texto ingresado
 * \return int 1 si el texto contiene solo numeros
 *
 */
int getStringInteger(char message[],char input[])
{
    char aux[256];
    getString(message,aux); //pide texto a traves del usuario y lo ingresa en el auxiliar de caracteres
    if(isNumeric(aux))//analiza si el vector es de solo numeros , si es verdadero devuelve la cadena
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** \brief Solicita al usuario un numero entero, y lo valida
 *
 * \param requestMessage[] char es el mensaje a mostrar para solicitar el dato
 * \param errorMessage[] char es el mensaje a ser mostrado en caso de error
 * \param lowerLimit int recibe el valor minimo que se permite para el dato
 * \param highLimit int recibe el valor maximo que se permite para el dato
 * \return int el numero ingresado por el usuario
 */
int getValidInt(char requestMessage[],char errorMessage[],int lowerLimit, int highLimit)
{
    char auxString[256];
    int auxInt;
    while(1) //mientras el valor sea verdadero
    {
        if(!getStringInteger(requestMessage/*Pide numeros*/,auxString)) //si lo que devolvio la funcion es falso (0 o -1) cumple la siguiente condicion
        {
            printf("%s\n",errorMessage);
            continue; //vuelve a la condicion hasta ingresar correctamente lo que pide
        }
        auxInt=atoi(auxString);//convierte el string de caracteres numericos en numeros enteros
        if(auxInt<lowerLimit || auxInt > highLimit)
        {
            printf("El numero debe ser mayor a %d y menor a %d\n",lowerLimit,highLimit);
            continue;
        }
        return auxInt;
    }
}

void getValidString(char requestMessage[], char errorMessage[], char input[],int MAXARRAY)
{
    int i;
    while(1) //mientras la condicion sea verdadera
    {
        if(!getStringChar(requestMessage,input))//si lo que devolvio es falso (!)
        {
            printf("%s\n",errorMessage);
            continue;
        }
        system("cls");

        strlwr(input);
        input[0]=toupper(input[0]);
            //Cuando encuentra un espacio a la letra siguiente la pasa a mayuscula
        for(i=0;i<MAXARRAY; i++)
        {
            if(input[i]==' ')
            {
                input[i+1]=toupper(input[i+1]);
            }
        }
        break;//si es correcto queda guardado el valor en "Input" (valor que guardo el usuario)
    }
}
