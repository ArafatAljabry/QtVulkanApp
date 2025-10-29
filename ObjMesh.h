#ifndef OBJMESH_H
#define OBJMESH_H

#include "VisualObject.h"
#include <string>

class ObjMesh : public VisualObject
{
public:
    ObjMesh(const std::string& filename);
    float barysentricCoordFromTerrain(const QVector3D& position);
private:
	bool readObjFile(const std::string& filename);
};

#endif // OBJMESH_H
