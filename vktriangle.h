#ifndef VKTRIANGLE_H
#define VKTRIANGLE_H

#include <vector>
#include "vertex.h"

class VKTriangle
{
public:
    std::vector<vertex> mVertices;
    VKTriangle();
    VKTriangle(const std::string &filename);
    std::vector<vertex> getVertices() {return mVertices;}
};

#endif // VKTRIANGLE_H
