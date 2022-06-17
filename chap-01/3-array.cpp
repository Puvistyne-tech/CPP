#include <iostream>
#include <ostream>
#include <vector>

int main()
{
    // int array[] = { 0, 1, 2, 3 };


    // for (int i = 0; i < 4; ++i)
    // {
    //     std::cout << array[i] << std::endl;
    // }

    // for (int value : array)
    // {
    //     std::cout << value << std::endl;
    // }

    std::vector<int> big;
    // // int big[50] = {};

    for (int i = 0; i < 50; i++)
    {
        big.emplace_back(i+1);
    }

    // std::cout << big << std::endl;

     for (int value : big)
     {
         std::cout << value << " ";
     }
     std::cout << std::endl;
    return 0;
}
