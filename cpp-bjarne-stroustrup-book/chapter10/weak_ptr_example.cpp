#include <iostream>
#include <memory>

int main()
{
	auto shared_p = std::make_shared<int>(100);
	std::weak_ptr<int> weak_p(shared_p);

	std::cout << "weak.use.count(): " << weak_p.use_count() << std::endl;
	std::cout << "s_ptr.use_count(): " << shared_p.use_count() << std::endl;
	std::cout << "weak_p.expired(): " << weak_p.expired() << std::endl;

	if ( std::shared_ptr<int> shared_p1 = weak_p.lock() )
	{
		std::cout << "*shared_p: " << *shared_p << std::endl;
		std::cout << "use_count: " << shared_p1.use_count() << std::endl;
	}
	else
	{
		std::cout << "No resource!\n";
	}

	weak_p.reset();
	if ( std::shared_ptr<int> share_p1 = weak_p.lock() )
	{
		std::cout << "*shared_p: " << *shared_p << std::endl;
		std::cout << ".use_count(): " << shared_p.use_count() << std::endl;
	}
	else
	{
		std::cout << "Don't get the resource!" << std::endl;
	}
	return 0;
}

