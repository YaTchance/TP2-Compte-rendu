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

void Hotel::addChambre(Chambre  chambreAjouter) {
  _chambres.push_back(chambreAjouter);    
  }

void Hotel::deleteChambre(Chambre chambreSupprimer) {
  for (int i=0; i < _chambres.size(); i++){
    if (chambreSupprimer.numero()==_chambres.at(i).numero()) 
  _chambres.erase(_chambres.begin() + i);        
    };
}

std::ostream &operator<<(std::ostream &os, Hotel &hotel) {
        os << "Nom : " << hotel.nom() << "\n Ville :" << hotel.ville() << "\n identifiant : " << hotel.identifiant() << std::endl;
        return os;
    }

std::ostream &operator<<(std::ostream &os, std::vector<Chambre *> &chambre) {
        for (auto i: chambre) {
            os << *i;
        }
        return os;
    }
