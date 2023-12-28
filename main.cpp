#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#define WIDTH 600
#define HEIGHT 800




int main()
{
    RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "TIGHTNESS");


    while (window.isOpen())
    {
        window.display();
        Event e;

        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();

            if (e.type == sf::Event::MouseEntered)
                cout << "the mouse cursor has entered the window" << std::endl;

            if (e.type == sf::Event::MouseLeft)
                cout << "the mouse cursor has left the window" << std::endl;


            if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
            {
                cout << "hi" << endl;
            }
            
        }//window.pollEvent


    } //window.isOpen



    return 0;
}