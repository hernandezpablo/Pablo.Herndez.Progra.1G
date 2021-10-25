#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "vacunas.h"
int ordenarVacuna(eVacuna vacunas[],int tam){
    int todoOk = 0;
    eVacuna auxVacuna;
    if (vacunas != NULL && tam >0){
        todoOk =1;
        for(int i=0; i <tam - 1; i++){

            for(int j=i+1; j<tam; j++){

                if (strcmp(vacunas[i].tipo,vacunas[j].tipo)> 0 ||
                   (strcmp(vacunas[i].tipo, vacunas[j].tipo)== 0 && vacunas[i].efectividad > vacunas[j].efectividad) )
                {
                    auxVacuna = vacunas[i];
                    vacunas[i] = vacunas[j];
                    vacunas[j] = auxVacuna;
                }
            }
        }
    }
    return todoOk;
}

int remplazarCaracteres(char palabra[], char letra, char letra2){
int contador =0;
if (palabra !=NULL){
    for(int i =0; i < strlen(palabra); i++){
        if (palabra[i] == letra){
            palabra[i] = letra2;
            contador++;
        }
    }
}
return contador;
}
int aplicarAumento(int precio){

if (precio > 0){
precio = precio *1.05;
}

return precio;
}
