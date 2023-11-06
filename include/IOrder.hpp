#ifndef IORDER_HPP
#define IORDER_HPP
#pragma once

#include <IClient.hpp>
#include <IArticle.hpp>

class IOrder
{
public:
  virtual void setClient(shared_ptr<IClient> client) = 0;
  virtual void append(shared_ptr<IArticle> article) = 0;
  virtual int getId() const = 0;
  virtual shared_ptr<IClient> getClient() = 0;
  virtual vector<IArticle> getArticles() = 0;
  virtual void showOrder() = 0;
};

#endif