#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <stack>
#include "scene.hpp"


namespace tst {
    typedef std::unique_ptr<Scene> ScenePtr;
    std::stack<ScenePtr> Scenes;

    void LoadScene(ScenePtr, bool=true);
    void UnLoadScene();
    void UpdateScene(float);
    void RenderScene(sf::RenderTarget&);
    void PauseScene();
    void ResumeScene();
    void DestroyAll();
}