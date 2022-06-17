// Implement Rectangle functions here.
#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

// Rectangle::Rectangle(float length)
//     : _length(length)
//     , _width(length)
// {}
Rectangle::Rectangle(float size)
    : Rectangle(size, size)
{}

Rectangle::Rectangle()
    : Rectangle(_default_size)
{
    std::cout << this->_length << "\t :: " << this->_width << std::endl;
}

Rectangle::Rectangle(Rectangle& other)
: Rectangle(other._length, other._width)   
{}

void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}

float Rectangle::_default_size = 0.5f;

void Rectangle::set_default_size(float size){
    _default_size=size; 
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& rect)
{
    return stream << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }";
}