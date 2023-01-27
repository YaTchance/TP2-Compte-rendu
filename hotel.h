#include <iostream>
#include <vector>
#include "chambre.h"

#ifndef HOTEL_H
#define HOTEL_H

class Hotel{
public:
  Hotel(std::string nom, std::string ville, std::string identifiant, std::vector<Chambre> chambres);
  Hotel();
  std::string nom() const;
  std::string ville() const;
  std::string identifiant() const;
  std::vector<Chambre> chambres();
  std::string getHotel();
  void addChambre(Chambre);
  void deleteChambre(Chambre);
  friend std::ostream &operator<<(std::ostream &os, Hotel &hotel);
  friend std::ostream &operator<<(std::ostream &os, const std::vector<Chambre *> &chambre);

private:
  std::string _nom;
  std::string _ville;
  std::string _identifiant;
  std::vector<Chambre> _chambres;
};

#endif // HOTEL_H