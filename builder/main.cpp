#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Member {
    string type, var_name;
    
    Member(const string& var_name, const string& type) : var_name{var_name}, type{type} {}
    
    friend ostream& operator<<(ostream& os, const Member& obj)
    {
        return os << obj.type << ' ' << obj.var_name << ";";
    }
};

struct Class
{
    string class_name;
    vector<Member> members;

    friend ostream& operator<<(ostream& os, const Class& obj)
    {
        os << "class " << obj.class_name << "\n{\n";

        for (auto&& field : obj.members)
        {
            os << "  " << field << "\n";
        }

        return os << "};\n";
    }
};

class CodeBuilder
{
    Class the_class;

public:
    CodeBuilder(const string& class_name)
    {
        the_class.class_name = class_name;
    }

    CodeBuilder& add_field(const string& name, const string& type)
    {
        the_class.members.emplace_back(Member{ name, type });

        return *this;
    }

    friend ostream& operator<<(ostream& os, const CodeBuilder& obj)
    {
        return os << obj.the_class;
    }
};

int main(int argc, char **argv)
{
    auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");
    cout << cb;
}