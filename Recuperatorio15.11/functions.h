#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
typedef struct{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;

}ePais;
#endif // FUNCTIONS_H_INCLUDED
void actualizarRecuperados(ePais* pais, int recuperados);
int ordenarCaracteres(char cadena[]);
int invertirCadena(char cadena[]);
