#ifndef ORDER_HPP
#define ORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IOrder.hpp>

using namespace std;

class Order : public IOrder
{
public:
  Order(int id);
  int getId() const;
  void setClient(shared_ptr<IPerson> client);
  void setEmployee(shared_ptr<IPerson> employee);
  void append(shared_ptr<IArticle> article);
  shared_ptr<IPerson> getClient();
  shared_ptr<IPerson> getEmployee();
  vector<shared_ptr<IArticle>> getArticles();
  void print();

private:
  int _id;
  shared_ptr<IPerson> _client;
  shared_ptr<IPerson> _employee;
  vector<shared_ptr<IArticle>> _articles;
};

#endif