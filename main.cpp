#include <iostream>
#include "client.h"
#include "date.h"
#include "chambre.h"
#include "hotel.h"
#include <vector>

int main() {
  
Client Cl1("Tchance ", "Ya ", "152536");
Client Cl2("David ", "Flavien ", "151101");

Chambre C1(001, Types::Single, 100);
Chambre C2(002, Types::Single, 100);
Chambre C3(003, Types::Single, 100);
Chambre C4(101, Types::Double, 125);
Chambre C5(102, Types::Double, 125);
Chambre C6(103, Types::Double, 125);
Chambre C7(104, Types::Double, 125);
Chambre C8(105, Types::Double, 125);
Chambre C9(201, Types::Suite, 210);
Chambre C10(202, Types::Suite, 210);
  
std::vector<Chambre> chambre;
  chambre.push_back(C1);

Hotel H1(" Le Ritz ", "Paris", "RITZ15PV", chambre);
H1.addChambre(C2);
H1.addChambre(C3);
H1.addChambre(C4);
H1.addChambre(C5);
H1.addChambre(C6);
H1.addChambre(C7);
H1.addChambre(C8);
H1.addChambre(C9);
H1.addChambre(C10);
}

