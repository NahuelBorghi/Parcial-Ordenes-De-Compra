#ifndef IPERSON_HPP
#define IPERSON_HPP
#pragma once

#include <iostream>
#include <string>

using namespace std;

class IPerson
{
public:
  virtual int getDni() const = 0;
  virtual string getName() const = 0;
};

#endif