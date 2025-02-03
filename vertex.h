#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include <fstream>

struct vertex{
    float x,y,z,r,g,b,u,v;

    //! Overload ostream operator which writes vertex data on a open textfile stream
    friend std::ostream& operator<<(std::ostream&, const vertex& v);

    //! Overload ostream operator which read all vertex data on a open textfile stream
    friend std::istream& operator>>(std::istream&, vertex& v);
};

#endif // VERTEX_H
