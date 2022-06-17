#include <iostream>
#include <ostream>
#include <string>

class Person
{
public:
    Person(const std::string& name, const std::string& surname)
        : _name { name }
        , _surname { surname }
    {}

    Person(const Person& copy)
        : _name(copy._name)
        , _surname(copy._surname)
    {
        std::cout << "Copied Construction" << std::endl;
    }

    Person& operator=(const Person& other)
    {
        if (this != &other)
        {
            _name    = other._name;
            _surname = other._surname;
            _age     = other._age;
        }

        return *this;
    }

    //const pour les getters
    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    void wait(unsigned int years) { _age += years; }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

std::ostream& operator<<(std::ostream& stream, const Person& person)
{
    return stream << "Person named '" << person.get_full_name() << "' is " << person.get_age()
                  << " years old." << std::endl;
}

int main()
{
    Person batman { "Bruce", "Wayne" };
    batman.wait(23);

    // std::cout << "Person named '" << batman.get_full_name() << "' is " << batman.get_age() << " years old."
    //           << std::endl;
    std::cout << batman;

    Person copy = batman;
    // std::cout << "Person named '" << copy.get_full_name() << "' is " << copy.get_age() << " years old."
    //           << std::endl;

    std::cout << copy;

    Person assigned_clone { "Batman", "2" };
    std::cout << assigned_clone;

    assigned_clone = batman;
    std::cout << assigned_clone;

    return 0;
}
