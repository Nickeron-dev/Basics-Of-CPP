#include <iostream>
#include <vector>
#include <algorithm>

//using vect = std::vector;
namespace v = std;

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
	
	std::cout << "=============" << std::endl;

	std::vector<int> ints; // primitives can be added
	ints.push_back(5);
	ints.push_back(10);
	ints.emplace_back(20);
	ints.emplace_back(22);
	
	std::cout << "Just begin()\n";
	for (auto i = ints.begin(); i != ints.end(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	
	std::cout << "cbegin()" << std::endl;
	for (auto i = ints.cbegin(); i != ints.cend(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	std::cout << "rbegin()" << std::endl;
	for (auto i = ints.rbegin(); i != ints.rend(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	std::cout << "crbegin()" << std::endl;
	for (auto i = ints.crbegin(); i != ints.crend(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	
	std::cout << "==================\n";

        std::vector<int> array_list_sort;
        array_list_sort.push_back(5);
        array_list_sort.emplace_back(4);
        array_list_sort.push_back(2);
        array_list_sort.emplace_back(10);
        std::sort(array_list_sort.begin(), array_list_sort.end());
        for (auto i = array_list_sort.begin(); i != array_list_sort.end(); i++) {
                std::cout << *i << " ";
        }
	
	std::cout << "=============" << std::endl;

	std::vector<float> floats;
	floats.reserve(10);
//	floats.resize(5);
	std::cout << "Capacity: " << floats.capacity() << std::endl;
	std::cout << "max_size: " << floats.max_size() << std::endl;
	std::cout << floats.empty() << std::endl;
	std::cout << floats.size() << std::endl;

	for (int i = 0; i < 8; i++) {
		floats.emplace_back(i);
	}
	std::cout << std::endl;

	std::cout << "Capacity: " << floats.capacity() << std::endl;
        std::cout << "max_size: " << floats.max_size() << std::endl;
        std::cout << floats.empty() << std::endl;
        std::cout << floats.size() << std::endl;
//	floats.resize(5);
	for (auto i = floats.begin(); i != floats.end(); i++) {
		std::cout << *i << " ";
	}

	std::cout << std::endl;
	floats.resize(5);
        for (auto i = floats.cbegin(); i != floats.cend(); i++) {
                std::cout << *i << " ";
        }
	std::cout << std::endl;
	
	for (int i = 0; i < 2; i++) {
		floats.pop_back();
	}

	for (auto i = floats.cbegin(); i != floats.cend(); i++) {
                std::cout << *i << " ";
        }
        std::cout << std::endl;
	
	floats.clear();
	for (auto i = floats.cbegin(); i != floats.cend(); i++) {
                std::cout << *i << " ";
        }
	floats.push_back(5);
        std::cout << std::endl;
	std::cout << "Hello";	
	int value = 10;
	floats.resize(5);
	std::cout << "Capacity: " << floats.capacity() << std::endl;
        std::cout << "max_size: " << floats.max_size() << std::endl;
        std::cout << floats.empty() << std::endl;
        std::cout << floats.size() << std::endl;

	for (auto i = floats.begin(); i != floats.end(); i++) {
		floats.insert(i, value++);
	}
	std::cout << "Hello";
	for (auto i = floats.cbegin(); i != floats.cend(); i++) {
                std::cout << *i << " ";
        }
	std::cout << "Hello";
        std::cout << std::endl;	
	try {
		std::cout << floats.at(0) << " ";
		std::cout << floats.at(1) << " ";
		std::cout << floats.at(2) << " ";
		std::cout << floats.at(3) << " ";
	} catch(std::out_of_range) {
		std::cout << "error\n";
	}
	std::cout << "\nBack(): " << floats.back() << std::endl;
	std::cout << "Front(): " << floats.front() << std::endl;
	std::cout << "Data(): " << floats.data() << std::endl; 

//	std::cin.get(); // getting input from console
	return 0;
}
