#include <Order.hpp>

Order::Order(int id) : _id(id) {}

int Order::getId() const
{
  return _id;
}

void Order::setClient(shared_ptr<IPerson> client)
{
  _client = client;
}

void Order::setEmployee(shared_ptr<IPerson> employee)
{
  _employee = employee;
}

void Order::append(shared_ptr<IArticle> article)
{
  _articles.push_back(article);
}

void Order::print()
{
  cout << "Orden " << this->getId() << " de " << _client->getName() << "\n";
  for (const auto &article : _articles)
  {
    cout << "  - " << article->getName() << " (" << article->getId() << ")"
         << "\n";
  }
  cout << "Vendedor: " << _employee->getName() << "\n";
}

shared_ptr<IPerson> Order::getEmployee()
{
  return _employee;
}

shared_ptr<IPerson> Order::getClient()
{
  return _client;
}

vector<shared_ptr<IArticle>> Order::getArticles()
{
  return _articles;
}