#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char password[9];
	printf("Input password: ");
	for (int i = 0; i < 8; i++)
	{
		password[i] = getch();
		printf("*");
	}
	password[8] = '\0';
	printf("\npassword: ");
	for (int i = 0; password[i] != '\0'; i++)
	{
		printf("%c", password[i]);
	}
	getch();
	return 0;
}
