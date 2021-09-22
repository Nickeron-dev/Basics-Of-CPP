#include <iostream>
#include <vector>

struct Vertex {
	float x, y, z; // in structs default modifier is public
	
	Vertex (float x, float y, float z)
		: x(x), y(y), z(z) 	
	{
	}
	
	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z) {
		std::cout << "Copied" << std::endl;
	}
};

int main() {
	std::vector<Vertex> vertices;
	// try to type 3 in reserve(), that is why you should type correct capacity
	vertices.reserve(4); // setting capacity to 3(it is not like ArrayList), 
			//it will just reserve memory for 3 elements
	// in following case, it creates a new Vertex with Vertex in parameter.
	// the example is: Vertex(Vertex(1, 2, 3)). that is why in case of a copy, it types "Copied"
	vertices.push_back({1, 2, 3}); // the way to create an object with constructor
	vertices.push_back(Vertex(4, 5, 6));
	vertices.push_back({7, 8, 9});
	vertices.push_back({10, 11, 12});
	
	std::cout << "=============" << std::endl;
	// this is the best way, because using emplace_back() you input parameters of object 
	// that you create(Vertex(1, 2, 3) will be (1, 2, 3)), so it appends:
	// Vertex(1, 2, 3), but not Vertex(Vertex(1, 2, 3)) as in previous variant
	std::vector<Vertex> ver;
	ver.reserve(3);
	ver.emplace_back(1, 2, 3);
	ver.emplace_back(4, 5, 6);
	ver.emplace_back(7, 8, 9);

	std::cin.get(); // getting input from console
	return 0;
}
