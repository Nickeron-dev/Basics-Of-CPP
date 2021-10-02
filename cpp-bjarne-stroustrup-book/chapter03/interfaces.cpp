#include <iostream>

// This is an interface, because it has only pure virtual methods
class interface_shape {
public:
        virtual double area() = 0;
//        virtual double perimeter() = 0;
};

// This is an abstract class, because it has
// defined methods(get_height, get_width) and a pure virtual function
class abstract_shape : interface_shape {
public:
	virtual double area() = 0; // this is pure vitual function
//	virtual double  perimeter() = 0; // pure virtual

	virtual int get_height() {
		return m_height;
	}

	virtual int get_width() {
		return m_width;
	}

protected:
	int m_height;
	int m_width;
};

class triangle : abstract_shape {
public: 
	triangle(int m_width, int m_height) {
		this->m_width =  m_width;
		this->m_height = m_height;
		std::cout << m_width << " " <<  m_height << std::endl;
	}
	double area() {
		return m_height * m_width * 0.5;
	}
//	double perimeter() {
//		return 
//	}
};

int main() {
//	interface_shape shape(); // can't instanciate an interface
	triangle triangle_instance(5, 3);
	std::cout << "Area" << triangle_instance.area() << std::endl;
	return 0;
}
