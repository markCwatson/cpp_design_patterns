#include <helpers.hpp>
#include <string>


Member::Member(const std::string& key, const std::string& value) : key{key}, value{value} {}

std::ostream& Member::operator<<(std::ostream& os, const Member& obj)
{
    return os << "\"" << obj.key << "\": \"" << obj.value << "\";";
}