#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
/*1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule
estos a los que ya tiene el país. La función no devuelve nada. */

void actualizarRecuperados(ePais* pais, int recuperados){

if (pais != NULL && recuperados >0){
    pais->recuperados += recuperados;
}
}

/*3.Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/
int ordenarCaracteres(char cadena[]){
int todoOk =0;
int tam = strlen(cadena);
char auxLetra;
if(cadena!=NULL){
    for(int i =0; i < tam-1; i++){

        for(int j = i+1; j < tam; j++){
            if (cadena[i]>cadena[j]){
                auxLetra = cadena[i];
                cadena[i]= cadena[j];
                cadena[j]=auxLetra;
            }
            todoOk=1;
        }
    }


}

return todoOk;
}

/*2.Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU*/
int invertirCadena(char cadena[]){
int todoOk = 0;
int j =0;
int tam = strlen(cadena)-1;
char auxCadena[18];

if(cadena!= NULL){

    for(int i = tam; i>=0; i--){
        auxCadena[j] = cadena[i];
        j++;
    }

    todoOk = 1;
}
strcpy(cadena,auxCadena);
return todoOk;
}

