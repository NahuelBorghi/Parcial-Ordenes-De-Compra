#include <Client.hpp>

Client::Client(string name, int dni)
    : _dni(dni),
      _name(name) {}

int Client::getDni() const
{
  return _dni;
}

string Client::getName() const
{
  return _name;
}
