#include <iostream>

#ifndef CHAMBRE_H
#define CHAMBRE_H

enum class Types{
    Single, Double, Triple, Quadruple, Suite };

class Chambre{
public:
  Chambre(int numero, Types type, double prix);
  Chambre();
  int numero() const;
  Types type() const;
  double getPrix();
  void updatePrix(double prix);
  std::string getChambre();
private:
  Chambre* next;
  int _numero;
  Types _type;
  double _prix;
};

#endif // CHAMBRE_H