#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"


/** \brief Inicializa el status en un array de programadores
 *
 * \param personArray[] ePerson el array en el cual inicializara
 * \param arrayLenght int la longitud del array
 * \return void
 *
 */
void inicializarProgramadores(eProgramador arrayProgramadores[],int arrayLength)
{
    int i;
    for(i=0;i<arrayLength;i++)  //en cada posicion del array
    {
        arrayProgramadores[i].status==0;
    }
}

/** \brief Inicializa el status en un array de categorias
 *
 * \param personArray[] ePerson el array en el cual inicializara
 * \param arrayLenght int la longitud del array
 * \return void
 *
 */
void setCategoriaStatus(eCategoria arrayCategorias[],int arrayLength)
{
    int i;
    for(i=0;i<arrayLength;i++)  //en cada posicion del array
    {
        arrayCategorias[i].status==0;
    }
}

/** \brief Inicializa el status en un array de proyectos
 *
 * \param personArray[] ePerson el array en el cual inicializara
 * \param arrayLenght int la longitud del array
 * \return void
 *
 */
void setProyectoStatus(eProyecto arrayProyectos[],int arrayLength)
{
    int i;
    for(i=0;i<arrayLength;i++)  //en cada posicion del array
    {
        arrayProyectos[i].status==0;
    }
}


int menu()
{
    int opcion;

    system("cls");
    printf("**Menu de opciones**\n\n");
    printf("1- Alta Programador\n");
    printf("2- Modificacion Programador\n");
    printf("3- Baja Programador\n");
    printf("4- Asignar Programador a Proyecto\n");
    printf("5- Mostrar listado de Programadores\n");
    printf("6- Mostrar listado de todos los Proyectos\n");
    printf("7- Mostrar listado de Proyectos de Programador\n");
    printf("8- Mostrar Proyecto con mas Programadores asingados\n");
    printf("9-salir");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    return opcion;

}
/** \brief Busca la primer ocurrencia de una persona mediante su codigo
 *
 * \param programmerArray[] eProgramador es el array en el cual buscar
 * \param arrayLenght int La longitud del array
 * \param id int es el valor que se busca
 * \return int si no hay ocurrencia (-1) y si la hay la posicion en el array de la misma (i)
 *
 */
int findProgramadorById(eProgramador programmerArray[],int arrayLenght,int id)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(programmerArray[i].idProgramador==id&&programmerArray[i].status==1)
        {
            return i;
        }
    }
    return -1;
}

int findCategoriaById(eCategoria CategoriesArray[],int arrayLenght,int id)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(CategoriesArray[i].idCateg==id&&CategoriesArray[i].status==1)
        {
            return i;
        }
    }
    return -1;
}

int findProyectById(eProyecto proyectsArray[],int arrayLenght,int id)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(proyectsArray[i].idProyecto==id&&proyectsArray[i].status==1)
        {
            return i;
        }
    }
    return -1;
}
void showListadoDeProgramadores (eProgramador arrayDeProgramadores[], int arrayProgLength, eCategoria arrayCategorias[], int arrayCatLength, eProyecto arraydeProyectos[], int arrayProyLength, eProgramador_Categoria arrayProg_Cat[], int arrayCYPLength, eProgramador_Proyecto arrayProg_Proy[], int arrayPYPLength)
{
    int i;//,j,k,m,n;
    int auxIdProgramador;
    int auxIdCategory;
    int auxCategory[50];
   /*
    char auxProyecto[51];
    char NombreYApellido[200];//no olvidar concatenar*/

    printf("\n |\tID\t|\t|\tNOMBRE Y APELLIDO\t|\t|\tCATEGORIA\t|\t");

    for(i=0;i<arrayProgLength;i++) //busca en array de programadores
    {
        if(arrayDeProgramadores[i].status==1)
        {
            auxIdCategory=findCategoriaById(arrayCategorias,arrayCatLength,arrayDeProgramadores[i].idCategoria);//busca coincidencia entre id de categoria entre array de programadores y array de categorias
            if(auxIdCategory!=-1)//en el caso de coincidir
            {
                strcpy(auxCategory,arrayCategorias[auxIdCategory].descripcionCateg);
            }

        printf("|\t%d\t|\t%s\t%s\t|\t%s\t|",arrayDeProgramadores[i].idProgramador,arrayDeProgramadores[i].nombreProg,arrayDeProgramadores[i].apellidoProg,auxCategory);
        }

        }
    }



