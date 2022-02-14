#include <clocale>
#include <cstdio>

int main()
{
	std::setlocale(LC_ALL, "English_en_US");
	struct lconv *obj = std::localeconv();
	printf("Currency: %s\n", obj->currency_symbol); 
	return 0;
}

