#ifndef VKTRIANGLE_H
#define VKTRIANGLE_H

#include <vector>
#include "vertex.h"

class VKTriangle
{
public:
    std::vector<vertex> mVertices;
    VKTriangle();
    std::vector<vertex> getVertices() {return mVertices;}
};

#endif // VKTRIANGLE_H
