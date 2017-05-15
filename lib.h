#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

typedef struct{
    int idProgramador;
    char nombreProg[31];
    char apellidoProg[31];
    int idCategoria;
    int status;
}eProgramador;

typedef struct{
    int idCateg;
    char descripcionCateg[31];
    float pagoXHora;
    int status;
}eCategoria;

typedef struct{
    int idProyecto;
    char nombreProyecto[31];
    int status;
}eProyecto;

typedef struct{
    int idProgrammer;
    int idProyect;

}eProgramador_Proyecto;

typedef struct{
    int idProgramador;
    int idCategoria;
}eProgramador_Categoria;

void inicializarProgramadores(eProgramador[],int);
void setCategoriaStatus(eCategoria [],int);
void setProyectoStatus(eProyecto [],int);
int menu();





#endif // LIB_H_INCLUDED
