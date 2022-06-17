#include <iostream>
#include <memory>

using namespace std;


int pass(unique_ptr<int> p){
    int local=*p;
    return local;
}

void display(const std::string& variable_name, const std::unique_ptr<int>& variable);

int main()
{

    unique_ptr<int> a=make_unique<int>(100);
    unique_ptr<int> b=make_unique<int>(200);
    cout<<"before :: "<<*a<<" "<<*b<<endl;

    b=make_unique<int>(pass(move(a)));
    cout<<"after :: "<<*a<<" "<<*b<<endl;

    return 0;
}

void display(const std::string& variable_name, const std::unique_ptr<int>& variable)
{
    if (variable)
    {
        std::cout << variable_name << " contains " << *variable << std::endl;
    }
    else
    {
        std::cout << variable_name << " is empty" << std::endl;
    }
}
