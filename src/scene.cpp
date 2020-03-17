#include "scene.hpp"
#include <SFML/Graphics/RenderTarget.hpp>

namespace tst {
    Scene::Scene() {}
    Scene::~Scene() {}

    void Scene::OnStart() {
        m_isRunning = true;
    }

    void Scene::OnDestroy() {
        while (!m_drawables.empty())
        {
            delete m_drawables.back();
            m_drawables.pop_back();
        }
    }

    void Scene::OnPause() {
        m_isRunning = false;
    }

    void Scene::OnResume() {
        m_isRunning = true;
    }

    void Scene::OnRender(sf::RenderTarget& target) {
        for (auto& item : m_drawables) {
            target.draw(*item);
        }
    }
}