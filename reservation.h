#include <iostream>
#include "date.h"
#include "hotel.h"
#include "client.h"

class Reservation{
public:
  Reservation(Date dateDebut, int nombreNuit, Hotel identifiantHotel, Chambre chambre, Client identifiantClient);
  Date dateDebut();
  int nombreNuit();
  Hotel identifiantHotel() const;
  Chambre chambre() const;
  Client identitfiantClient() const;
  double montantTotal(); 
  std::string getReservation();
   

private:
  Date _dateDebut;
  int _nombreNuit;
  Hotel _identifiantHotel;
  Chambre _chambre;
  Client _identifiantClient;
}