#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <SFML/Graphics.hpp>

/*
    Class Rectangle
    This class serves as a wrapper for class sf::RectangleClass. The idea of wrappers is not talked about until Chapter 15. For now, simply
    treat Rectangle as a sf::RectangleShape, meaning you interact with it the same you would interact with sf::RectangleShape but you also
    have additional properties (which you will define in this class) which augment or extend the sf::RectangleShape class.
*/
class Rectangle : public sf::RectangleShape {

public:

    // Accepts a single sf::Vector2f as a parameter used to denote the position of the Rectangle
    Rectangle(sf::Vector2f pos);

    // Three static variables which are used for the width, height, and default color for *all* instantiated rectangles
    static const sf::Color DEFAULT_COLOR;
    static const float WIDTH;
    static const float HEIGHT;
};
#endif

