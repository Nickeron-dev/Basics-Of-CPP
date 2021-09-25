#include <SFML/Graphics.hpp>
#include <iostream>
#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>
//#include <QTest>

extern "C" bool click();

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
    __CGEvent *event;
// while there are pending events...
    bool state = false;
        while (true)
        {
            if (state) {
                CGEventSetIntegerValueField(event, kCGMouseEventClickState, 1);
                std::cout << "Clicking!\n";
                click();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
                state = true;
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)) {
                state = false;
            }
        }
}

extern "C" bool click() {
    /*
    CGEventRef click1_down = CGEventCreateMouseEvent(
            NULL, kCGEventLeftMouseDown,
            CGPointMake(250, 250),
            kCGMouseButtonLeft
    );
    // Left button up at 250x250
    CGEventRef click1_up = CGEventCreateMouseEvent(
            NULL, kCGEventLeftMouseUp,
            CGPointMake(250, 250),
            kCGMouseButtonLeft
    );
    CGEventPost(kCGHIDEventTap, click1_down);
    CGEventPost(kCGHIDEventTap, click1_up);
    sleep(1000);
    // Release the events
    CFRelease(click1_up);
    CFRelease(click1_down);
     */
    return true;
}
