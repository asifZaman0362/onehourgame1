#pragma once
#include "collider.hpp"
#include <SFML/Graphics/Rect.hpp>

namespace tst {
    struct rectcollider : public collider {
        sf::FloatRect rect;
    };
}