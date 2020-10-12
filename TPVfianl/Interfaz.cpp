#include <iostream>
#include <iomanip>
#include <string>
#include "entidades/Sucursal.h"
#include "entidades/Provincia.h"
#include "Listas/Lista.h"
#include "Nucleo.cpp"
#include "entidades/Interfaz.h"
using namespace std;
int opc, modificacion(), consulta(), menu(),facturacion(),ventas(), rendimiento(), volver();
int menu(){
system("cls");
    cout <<"###############################################"<< endl;
    cout << "#\tSistema de control se sucursal.       #" << endl;
    cout <<"###############################################"<< endl;
    cout << "\n\n1. Modificacion" << endl;
    cout << "\n2. Consulta" << endl;
    cout << "\n3. Salir" << endl;
    cout << "\n\nIngrese la opcion deseada: "; cin>>opc;
    switch(opc){
    case 1: modificacion(); break;
    case 2: consulta(); break;
    case 3: break;
    default : menu();
    }
}
int modificacion(){
    system("cls");
cout <<"###############################################"<< endl;
    cout << "#\tSistema de control se sucursal.       #" << endl;
    cout <<"###############################################"<< endl;
    cout << "\n\n1. Alta sucursal" << endl;
    cout << "\n2. Modificacion sucursal" << endl;
    cout << "\n3. Baja sucursal" << endl;
    cout << "\n4. Volver" << endl;
    cout << "\n\nIngrese la opcion deseada: "; cin>>opc;
    switch(opc){
    case 1: modificacion(); break;
    case 2: modificacion(); break;
    case 3: modificacion(); break;
    case 4: menu(); break;
    default : modificacion();
    }
}
int consulta(){
system("cls");
cout <<"###############################################"<< endl;
    cout << "#\tSistema de control se sucursal.       #" << endl;
    cout <<"###############################################"<< endl;
    cout << "\n\n1. Sucursal con mayor facturacion" << endl;
    cout << "\n2. Sucursal con mayor Nro. ventas" << endl;
    cout << "\n3. Sucursal con mayor rendimiento" << endl;
    cout << "\n4. Volver" << endl;
    cout << "\n\nIngrese la opcion deseada: "; cin>>opc;
    system("cls");
    switch(opc){
    case 1: facturacion(); break;
    case 2: ventas(); break;
    case 3: rendimiento(); volver(); break;
    case 4: menu(); break;
    default : consulta();
    }
    }
int facturacion(){
system("cls");

    cout <<"###############################################"<< endl;
    cout << "#\tSistema de control se sucursal.       #" << endl;
    cout <<"###############################################"<< endl;
     cout << "\n\n\tSucursal con mayor facturacion." << endl;
    cout << "\n\n1. A nivel nacional" << endl;
    cout << "\n2. A nivel provincial" << endl;
    cout << "\n3. Volver" << endl;
    cout << "\n\nIngrese la opcion deseada: "; cin>>opc;
    system("cls");
    switch(opc){
    case 1: lstNacional(); volver(); break;
    case 2: lstProvincial(); volver(); break;
    case 3: consulta(); break;
    default : facturacion();
    }
}
int ventas(){
system("cls");

    cout <<"###############################################"<< endl;
    cout << "#\tSistema de control se sucursal.       #" << endl;
    cout <<"###############################################"<< endl;
     cout << "\n\n\tSucursal con mayor Nro. ventas." << endl;
    cout << "\n\n1. A nivel nacional" << endl;
    cout << "\n2. A nivel provincial" << endl;
    cout << "\n3. Volver" << endl;
    cout << "\n\nIngrese la opcion deseada: "; cin>>opc;
    system("cls");
    switch(opc){
    case 1: lstNacional(); volver(); break;
    case 2: lstProvincial(); volver(); break;
    case 3: consulta(); break;
    default : ventas();
    }

    }
int rendimiento(){
system("cls");
lstRendimiento();
}
int volver(){
cout << "\n Ingrese 0 para volver o cualquier numero para salir: "; cin>>opc;
    system("cls");
    switch(opc){
    case 0: consulta(); break;
    default : break;
    }
}
