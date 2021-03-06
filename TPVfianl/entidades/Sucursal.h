#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "../Listas/Lista.h"
typedef struct {
    int codSucursal;
    std::string provincia;
    int cantArticulo;
    float monto;
    float cm2;
    int casaMatriz;
}Sucursal;
void crearSucursal(Sucursal &sucursal,int codSucursal,char provincia, int cantArticulo, float monto, int cm2,int casaMatriz );
void borrarSucursal(Sucursal *sucursal);
int getCodSucursal(Sucursal &sucursal);
void setCodSucursal(Sucursal &sucursal, int codSucursal);
std::string getProvincia(Sucursal &sucursal);
void setProvincia(Sucursal &sucursal, std::string provincia);
int getCantArticulo(Sucursal &sucursal);
void setCantArtciulo(Sucursal &sucursal, int cantArticulo);
float getMonto(Sucursal &sucursal);
void setMonto(Sucursal &sucursal, float monto);
float getCm2(Sucursal &sucursal);
void setCm2(Sucursal &sucursal, float cm2);
int getCasaMatriz(Sucursal &sucursal);
void setCasaMatriz(Sucursal &sucursal, int casaMatriz);
void cargarSucursal(Lista &lista);
void leerLineaSucursal(std::string *destino, FILE* fSucursal);
std::string toString(Sucursal &sucursal);
#endif // SUCURSAL_H_INCLUDED
