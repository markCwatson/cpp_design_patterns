#include <iostream>
#include <./CodeBuilder/CodeBuilder.hpp>


int main(int argc, char **argv)
{
    auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");
    std::cout << cb;
}