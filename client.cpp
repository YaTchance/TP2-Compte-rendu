#include "client.h"
#include <iostream>

Client::Client(std::string firstname, std::string lastname, std::string identifiant)
    : _firstname(firstname), _lastname(lastname), _identifiant(identifiant) {}

std::string Client::firstname() const { return _firstname; }

std::string Client::lastname() const { return _lastname; }

std::string Client::identifiant() const { return _identifiant; }

std::string Client::getClient() const {
  return std::string(firstname() + " " + std::string(lastname()) + " " + std::string(identifiant()));
};

std::ostream &operator<<(std::ostream &os, Client &client) {
        os << "Prénom : " << client.firstname() << "\n Nom : " << client.lastname() << "\n identifiant : " << client.identifiant() << std::endl;
        return os;
    }
