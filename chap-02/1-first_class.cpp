#include "person.cpp"

#include <iostream>

int main()
{
    Person p { "Batman", "Wayne" };

    // p.set_name("Batman");
    p.wait(23);

    auto t = p.get_age();
    t      = t + 10;

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
