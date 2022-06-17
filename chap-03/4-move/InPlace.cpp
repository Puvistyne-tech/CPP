#include <iostream>

class Test
{
    public:
    Test(std::string v)
        : value { v }
    {
        std::cout << "Constructor was called with " << v << "." << std::endl;
    }

    Test(const Test& other)
        : value { other.value }
    {
        std::cout << "Copy constructor was called." << std::endl;
    }

    std::string value ;
};

Test create_test(std::string value)
{
    Test result { value };
    return result;
}

int main()
{
    // Test test = create_test("3");
    // Test t=test;
    Test test = Test { Test { Test { "3" } } };
    std::cout << test.value << std::endl;

    return 0;
}