#include <iostream>

namespace s = std;
using String = std::string;

struct Entity {
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown"){}
	Entity(const String& name) : m_Name(name) {}

	const String& getName() const {
		return m_Name;
	}
};

int main() {
	Entity entity;

	s::cout << entity.getName() << std::endl;
}
