#include "hotel.h"
#include "chambre.h"
#include <iostream>
#include <vector>

Hotel::Hotel(std::string nom, std::string ville, std::string identifiant, std::vector<Chambre> chambres) : _nom(nom), _ville(ville), _identifiant(identifiant), _chambres(chambres) {}

std::string Hotel::nom() const { return _nom; }

std::string Hotel::ville() const { return _ville; }

std::string Hotel::identifiant() const { return _identifiant; }

std::vector<Chambre> Hotel::chambres() { return _chambres; }

std::string Hotel::getHotel(){
  return std::string(nom() + " " + std::string(ville()) + " " + std::string(identifiant()) + " " + getChambre());
};

