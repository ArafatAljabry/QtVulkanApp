#include "vktrianglesurface.h"
#include <fstream>
VKTriangleSurface::VKTriangleSurface() : VisualObject()  {

    vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);

}

VKTriangleSurface::VKTriangleSurface(const std::string& filename) : VisualObject()  {

    std::ifstream inn(filename);
    if (!inn.is_open())
        return;
    // read input from math part of compulsory
    int TotalVertices;
    vertex v;

    inn >> v; // Gets the first line, which is the total vertices in the file
    for(auto i = 0; i < TotalVertices; i++)
    {
        //Subsequential lines in the file gets added as vertexes.
        inn >> v;
        mVertices.push_back(v);
    }

    inn.close();
}
