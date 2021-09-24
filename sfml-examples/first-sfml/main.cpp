#include <SFML/Graphics.hpp>
#include <iostream>
#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>
#include <QTest>

int main()
{
//    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
//    sf::CircleShape shape;
//    shape.setRadius(40.f);
//    shape.setPosition(100.f, 100.f);
//    shape.setFillColor(sf::Color::Cyan);
//
//    while (window.isOpen())
//    {
//        sf::Event event{};
//
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
    sf::Event event;
// while there are pending events...
    bool state = false;
        while (true)
        {
            if (state) {
                QTest::mouseClick(d, Qt::LeftButton, Qt::NoModifier, QPoint(x,y));
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
                state = true;
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)) {
                state = false;
            }
        }
}
