#include <string>
#include <cstdio>

// explicit keyword disables the functionality of implicit

class Entity
{
private:
	std::string m_name;
	int m_age;
	
public:
	// single argument constructor
	explicit Entity(const std::string &name) : m_name(name), m_age(-1) {}
	// try to remove explicit and recompile
	
	// single argument constructor
	explicit Entity(int age) : m_name("Unknown"), m_age(age) {}
	// try to remove explicit and recompile
};

void print_entity(const Entity &entity)
{
	// do smth
}

int main()
{
	print_entity(22);
	print_entity(Entity("Illia"));
	
	Entity a ("Illia");
	Entity b (22);
	// implicit conversions
	Entity c = std::string("Illia"); // as it is a const char[]
	Entity d = 22;
	
}

