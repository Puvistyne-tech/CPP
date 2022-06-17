#pragma once

#include <ostream>
class Rectangle
{
public:
    Rectangle(float length, float width);
    Rectangle(float size);
    Rectangle();
    Rectangle(Rectangle& copy);

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);

private:
    float _length;
    float _width;
    static float _default_size;

public:
    static void set_default_size(float size);
};

std::ostream& operator<<(std::ostream& stream, const Rectangle& rect);

