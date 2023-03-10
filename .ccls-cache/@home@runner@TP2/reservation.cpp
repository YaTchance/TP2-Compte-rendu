#include <iostream>
#include "date.h"
#include "hotel.h"
#include "client.h"
#include "reservation.h"

Reservation::Reservation(Date dateDebut, int nombreNuit, Hotel identifiantHotel, Chambre chambre, Client identifiantClient) : _dateDebut(dateDebut), _nombreNuit(nombreNuit), _identifiantHotel(identifiantHotel), _chambre(chambre), _identifiantClient(identifiantClient) {}

Date Reservation::dateDebut() { return _dateDebut; }
int Reservation::nombreNuit() { return _nombreNuit; }
Hotel Reservation::identifiantHotel() const { return _identifiantHotel; }
Chambre Reservation::chambre() const { return _chambre; }
Client Reservation::identitfiantClient() const { return _identifiantClient; }
double Reservation::montantTotal() { return nombreNuit()*_chambre.getPrix(); }

std::string Reservation::getReservation() {
  return _dateDebut.toString() + " " + std::to_string(nombreNuit());
}

