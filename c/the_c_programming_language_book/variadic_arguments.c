#include <stdio.h>
#include <stdarg.h>

double average(int number_of_args, ...)
{
	va_list arguments;
	double result = 0;
	
	va_start(arguments, number_of_args);
	for (int i = 0; i < number_of_args; i++)
	{
		result += va_arg(arguments, double);
	}
	va_end(arguments);
	return result / number_of_args;
}

int main(void)
{
	printf("Average of 1 2 3 4 5 is: %f\n", average(5, 1, 2, 3, 4, 5));
	printf("Average of 1.0 2.0 3.0 4.0 5.0 is: %f\n", average(5, 10.5, 2.3, 3.9, 45.4, 12.5));
	return 0;
}

