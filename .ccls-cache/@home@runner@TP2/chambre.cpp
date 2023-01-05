#include <iostream>
#include "chambre.h"
#include <assert.h>

Chambre::Chambre(int numero, Types type, double prix) : _numero(numero), _type(type), _prix(prix) {}

int Chambre::numero() const { return _numero; }

double Chambre::getPrix() { return _prix; }

Types Chambre::type() const { return _type; }

std::string toStringTypes(Types t) {
switch (t)
{
case Types::Single:
return "Single";
break;
case Types::Double:
return "Double";
break;
case Types::Triple:
return "Triple";
break;
case Types::Quadruple:
return "Quadruple";
break;
case Types::Suite:
return "Suite";
break;
default:
break;
}
}

std::string Chambre::getChambre(){
  return std::string(std::to_string(numero()) + " " + toStringTypes(Types()) + " " + std::string(std::to_string(getPrix())));
}

void Chambre::updatePrix(double prix){
   _prix = prix;
}