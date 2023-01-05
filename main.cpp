#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"

int main() {
  Client client("Flavien", "David", "fdavid");
  std::cout << client.getClient() << std::endl;
  Date date(15/11/2001);
  Chambre chambre(208, Types::Single, 180);
  std::cout << chambre.getChambre() << std::endl;
}

