#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <Article.hpp>
#include <iostream>
#include <memory>
#include <catch.hpp>

using namespace std;

TEST_CASE("Correct getName from Article", "[getName method]")
{
  // Arrange
  auto article1 = make_shared<Article>("Adermicina", 001);

  // Act
  string articleName = article1->getName();

  // Assert
  REQUIRE(articleName == "Adermicina");
}
TEST_CASE("Correct getId from Article", "[getId method]")
{
  // Arrange
  auto article1 = make_shared<Article>("Adermicina", 001);

  // Act
  string articleName = article1->getId();

  // Assert
  REQUIRE(articleName == 001);
}