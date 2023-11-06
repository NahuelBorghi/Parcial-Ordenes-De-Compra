#ifndef ICLIENT_HPP
#define ICLIENT_HPP
#pragma once

#include <iostream>
#include <string>

using namespace std;

class IClient
{
public:
  virtual int getDni() const = 0;
  virtual string getName() const = 0;
};

#endif