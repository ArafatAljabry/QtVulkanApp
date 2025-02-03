#include "vertex.h"

std::ostream& operator<<(std::ostream& os, const vertex& v){
    os << std::fixed;
    os << "(" << v.x << "," << v.y << "," << v.z << ")";
    os << "(" << v.r << "," << v.g << "," << v.b << ")";
    os << "(" << v.u << "," << v.v << ")";

    return os;
}

std::istream& operator>>(std::istream& is, vertex& v)
{
    //Trenger fire temporære variabler som kun skal lese inn paranteser og komma
    char dum, dum2, dum3, dum4;
    is >> dum >> v.x >> dum2 >> v.y >> dum3 >> v.z >> dum4;
    is >> dum >> v.r >> dum2 >> v.g >> dum3 >> v.b >> dum4;
    is >> dum >> v.u >> dum2 >> v.v >> dum3;

    return is;
}
