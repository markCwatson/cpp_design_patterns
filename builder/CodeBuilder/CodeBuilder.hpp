#pragma once

#include <string>
#include <vector>


class CodeBuilder
{
    struct Member
    {
        std::string type, var_name;
        
        Member(const std::string& var_name, const std::string& type) : var_name{var_name}, type{type} {}
        
        friend std::ostream& operator<<(std::ostream& os, const Member& obj)
        {
            return os << obj.type << ' ' << obj.var_name << ";";
        }
    };

    struct Class
    {
        std::string class_name;
        std::vector<Member> members;

        friend std::ostream& operator<<(std::ostream& os, const Class& obj)
        {
            os << "class " << obj.class_name << "\n{\n";

            for (auto&& field : obj.members)
            {
                os << "  " << field << "\n";
            }

            return os << "};\n";
        }
    };

    Class the_class;

public:
    CodeBuilder(const std::string& class_name);

    CodeBuilder& add_field(const std::string& name, const std::string& type);

    friend std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj);
};