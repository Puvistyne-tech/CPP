#include "Polygon.hpp"

#include <cstddef>

Polygon::Polygon()
{}

void Polygon::add_vertex(int x, int y)
{
    // _vertices.emplace_back(Vertex { x, y });
    _vertices.emplace_back(x, y);
}

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
{
    for (const auto& v : polygon._vertices)
    {
        stream << "(" << v.first << "," << v.second << ")";
    }
    return stream;
}

const Vertex& Polygon::get_vertex(size_t i) const
{
    return _vertices[i];
}
