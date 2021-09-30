#include <iostream>

// it won't compile!!!

void print_entity(Entity* entity); // this won't work, it is only for an example

class Entity
{
public:
	int x, y;

	Entity(int x, int y) {
		Entity* entity = this;
		
		entity->x = x; // alternative way is: (*this).x = x
		this->y = y; // alternative way is (*this).y = y

		print_entity(*this);
	}

	int get_x() const
	{
		const Entity* entity = this;

		return x;
	}
};

void print_entity(Entity* entity) {
	// do smth
}

int main() 
{
	return 0;
}

