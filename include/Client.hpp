#ifndef CLIENT_HPP
#define CLIENT_HPP
#pragma once

#include <IClient.hpp>

using namespace std;

class Client : public IClient
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