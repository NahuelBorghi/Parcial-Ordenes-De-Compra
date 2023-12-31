#ifndef CLIENT_HPP
#define CLIENT_HPP
#pragma once

#include <IPerson.hpp>

using namespace std;

class Client : public IPerson
{
public:
  Client(string name, int dni);
  string getName() const;
  int getDni() const;

private:
  string _name;
  int _dni;
};

#endif