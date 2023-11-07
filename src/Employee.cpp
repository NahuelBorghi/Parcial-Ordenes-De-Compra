#include <Employee.hpp>

Employee::Employee(string name, int dni)
    : _dni(dni),
      _name(name) {}

int Employee::getDni() const
{
  return _dni;
}

string Employee::getName() const
{
  return _name;
}
