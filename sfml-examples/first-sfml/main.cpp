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
                //First Variant
//                CGPoint pt;
////                pt.x = sf::Mouse::getPosition().x;
////                pt.y = sf::Mouse::getPosition().y;
//                pt.x = 300;
//                pt.y = 300;
//
//                CGPostMouseEvent( pt, 1, 1, 1 );
//                CGPostMouseEvent( pt, 1, 1, 0 );
//                sleep(1);


                //int x = sf::Mouse::getPosition().x;
                //int y = sf::Mouse::getPosition().y;
                //CGEventRef not_real = CGEventCreate(NULL);
                //CGPoint cursor = CGEventGetLocation(not_real);
                //CFRelease(event);
                //int x = cursor.x;
                //int y = cursor.y;
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
                sleep(1);
                // Release the events
                CFRelease(click1_up);
                CFRelease(click1_down);
                std::cout << "X = " << 250 << " Y = " << 250 << std::endl;
                //state = false;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
                state = true;
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)) {
                state = false;
            }
        }
}

extern "C" bool click() {
    //__CGEvent *event;
    //CGEventSetIntegerValueField(event, kCGMouseEventClickState, 1);
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
