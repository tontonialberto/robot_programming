#include <iostream>
#include <etl/array.h>
#include <SFML/Window.hpp>

etl::array<int, 10> a;

sf::Window window(sf::VideoMode(800, 600), "My Window");

int main() {

    for(auto i: a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Hello world" << std::endl;

    while(window.isOpen()) {
        sf::Event event;

        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }       
    }
}