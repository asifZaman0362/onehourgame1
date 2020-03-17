#include "physics.hpp"
#include "rigidbody.hpp"
#include "collider.hpp"
#include "rectcollider.hpp"
#include "circlecollider.hpp"

namespace tst {
    void Update(float dt) {
        for (auto& obj : rigidbodies) {
            obj.yvel += GRAVITY * obj.gravity_mul;
            for (auto& coll : colliders) {
                bool colliding = false;
                if (coll->type == collider::colliderType::BOX) {
                    if (obj.coll->type == collider::colliderType::BOX) {
                        colliding = IsColliding(dynamic_cast<rectcollider*>(coll), dynamic_cast<rectcollider*>(obj.coll));
                        // I bet this wont compile/link
                    }
                }
                else if (coll->type == collider::colliderType::BOX) {
                    if (obj.coll->type == collider::colliderType::CIRCLE) {
                        colliding = IsColliding(dynamic_cast<circlecollider*>(obj.coll), dynamic_cast<rectcollider*>(coll));
                        // I bet this wont compile/link
                    }
                }
                else if (coll->type == collider::colliderType::CIRCLE) {
                    if (obj.coll->type == collider::colliderType::CIRCLE) {
                        colliding = IsColliding(dynamic_cast<circlecollider*>(obj.coll), dynamic_cast<circlecollider*>(coll));
                        // I bet this wont compile/link
                    }
                }
                else if (coll->type == collider::colliderType::CIRCLE) {
                    if (obj.coll->type == collider::colliderType::BOX) {
                        colliding = IsColliding(dynamic_cast<circlecollider*>(coll), dynamic_cast<rectcollider*>(obj.coll));
                        // I bet this wont compile/link
                    }
                }
                if (colliding) {
                    // die
                }
            }
        }
    }
}