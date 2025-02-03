#ifndef VKTRIANGLESURFACE_H
#define VKTRIANGLESURFACE_H

#include <String>
#include "visualobject.h"


class VKTriangleSurface : public VisualObject
{
public:
    VKTriangleSurface();
    VKTriangleSurface(const std::string& filename);
};

#endif // VKTRIANGLESURFACE_H
