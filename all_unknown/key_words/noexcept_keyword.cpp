#include <iostream>

// Destructors are already noexcept

bool foo() noexcept
{
	return true;
}

bool poo() noexcept
{
	throw std::exception{}; // there will be only a warning
        return true;
}

bool moo()
{
        return true;
}

bool doo() noexcept(true == true) // () there can be only constexpr
{
        return true;
}

int main()
{
	// but in following code noexcept can take non-constexpr as params
	std::cout << std::boolalpha << noexcept(foo()) << std::endl;
	std::cout << std::boolalpha << noexcept(poo()) << std::endl;
	std::cout << std::boolalpha << noexcept(moo()) << std::endl;
}

