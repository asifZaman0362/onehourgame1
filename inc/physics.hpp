#pragma once
#include <list>

#define GRAVITY 9.8f

namespace tst {
    struct circlecollider;
    struct rectcollider;
    struct collider;
    struct rigidbody;
    std::list<collider*> colliders;
    std::list<rigidbody> rigidbodies;

    void Update(float);
    bool IsColliding(circlecollider*, circlecollider*);
    bool IsColliding(circlecollider*, rectcollider*);
    bool IsColliding(rectcollider*, rectcollider*);
}