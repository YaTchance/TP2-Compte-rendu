#include "hotel.h"
#include <iostream>
#include <vector>

Hotel::hotel(std::string nom, std::string ville, std::string identifiant, std::vector<Chambre> chambres) : _nom(nom), _ville(ville), _identifiant(identifiant), _chambres(chambres) {}

std::string Hotel::nom() const { return _nom; }

std::string Hotel::ville() const { return _ville; }

std::string Hotel::identifiant() const { return _identifiant; }

std::vector<Chambre> Hotel::chambres() const { return _chambres; }

std::string Hotel::getHotel() const {
  return std::string(nom() + " " + std::string(ville()) + " " + std::string(identifiant()));
};