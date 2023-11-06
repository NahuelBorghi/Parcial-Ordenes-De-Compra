#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <Client.hpp>
#include <iostream>
#include <memory>
#include <catch.hpp>

using namespace std;

TEST_CASE("Correct getName from Client", "[getName method]")
{
  // Arrange
  auto client1 = make_shared<Client>("Adermicina", 001);

  // Act
  string clientName = Client1->getName();

  // Assert
  REQUIRE(clientName == "Adermicina");
}
TEST_CASE("Correct getId from Client", "[getId method]")
{
  // Arrange
  auto client1 = make_shared<Client>("Adermicina", 001);

  // Act
  string clientName = Client1->getId();

  // Assert
  REQUIRE(clientName == 001);
}