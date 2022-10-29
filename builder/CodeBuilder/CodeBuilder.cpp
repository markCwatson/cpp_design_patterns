#include <iostream>

#include <./CodeBuilder/CodeBuilder.hpp>


CodeBuilder::CodeBuilder(const std::string& class_name)
{
    the_class.class_name = class_name;
}

CodeBuilder& CodeBuilder::add_field(const std::string& name, const std::string& type)
{
    the_class.members.emplace_back(Member{ name, type });

    return *this;
}

std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj)
{
    return os << obj.the_class;
}