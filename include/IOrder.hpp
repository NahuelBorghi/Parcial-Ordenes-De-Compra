#ifndef IORDER_HPP
#define IORDER_HPP
#pragma once

#include <IPerson.hpp>
#include <IArticle.hpp>

class IOrder
{
public:
  virtual void setClient(shared_ptr<IPerson> client) = 0;
  virtual void setEmployee(shared_ptr<IPerson> employee) = 0;
  virtual void append(shared_ptr<IArticle> article) = 0;
  virtual int getId() const = 0;
  virtual shared_ptr<IPerson> getClient() = 0;
  virtual shared_ptr<IPerson> getEmployee() = 0;
  virtual vector<shared_ptr<IArticle>> getArticles() = 0;
  virtual void print() = 0;
};

#endif