#pragma once

#include <string>
#include <vector>


class JsonBuilder
{
    struct Member
    {
        std::string key, value;
        
        Member(const std::string& key, const std::string& value) : key{key}, value{value} {}
        
        friend std::ostream& operator<<(std::ostream& os, const Member& obj)
        {
            return os << "\"" << obj.key << "\": \"" << obj.value << "\";";
        }
    };

    struct Json
    {
        std::vector<Member> members;
    };

    Json json;

public:
    JsonBuilder() {}

    JsonBuilder& add_field(const std::string& name, const std::string& type);

    friend std::ostream& operator<<(std::ostream& os, const JsonBuilder& obj);
};