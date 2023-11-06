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
  void setClient(shared_ptr<IClient> client);
  void append(shared_ptr<IArticle> article);
  shared_ptr<IClient> getClient();
  vector<shared_ptr<IArticle>> getArticles();
  void print();

private:
  int _id;
  shared_ptr<IClient> _client;
  vector<shared_ptr<IArticle>> _articles;
};

#endif