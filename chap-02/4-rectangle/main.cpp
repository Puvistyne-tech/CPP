#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    // std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;
    std::cout<<rect<<std::endl;

    rect.scale(3);
    // std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;
    std::cout<<rect<<std::endl;

    Rectangle square(2.5f);
    // std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;
    std::cout<<square<<std::endl;

    Rectangle::set_default_size ( 2.1f);
    Rectangle s1; // -> size is 2.f
    Rectangle s2; // -> size is 2.f

    Rectangle::set_default_size (7.f);
    Rectangle s3; // -> size is 7.f
    Rectangle s4; // -> size is 7.f
    Rectangle s5; // -> size is 7.f

    return 0;
}
