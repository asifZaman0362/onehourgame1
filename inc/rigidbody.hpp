#pragma once

namespace tst {
    struct collider;

    struct rigidbody {
        collider* coll;
        float xvel, yvel;
        float gravity_mul;
    };
    
}