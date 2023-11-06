#include <iostream>
#include <Article.hpp>
#include <Client.hpp>
#include <Order.hpp>
using namespace std;

int main()
{
  // Create some articles
  auto article1 = make_shared<Article>("Adermicina", 1);
  auto article2 = make_shared<Article>("Dermagloss", 2);

  // Create some clients
  auto client1 = make_shared<Client>("Jose Luis Oemig", 1);
  auto client2 = make_shared<Client>("Nahuel Borghi", 2);

  // Create orders for clients
  vector<shared_ptr<IArticle>> client1Articles = {article1, article2}; // solo como ejemplo uso el typedef Article
  vector<shared_ptr<IArticle>> client2Articles = {article2};

  // orderClient1
  auto orderClient1 = make_shared<Order>(1);
  orderClient1->setClient(client1);
  orderClient1->append(article1);
  orderClient1->append(article2);

  // orderClient2
  auto orderClient2 = make_shared<Order>(2);
  orderClient2->setClient(client2);
  orderClient2->append(article2);

  // Store orders in a vector
  vector<shared_ptr<IOrder>> orders = {orderClient1, orderClient2};

  // Show the orders in the console
  for (const auto &order : orders)
  {
    order->print();
  }

  return 0;
}