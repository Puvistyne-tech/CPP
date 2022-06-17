#pragma once

#include <cstddef>
#include <ostream>
#include <utility>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
private:
    std::vector<Vertex> _vertices;

public:
    Polygon();
    void                       add_vertex(int x, int y);
    const Vertex& get_vertex(size_t i) const;
    friend std::ostream&       operator<<(std::ostream& stream, const Polygon& polygon);
};
