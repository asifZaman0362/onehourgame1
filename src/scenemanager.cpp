#include "scenemanager.hpp"
#include <SFML/Graphics/RenderTarget.hpp>

namespace tst {
    
    void LoadScene(ScenePtr scene, bool removeTop) {
        if (removeTop) {
            Scenes.top()->OnDestroy();
            Scenes.pop();
        }
        Scenes.push(std::move(scene));
    }
    void UnLoadScene() {
        Scenes.top()->OnDestroy();
        Scenes.pop();
    }
    void UpdateScene(float dt) {
        Scenes.top()->OnUpdate(dt);
    }
    void RenderScene(sf::RenderTarget& target) {
        Scenes.top()->OnRender(target);
    }
    void PauseScene() {
        Scenes.top()->OnPause();
    }
    void ResumeScene() {
        Scenes.top()->OnResume();
    }
    void DestroyAll() {
        while (!Scenes.empty()) {
            Scenes.top()->OnDestroy();
            Scenes.pop();
        }
    }

}