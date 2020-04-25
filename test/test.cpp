#include <hello.hpp>
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("test_greeting")
{
    std::string value = hello::greeting();
    REQUIRE(value == std::string("Hello World!!"));
}
