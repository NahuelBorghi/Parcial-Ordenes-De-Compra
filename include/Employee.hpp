#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#pragma once

#include <IPerson.hpp>

using namespace std;

class Employee : public IPerson
{
public:
  Employee(string name, int dni);
  string getName() const;
  int getDni() const;

private:
  string _name;
  int _dni;
};

#endif