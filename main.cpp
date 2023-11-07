#include <iostream>
#include <Article.hpp>
#include <Client.hpp>
#include <Employee.hpp>
#include <Order.hpp>

using namespace std;

int main()
{
  // Create some articles
  auto article1 = make_shared<Article>("Adermicina", 1);
  auto article2 = make_shared<Article>("Dermagloss", 2);

  // Create some clients
  auto client1 = make_shared<Client>("Jose Luis Oemig", 1);
  auto employee1 = make_shared<Employee>("Nahuel Borghi", 2);

  // orderClient1
  auto orderClient1 = make_shared<Order>(1);
  orderClient1->setClient(client1);
  orderClient1->setEmployee(employee1);
  orderClient1->append(article1);
  orderClient1->append(article2);

  // Store orders in a vector
  vector<shared_ptr<IOrder>> orders = {orderClient1};

  // Show the orders in the console
  for (const auto &order : orders)
  {
    order->print();
  }

  return 0;
}