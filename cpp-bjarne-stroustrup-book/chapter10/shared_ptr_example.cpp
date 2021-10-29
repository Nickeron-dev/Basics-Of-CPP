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
	std::shared_ptr<Foo> sp(new Foo(100));
	std::cout << sp -> get_x() << std::endl; // here -> because func of a ptr
	std::cout << sp.use_count() << std::endl;
	std::shared_ptr<Foo> sp1 = sp;
	std::cout << sp.use_count() << std::endl; // here we use '.', since to obj
	std::cout << sp1.use_count() << std::endl;
	// BUT
	std::shared_ptr<Foo> &sp2 = sp;
	std::cout << "After &(count won't change): " << sp.use_count() << std::endl;
	std::cout << sp2.use_count() << std::endl;
	// One more exception:
	std::shared_ptr<Foo> *sp3 = &sp;
        std::cout << "After *(count won't change): " << sp.use_count() << std::endl;
        std::cout << sp3 -> use_count() << std::endl;

	return 0;
}

