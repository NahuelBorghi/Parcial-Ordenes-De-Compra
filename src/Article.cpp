#include <Article.hpp>

Article::Article(string name, int id)
    : _id(id),
      _name(name) {}

int Article::getId() const
{
  return _id;
}

string Article::getName() const
{
  return _name;
}
