#include <iostream>
#include <PersonFactory.hpp>


int main(int argc, char **argv)
{
    PersonFactory pf;

    auto billy = pf.create_person("Billy");
    auto jane = pf.create_person("Jane");
    
    std::cout << pf;

    return 0;
}