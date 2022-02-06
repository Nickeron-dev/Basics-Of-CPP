#include <iostream>

int main()
{
        char str1 [] = "First string.";
        char str2 [] = "Second string."; // warning, memcopy will overflow. Unsafe.     

        printf("%s\n", str1);
        memmove(str1, str2, sizeof(str2));

        printf("%s\n", str1);
        printf("%s \n", str2);

        return 0;
}

