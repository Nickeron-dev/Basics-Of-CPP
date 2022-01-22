#include <iostream>

struct Point
{
        int x;
        int y;
        // When constructor has only 1 parameter, it is a conversion constructor(before c++11)
        Point (int);
        // But since c++11, all constructors are conversing constructors
        Point (int, int);
        Point get_point()
        {
                return {x, y}; // since c++11
        }
};

Point::Point (int i) // conversing constructor even before c++11
{
        x = i;
        y = i;
}

Point::Point (int i, int j) // conversing constructor since c++11
{
        x = i;
        y = j;
}

Point point_mover(Point point)
{
        point.x += 1;
        point.y += 5;
        return {point.x, point.y};
}

int main()
{
        Point p = 1; // the same as Point p(1);
        std::cout << "x: " << p.x << " y: " << p.y << "\n";
        Point p1 = {1};
        std::cout << "x1: " << p1.x << " y1: " << p1.y << "\n";
        p1 = {1, 2};
        std::cout << "x1 after: " << p1.x << " y1 after: " << p1.y << "\n";
        Point p3 = p1.get_point();
        std::cout << "Get point x: " << p3.x << " y: " << p3.y << "\n";
        Point p4 = point_mover({40, 5});
        std::cout << "x4: " << p4.x << " y4: " << p4.y << "\n";
        return 0;
}
