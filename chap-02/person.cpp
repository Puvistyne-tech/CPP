#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
    Person() {}

    Person(const string& name, const string& surname)
        : _name(name)
        , _surname { surname }
    {
        cout << "Creation of " << _name << endl;
    }

    // void set_name(const string& name) { this->_name = name; }

    void wait(unsigned short years) { _age += years; }

    const string& get_name() const { return _name; }

    string get_full_name() const { return _name + " " + _surname; }

    unsigned int get_age() const { return _age; }

private:
    string         _name;
    string         _surname;
    unsigned short _age { 0u };
};