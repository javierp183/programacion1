//#############################################################################
// ARCHIVO             : cadenas.h
// AUTOR/ES            : Javier Pereyra de autor/es
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 27/04/2018.
// ULTIMA ACTUALIZACION: 27/04/2018.
// LICENCIA            : GPL (General Public License) - Version 3.
//

#ifndef CADENAS_H_INCLUDED;
#define CADENAS_H_INCLUDED;

using namespace std;

//****************************************************************************************************************
// DEFINICION DE LAS FUNCIONES
//================================================================================================================
// FUNCION : int strLen(char *)
// ACCION : Cuenta la cantidad de caracteres que integran una cadena.
// PARAMETROD: c --> cdena de cacteres.
// DEVUELVE : tipo --> explicacionsi representa algo.
//****************************************************************************************************************


//Definicion de funciones.


int strLen(char *c){

    int i=0;
    while(c[i] != '\0') //Este while recorre toda la cadena de caracteres hasta encontrar el '\0'
    {
    i++;
    }

}








#endif // CADENAS_H_INCLUDED

