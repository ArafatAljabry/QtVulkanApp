#ifndef PHYSICS_SYSTEM_H
#define PHYSICS_SYSTEM_H

#include"VisualObject.h"
class physics_system
{
private:
    float direction{-1.0};

    float y0{0};
    float v0{0.0};
    float m{5.0};
    float g{9.81};
    float deltaTime{0.2};
public:


    physics_system();

    void sety0(float &newy){y0 = newy;}
    void simulatePhysics(float barrycoord, VisualObject* obj);
};

#endif // PHYSICS_SYSTEM_H
