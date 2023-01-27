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
  Types type();
  double getPrix();
  void updatePrix(double prix);
  std::string getChambre();
  std::string toStringTypes(Types t);
  friend std::ostream &operator<<(std::ostream &os, Chambre &chambre);
private:
  Chambre* next;
  int _numero;
  Types _type;
  double _prix;
};

#endif // CHAMBRE_H