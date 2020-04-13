#include <SFML/Graphics.hpp>
#include <array>
#include <iostream>
#include <cassert>
#include "Rectangle.h"

// Global options for this program
const unsigned int GRID_HEIGHT   = 1;
const unsigned int GRID_WIDTH    = 1;
const float        GRID_PADDING  = 0.05f;
const unsigned int WINDOW_WIDTH  = 0;
const unsigned int WINDOW_HEIGHT = 0;

const std::string TITLE = "";

// RectangleGrid is a two-dimensional std::array with GRID_HEIGHT rows and GRID_WIDTH columns
typedef std::array< std::array<Rectangle*, GRID_WIDTH>, GRID_HEIGHT> RectangleGrid;

// Function Prototpes (Do not modify these)
void createGrid(RectangleGrid&, float);
void drawGrid(sf::RenderWindow&, const RectangleGrid& r);
void clearGrid(RectangleGrid&);
sf::Color parseKeyboardInput(const sf::Keyboard::Key&);
Rectangle* parseMouseInput(const sf::Vector2i&, const RectangleGrid&);

// Function main (Do not modify this)
int main()
{

    assert(GRID_HEIGHT > 0);
    assert(GRID_WIDTH > 0);
    assert(GRID_PADDING > 0.0f);

    // Generates (does not display) a new interactible window with the title "SFML works!", width = 200, and height = 200
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), TITLE);
    
    RectangleGrid rectangles;
    createGrid(rectangles, GRID_PADDING); // Initialize the rectangles
    
    sf::Color paintColor = sf::Color::Black;

    // Infinite loop which runs as long as the program is active
    while (window.isOpen()) {

        // Check for user-input
        sf::Event event;
        while (window.pollEvent(event)) {

            // If the user closed the window
            if (event.type == sf::Event::Closed) window.close();

            // If the user types a key, send the value of the key
            if (event.type == sf::Event::KeyPressed)
                paintColor = parseKeyboardInput(event.key.code);

            // If the left-mouse button is clicked, get the rectangle corresponding
            // to the position of the mouse
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                Rectangle* clickedRectangle = parseMouseInput(sf::Mouse::getPosition(window), rectangles);
                
                // If the clickedRectangle exists, set its fill color to the paintColor
                if(clickedRectangle != nullptr)
                    clickedRectangle->setFillColor(paintColor);
            }

        }

        // Clear the screen
        window.clear(sf::Color::Black);

        drawGrid(window, rectangles);

        // Display the screen
        window.display();
    }

    // Clear the dynamically allocated memory
    clearGrid(rectangles);

    return 0;
}

/*  ================================================================================
        Function createGrid
    ================================================================================
        Instantiates each element of RectangleGrid with the specified width, height, 
        and color. The position of each rectangle should be set such that each rectangle 
        has the same width and height with a distance of rectanglePadding in between 
        each rectangle.
*/
void createGrid(RectangleGrid& r, float rectanglePadding) {

    // Complete this function
    
}


/*  ================================================================================
        Function drawGrid
    ================================================================================
        This function draws each rectangle found in the constant reference of 
        RectangleGrid onto the sf::RenderWindow reference, window.
*/
void drawGrid(sf::RenderWindow& window, const RectangleGrid& r) {

    // Complete this function

    return;
}

/*  ================================================================================
        Function clearGrid
    ================================================================================
        Erases the dynamically allocated memory in the RectangleGrid r
*/
void clearGrid(RectangleGrid& r) {

    // Complete this function. After you delete the values, set each pointer to nullptr

    return;
}

/*  ================================================================================
        Function parseKeyBoardInput
    ================================================================================
        // Returns a color based on the keyvalue of k. See 
        https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Keyboard.php#acb4cacd7cc5802dec45724cf3314a142 
        for a list of key values
*/
sf::Color parseKeyboardInput(const sf::Keyboard::Key& k) {

    // Complete this function

    return sf::Color::White;
}

/*  ================================================================================
        Function parseMouseInput
    ================================================================================
        Returns a pointer to the rectangle corresponding to the mouse's relative position or nullptr
        if no rectangle is found at the mouse's position.
*/
Rectangle* parseMouseInput(const sf::Vector2i& localPosition, const RectangleGrid& r){

    // Complete this function
    return nullptr;
}
