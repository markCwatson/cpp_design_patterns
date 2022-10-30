#include <iostream>
#include <JsonBuilder.hpp>


JsonBuilder& JsonBuilder::add_field(const std::string& key, const std::string& value)
{
    json.members.emplace_back(Member{key, value});

    return *this;
}

std::ostream& operator<<(std::ostream& os, const JsonBuilder& obj)
{
    os << "{\n";

    for (auto&& field : obj.json.members)
    {
        os << "  " << field << "\n";
    }

    return os << "}\n";
}