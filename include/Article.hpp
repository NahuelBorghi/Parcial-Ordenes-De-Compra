#ifndef ARTICLE_HPP
#define ARTICLE_HPP
#pragma once

#include <IArticle.hpp>

using namespace std;

class Article : public IArticle
{
public:
  Article(string name, int id);
  string getName() const;
  int getId() const;

private:
  string _name;
  int _id;
};

#endif