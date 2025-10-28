#include "physics_system.h"
#include <QtMath>
physics_system::physics_system() {}

void physics_system::simulatePhysics(float barrycoord, VisualObject* obj)
{
    y0 = obj->getPosition().y();

    //Y-axis
    float v = v0 + g*deltaTime;
    float y = y0 + v*deltaTime;

    v0 = v;
    y0 = y;

    y *= direction;
    QVector3D updatedPos = obj->getPosition();
    if(y > barrycoord)
        updatedPos.setY(y); //Unngår å lage kollisjons deteksjon

    // X og Z - Akse
    float x,z;
    x = z = g * qCos(qDegreesToRadians(90 - obj->getPosition().length()));

    updatedPos.setX(x);
    updatedPos.setZ(z);

    obj->setPosition(updatedPos);
}
