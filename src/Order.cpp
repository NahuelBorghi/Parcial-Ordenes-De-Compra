#include <Order.hpp>

Order::Order(int id) : _id(id) {}

int Order::getId() const
{
  return _id;
}

void Order::setClient(shared_ptr<IClient> client)
{
  _client = client;
}

void Order::append(shared_ptr<IArticle> article)
{
  _articles.push_back(article);
}

void Order::print()
{
  cout << "Order " << this->getId() << " for " << _client->getName() << " at "
       << ":\n";
  for (const auto &article : _articles)
  {
    cout << "  - " << article->getName() << " (" << article->getId() << "): $"
         << "\n";
  }
}

shared_ptr<IClient> Order::getClient()
{
  return _client;
}
vector<shared_ptr<IArticle>> Order::getArticles()
{
  return _articles;
}