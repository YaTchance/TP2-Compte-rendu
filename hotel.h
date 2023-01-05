#include <iostream>
#include <vector>
#include "chambre.h"

class Hotel{
public:
private:
  std::string _nom;
  std::string _ville;
  std::string _identifiant;
  std::vector <Chambre> chambres;
}