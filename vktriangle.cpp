#include "vktriangle.h"
#include <qdebug.h>

VKTriangle::VKTriangle(){

}
VKTriangle::VKTriangle(const std::string &filename)
{
    /*
    //Y up, front = CCW
    // X, Y, Z  R, G, B   U, V
    vertex v1{-1.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};

    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);
*/

    std::ifstream inn(filename);


    if(!inn.is_open())
    {
        qDebug() << "failed to open file";
        return;
    }

    int n;
    vertex v;

    inn >> n;
    for(auto i=0; i<n; i++)
    {
        inn >> v;
        mVertices.push_back(v);
        qDebug() << v.x <<v.y << v.z;
    }
    inn.close();

}
