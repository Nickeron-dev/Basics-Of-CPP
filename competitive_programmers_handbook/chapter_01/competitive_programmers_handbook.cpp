#include <iostream>
#include <string>

int main()
{
	// gcc compiler does not work on arm64
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
//	int a;
//	std::cin >> a;

	std::cout << "HE\n";
	std::string s;
	std::getline(std::cin, s);
	std::cout << s << std::endl;
	
	std::string x;
	// it will complete code after each input(separated by spaces or \n)
//	while (std::cin >> x)i
//	{
//		std::cout << "HI\n";
//	}

	// it should work, but it doesn't(it is sometimes not supported)
//	__int128_t large = 1000000000000000000000000000000;
//	std::cout << large << '\n';
	return 0;
}

