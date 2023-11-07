#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <Order.hpp>
#include <Article.hpp>
#include <Client.hpp>
#include <Employee.hpp>
#include <iostream>
#include <catch.hpp>

#define chango auto

using namespace std;

//
// Client   -----------------------------------------------------------------------
//

TEST_CASE("Correct getName from Client", "[getName method]")
{
  // Arrange                                                                      |
  chango client1 = make_shared<Client>("Jose Luis Oemig", 30456987);
  // Act                                                                          |
  string clientName = client1->getName();
  // Assert                                                                       |
  REQUIRE(clientName == "Jose Luis Oemig");
}
TEST_CASE("Correct getDni from Client", "[getDni method]")
{
  // Arrange                                                                      |
  chango client1 = make_shared<Client>("Jose Luis Oemig", 30456987);
  // Act                                                                          |
  int clientName = client1->getDni();
  // Assert                                                                       |
  REQUIRE(clientName == 30456987);
}

//
// Employee   -----------------------------------------------------------------------
//

TEST_CASE("Correct getName from Employee", "[getName method]")
{
  // Arrange                                                                      |
  chango employee1 = make_shared<Employee>("Nahuel Borghi", 42235717);
  // Act                                                                          |
  string employeeName = employee1->getName();
  // Assert                                                                       |
  REQUIRE(employeeName == "Nahuel Borghi");
}
TEST_CASE("Correct getDni from Employee", "[getDni method]")
{
  // Arrange                                                                      |
  chango employee1 = make_shared<Employee>("Nahuel Borghi", 42235717);
  // Act                                                                          |
  int employeeName = employee1->getDni();
  // Assert                                                                       |
  REQUIRE(employeeName == 42235717);
}
//
// Article  -----------------------------------------------------------------------
//

TEST_CASE("Correct getName from Article", "[getName method]")
{
  // Arrange                                                                      |
  chango article1 = make_shared<Article>("Adermicina", 001);
  // Act                                                                          |
  string articleName = article1->getName();
  // Assert                                                                       |
  REQUIRE(articleName == "Adermicina");
}
TEST_CASE("Correct getId from Article", "[getId method]")
{
  // Arrange                                                                      |
  chango article1 = make_shared<Article>("Adermicina", 002);
  // Act                                                                          |
  int articleId = article1->getId();
  // Assert                                                                       |
  REQUIRE(articleId == 002);
}

//
// Order    -----------------------------------------------------------------------
//

TEST_CASE("Correct getId from order", "[getId method]")
{
  // Arrange                                                                      |
  chango order1 = make_shared<Order>(3);
  chango client1 = make_shared<Client>("Jose Luis oemig", 30456987);
  chango employee1 = make_shared<Employee>("Nahuel Borghi", 42235717);
  chango article1 = make_shared<Article>("Adermicina", 2);
  order1->setClient(client1);
  order1->setEmployee(employee1);
  order1->append(article1);
  // Act                                                                          |
  int orderId = order1->getId();
  // Assert                                                                       |
  REQUIRE(orderId == 3);
}
TEST_CASE("Correct Client integration in order", "[getClient method]")
{
  // Arrange                                                                      |
  chango order1 = make_shared<Order>(3);
  chango client1 = make_shared<Client>("Jose Luis oemig", 30456987);
  chango employee1 = make_shared<Employee>("Nahuel Borghi", 42235717);
  chango article1 = make_shared<Article>("Adermicina", 2);
  order1->setClient(client1);
  order1->setEmployee(employee1);
  order1->append(article1);
  // Act                                                                          |
  shared_ptr<IPerson> orderClient = order1->getClient();
  // Assert                                                                       |
  REQUIRE(orderClient == client1);
}
TEST_CASE("Correct Article integration in order", "[getArticle method]")
{
  // Arrange                                                                      |
  chango order1 = make_shared<Order>(3);
  chango client1 = make_shared<Client>("Jose Luis oemig", 30456987);
  chango employee1 = make_shared<Employee>("Nahuel Borghi", 42235717);
  chango article1 = make_shared<Article>("Adermicina", 2);
  order1->setClient(client1);
  order1->setEmployee(employee1);
  order1->append(article1);
  // Act                                                                          |
  vector<shared_ptr<IArticle>> orderArticle = order1->getArticles();
  // Assert                                                                       |
  REQUIRE(orderArticle[0]->getName() == article1->getName());
}
