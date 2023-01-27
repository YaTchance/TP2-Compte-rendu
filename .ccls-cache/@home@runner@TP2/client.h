#include <string>

#ifndef CLIENT_H
#define CLIENT_H
class Client {
public:
  Client(std::string firstname, std::string lastname, std::string identifiant);
  std::string firstname() const;
  std::string lastname() const;
  std::string getClient() const;
  std::string identifiant() const;
  friend std::ostream &operator<<(std::ostream &os, Client &client);

private:
  std::string _firstname;
  std::string _lastname;
  std::string _identifiant;
};

#endif // CLIENT_H