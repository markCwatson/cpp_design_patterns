#pragma once

#include <iostream>
#include <string>
#include <vector>

struct Person
{
    int id;
    std::string name;

    Person(const std::string& name, int id) : id{id}, name{name} {}
};

class PersonFactory
{
    std::vector<Person> people;

public:
    Person create_person(const std::string& name)
    {
        Person person{name, (int)people.size()};
        people.emplace_back(person);
        
        return person;
    }

    friend std::ostream& operator<<(std::ostream& os, const PersonFactory pf)
    {
        for (auto p : pf.people)
        {
            os << p.name << " has been created (id " << p.id << ")\n";
        }

        return os;
    }
};