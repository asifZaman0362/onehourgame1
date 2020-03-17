#pragma once
#include "transform.hpp"

namespace tst {
    struct collider {
        virtual ~collider();
        transform t;
        enum colliderType {BOX, CIRCLE} type;
    };
}