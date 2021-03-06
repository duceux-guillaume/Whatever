#include "whatever/whatever.hpp"
#include <SFML/Window.hpp>
#include <iostream>

int main(int argc, const char **argv) {
  std::cout << "Hello world" << std::endl;

  sf::Window window(sf::VideoMode(800, 600), "My window");

  // on fait tourner le programme jusqu'à ce que la fenêtre soit fermée
  while (window.isOpen()) {
    // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la
    // précédente itération
    sf::Event event;
    while (window.pollEvent(event)) {
      // évènement "fermeture demandée" : on ferme la fenêtre
      if (event.type == sf::Event::Closed)
        window.close();
    }
  }

  return 0;
}