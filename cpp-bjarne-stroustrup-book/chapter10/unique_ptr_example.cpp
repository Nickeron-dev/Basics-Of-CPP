#include <iostream>
#include <memory>

class Foo
{
	int x;
public:
	explicit Foo(int x) : x { x } {}
	int get_x()
	{
		return x;
	}
	
	~Foo()
	{
		std::cout << "Foo destr\n";
	}
};

int main()
{
	// with raw pointers:
	Foo *f = new Foo(10);
	std::cout << f -> get_x() << std::endl; // -> calls function from ptr.
	std::cout << "the same but using (*obj).f(): " << (*f).get_x() << std::endl;
	delete f; // this part might be forgotten!!!
	
	std::cout << "===============\n";
	// with unique_ptr, this is much better, you don't need to delete manually
	std::unique_ptr<Foo> p(new Foo(10));
	std::cout << p -> get_x() << std::endl;

	std::cout << "===============\n";
	// Ways to create unique_ptrs:
	std::unique_ptr<Foo> p1 (new Foo(1)); // the basic one(not exception safe)
	std::unique_ptr<Foo> p2 = std::make_unique<Foo>(20); // exception safe
	// in case of any exception, it will handle that(should be used
	// whenever you can!!!
	// Also possible, but bad:
	Foo *foo = new Foo(2);
	std::unique_ptr<Foo> p3 (foo); // it is bad because:
	//std::unique_ptr<Foo> p4 (foo); // it will ABORT
					//(2 unique_ptrs are to 1 raw ptr)
	
	// std::make_unique is also in <memory>
	
	//p1 = p2; // Fail, you cannot copy ownership
	std::unique_ptr<Foo> p4 = std::move(p1); // Moving ownership is allowed.
	//std::cout << "P1: " << p1 -> get_x() << std::endl; // Seg fault
	// p1 is a nullptr;
	std::cout << "P1 == nullptr: " << std::boolalpha 
		<< (p1 == nullptr) << std::endl;
	std::cout << "P4: " << p4 -> get_x() << std::endl;
	
	std::cout << "========\n";
	Foo *obj_ptr = p2.get(); // gives pointer, it is pointing at.
	std::cout << "P2: " << p2 -> get_x() << std::endl;
	std::cout << "Obj_ptr: " << obj_ptr -> get_x() << std::endl;
	delete obj_ptr; // I clear the variable, but it is defined still

	std::cout << "========\n";
//	Foo *o_ptr = p2.release(); // won't work
	obj_ptr = p2.release(); // gives pointer, 
		//it is pointing at and releases unique_ptr making it nullptr.
//        std::cout << "P2: " << p2 -> get_x() << std::endl; // seg fault
        std::cout << "Obj_ptr: " << obj_ptr -> get_x() << std::endl;
	std::cout << "P2 == nullptr: " << (p2 == nullptr) << std::endl;
	std::cout << "==========All deletes by unique_ptrs:\n";
	return 0;
}

