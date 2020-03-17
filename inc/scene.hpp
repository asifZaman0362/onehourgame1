#pragma once
#include <list>

namespace sf {
    class RenderTarget;
    class Drawable;
}

namespace tst {
    class Scene {
    public:
        Scene();
        ~Scene();

        virtual void OnStart();
        void OnPause();
        void OnResume();
        void OnDestroy();
        void OnRender(sf::RenderTarget&);
        virtual void OnUpdate(float) = 0;
    private:
        std::list<sf::Drawable*> m_drawables;
        bool m_isRunning;
    };
}