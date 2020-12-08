#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <SFML/Window.hpp>

class IWindow {
public:
  virtual bool IsOpen() const = 0;
  virtual bool Open() const = 0;
};

class ImplSfmlWindow : public IWindow {
private:
  sf::Window *_window;

public:
  bool IsOpen() const { return _window->isOpen(); }
};

#endif // !WHATEVER_HPP
