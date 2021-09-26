#include <SFML/Graphics.hpp>
#include <ApplicationServices/ApplicationServices.h>
#include <thread>

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

    bool state = false;
    while (true)
    {
        if (state) {
            CGPoint pt;
            pt.x = 300;
            pt.y = 300;

            CGPostMouseEvent( pt, 0, 1, 1 );
            //sleep(1);
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            CGPostMouseEvent( pt, 0, 1, 0 );
            std::this_thread::sleep_for(std::chrono::milliseconds(10));

            // Following variant is also possible but it enforces me to change the position of my mouse
//                CGEventRef click1_down = CGEventCreateMouseEvent(
//                        NULL, kCGEventLeftMouseDown,
//                        CGPointMake(x, y),
//                        kCGMouseButtonLeft
//                );
            // Left button up at 250x250
//                CGEventRef click1_up = CGEventCreateMouseEvent(
//                        NULL, kCGEventLeftMouseUp,
//                        CGPointMake(x, y),
//                        kCGMouseButtonLeft
//                );
            //CGEventPost(kCGHIDEventTap, click1_down);
            //CGEventPost(kCGHIDEventTap, click1_up);
            //sleep(1);
            // Release the events
            //CFRelease(click1_up);
            //CFRelease(click1_down);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
            state = true;
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)) {
            state = false;
        }
    }
}
