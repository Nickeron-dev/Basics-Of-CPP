#include <iostream>

int main()
{
	char str[100] = "Hello my friend";
	char *first, *second;
	first = str;
	second = str;

	printf("Original: %s\n", str);
	
	memcpy(first + 8, first, sizeof(str));
	printf("memcpy overlap: %s\n", str);

	memmove(second + 8, second, 10);
	printf("memmove overlap: %s\n", str);
	return 0;
}

