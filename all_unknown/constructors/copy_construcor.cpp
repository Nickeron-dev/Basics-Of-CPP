#include <iostream>

struct Point
{
	int m_x;
	char *m_s;
	Point(int x, char *s)
	{
		m_x = x;
		m_s = s;
	}

	Point (const Point &p)
	{
		p.m_x = m_x;
		p.m_s = m_s;
	}
};

int main()
{
	return 0;
}

