#include <iostream>
#include <JsonBuilder.hpp>


int main(int argc, char **argv)
{
    auto cb = JsonBuilder()
        .add_field("name", "Billy")
        .add_field("age", "22")
        .add_field("email", "billy@email.com");
    
    std::cout << cb;
}