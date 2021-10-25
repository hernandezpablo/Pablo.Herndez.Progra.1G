#include <stdio.h>
#include <stdlib.h>
#ifndef VACUNAS_H_INCLUDED
#define VACUNAS_H_INCLUDED
typedef struct{
    int id;
    char nombre[15];
    char tipo[5];
    float efectividad;
}eVacuna;
#endif // NOTEBOOK_H_INCLUDED
int ordenarVacuna(eVacuna vacunas[],int tam);
//int remplazarCaracteres(char palabra[], char letra, char letra2);
int aplicarAumento(int precio);



