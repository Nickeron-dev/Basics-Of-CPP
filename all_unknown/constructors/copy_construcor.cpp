#include <iostream>

// in this example copy constructor is not necessary

struct Point
{
	int m_x;
	int m_s;
	Point(int x, int s)
	{
		m_x = x;
		m_s = s;
	}

	Point (const Point &p)
	{
		std::cout << "Copy constructor\n";
		m_x = p.m_x;
		m_s = p.m_s;
	}
};

int main()
{
	Point p1(10, 15);
	Point p2 = p1; // Copy constructor is called
	Point p3 (p1); // Copy constructor is called
	std::cout << "P1 x: " << p1.m_x << " s: " << p1.m_s << '\n';
	std::cout << "P2 x: " << p2.m_x << " s: " << p2.m_s << '\n';
	std::cout << "P3 x: " << p3.m_x << " s: " << p3.m_s << '\n';
	return 0;
}
