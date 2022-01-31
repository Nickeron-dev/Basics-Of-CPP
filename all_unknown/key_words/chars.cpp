#include <iostream>

int main()
{
	char ch1 { 'a' };
	char chh1 { u8'a' };
	wchar_t ch2 { L'a' };
	char16_t ch3 { u'a' };
	char32_t ch4 { U'a' };
	char8_t ch5 { 'a' };	

	std::cout << "ch1: " << ch1 << '\n';
	std::cout << "chh1: " << chh1 << '\n';
	std::cout << "ch2: " << ch2 << '\n';
	std::cout << "ch3: " << ch3 << '\n';
	std::cout << "ch4: " << ch4 << '\n';
	std::cout << "ch5: " << ch5 << '\n';
	
	return 0;
}

