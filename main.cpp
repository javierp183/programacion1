//#############################################################################
// ARCHIVO             : main.cpp
// AUTOR/ES            : Javier Pereyra de autor/es
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 27/04/2018.
// ULTIMA ACTUALIZACION: 27/04/2018.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
//#ifndef _WIN32
//  # define _WIN32
//#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
#ifndef _LINUX
  # define _LINUX
#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
                    // objetos cin, cout y endl.

#include <cstdlib>  // Libreria estandar que contiene la funcion exit().

//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include "CSYSTEM/cadenas.h" // Mi libreria para el TSP.
#include "CSYSTEM/menu.h"
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;


//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------



int main()
{
    bool salir= false;
    char opcion;
    while(!salir)
    {
        sys::cls();                         //borro la pantalla
        menu();
        cin>>opcion;
        cin.ignore();
        switch(opcion)
        {
        case 'a':
        case 'A':
        {

        } break;
        case 'b':
        case 'B':
        {

        } break;
        case 'c':
        case 'C':
        {

        } break;
        case 'd':
        case 'D':
        {

        } break;
        case 'e':
        case 'E':
        {

        } break;
        case 'f':
        case 'F':
        {

        } break;
        case 'g':
        case 'G':
        {

        } break;
        case 'h':
        case 'H':
        {

        } break;
        case 'i':
        case 'I':
        {

        } break;
        case 'j':
        case 'J':
        {

        } break;
        case 'k':
        case 'K':
        {

        } break;
        case 'l':
        case 'L':
        {

        } break;
        case 'm':
        case 'M':
        {

        } break;
        case 's':
        case 'S':
        {
            cout <<"Salistes del menu, presione enter nuevamente.."<<endl;
            salir=true;
        }
        break;
        default:
        {
            cout <<"Opcion incorrecta!!!";
        }
        break;
        }
        cin.get();
    }
    //--------------------------------------------------------------------------
    // FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;

}




//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################

