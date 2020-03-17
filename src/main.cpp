#include <SFML/Graphics.hpp>

int main() {
    sf::CircleShape circle(100, 50);
    sf::RenderWindow window(sf::VideoMode(800, 400), "Window");
    while(window.isOpen()) {
        sf::Event e{};
        while (window.pollEvent(e))
        {
            if (e.type == sf::Event::Closed) window.close();
        }
        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}