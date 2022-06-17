#include <iostream>
#include <memory>
#include "Cat.h"


using namespace std;
int main()
{

    auto cat1=make_unique<Cat>("Bouillot");
    auto cat2=make_unique<Cat>(*cat1);
    auto *cat3=cat2;

    cout<<*cat1<<endl;

    return 0;
}