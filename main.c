#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"

#define MAXPROGRAM 50
#define MAXPROYECT 1000
#define MAXCATEGOR 3
int main()
{
    eProgramador arrayProgramadores[MAXPROGRAM];
    eCategoria arrayCategorias[MAXCATEGOR];
    eProyecto arrayProyectos[MAXPROYECT];
    eProgramador_Proyecto arrayProgramadoresYProyectos[2000];
    eProgramador_Categoria arrayProgramadoresYCategorias[2000];
    char seguir ='s';

    inicializarProgramadores(arrayProgramadores,MAXPROGRAM); //INICIALIZO ESTADO DE ESTRUCTURAS EN 0
    setCategoriaStatus(arrayCategorias,MAXCATEGOR);
    setProyectoStatus(arrayProyectos,MAXPROYECT);

    //ALTA DE DATOS HARDCODEADOS



    do {
        switch(menu())
        {
        case 1: //ALTA DE AUTOR
            break;
        case 2:
            break;
        case 3:
            break;
        case 4://asignar proyecto a programador
            break;
        case 5://LISTADO DE PROGRAMADORES

            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        }
    }while(seguir=='s');
    return 0;
}
