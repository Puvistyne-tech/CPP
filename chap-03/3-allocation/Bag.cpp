#include <iostream>
#include <string>
#include <vector>
#include <memory>

struct Content
{
    Content(const std::string& name)
        : name { name }
    {}

    std::string name;
};

class Bag
{
public:
    // Content& add(const std::string& name)
    // {
    //     return _contents.emplace_back(name);
    // }
    Content& add(const std::string& name) { 
        return *_contents.emplace_back(std::make_unique<Content>(name));
         }


private:
    // std::vector<Content> _contents;
    std::vector<std::unique_ptr<Content>> _contents;
};

int main()
{
    Bag bag;

    Content& my_thing = bag.add("my_thing");

    for (size_t i = 0; i < 4; ++i)
    {
        bag.add("another_thing");
    }

    std::cout << my_thing.name << std::endl; // my_thing ?
    my_thing.name = "still_my_thing";
    std::cout << my_thing.name << std::endl; // still_my_thing ?

    return 0;
}