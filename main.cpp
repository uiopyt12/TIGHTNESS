#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
    RenderWindow window(sf::VideoMode(600, 800), "TIGHTNESS", sf::Style::None);


    while (window.isOpen())
    {
        window.display();

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }


    }

    return 0;
}