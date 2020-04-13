#include "Rectangle.h"

// Instantiate all the static variables defined in the Rectangle class.
const float Rectangle::WIDTH = 0;
const float Rectangle::HEIGHT = 0;

// Passes WIDTH and HEIGHT to the constructor of sf::RectangleShape (See inheritance in Chapter 15)
Rectangle::Rectangle(sf::Vector2f pos) : sf::RectangleShape({ WIDTH, HEIGHT }) {

	// Complete this definition
}
