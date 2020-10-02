#include <iostream>
#include <iomanip>
#include <string>
#include "entidades/Sucursal.h"
#include "entidades/Provincia.h"
#include "Listas/Lista.h"
#include "Nucleo.cpp"
#include "entidades/Interfaz.h"
using namespace std;
int opc, mod(), con(), menu(),consub1(),consub2(), ren();
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
    case 1: mod(); break;
    case 2: con(); break;
    case 3: break;
    default : menu();
    }
}
int mod(){
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
    case 1: mod(); break;
    case 2: con(); break;
    case 3: mod(); break;
    case 4: menu(); break;
    default : mod();
    }
}
int con(){
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
    case 1: consub1(); break;
    case 2: consub2(); break;
    case 3: ren(); break;
    case 4: menu(); break;
    default : con();
    }
    }
int consub1(){
system("cls");
 Lista listaSuc;
    crearLista(listaSuc,compararMonto);
    cargarSucursal( listaSuc);
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
    case 1: reordenar(listaSuc); ImprimirLista(listaSuc); break;
    case 2: setCompare(listaSuc,compararMontoProv); reordenar(listaSuc); ImprimirLista(listaSuc); break;
    case 3: eliminarListaSucursal(listaSuc); con(); break;
    default : consub1();
    }
     eliminarListaSucursal(listaSuc);
    cout << "\n Ingrese 0 para volver o cualquier numero para salir: "; cin>>opc;
    system("cls");
    switch(opc){
    case 0: consub2(); break;
    default : break;
    }
}
int consub2(){
system("cls");
 Lista listaSuc;
    crearLista(listaSuc,compararMonto);
    cargarSucursal( listaSuc);
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
    case 1: setCompare(listaSuc,compararArticulo); reordenar(listaSuc); ImprimirLista(listaSuc);; break;
    case 2: setCompare(listaSuc,compararArticuloProv); reordenar(listaSuc); ImprimirLista(listaSuc); break;
    case 3: con(); eliminarListaSucursal(listaSuc); break;
    default : consub2();
    }
    eliminarListaSucursal(listaSuc);
    cout << "\n Ingrese 0 para volver o cualquier numero para salir: "; cin>>opc;
    system("cls");
    switch(opc){
    case 0: consub2(); break;
    default : break;
    }
}
int ren(){
system("cls");
Lista listaSuc;
    crearLista(listaSuc,compararMonto);
    cargarSucursal( listaSuc);
    setCompare(listaSuc,compararMt2Fact);
    reordenar(listaSuc);
    ImprimirLista(listaSuc);
     eliminarListaSucursal(listaSuc);
    cout << "\n Ingrese 0 para volver o cualquier numero para salir: "; cin>>opc;
    system("cls");
    switch(opc){
    case 0: con(); break;
    default : break;

}
}
