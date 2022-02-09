#include <cstdio>

/*
inline namespace v2
{
        void foo(int a)
        {
                printf("Hello, v2\n");
        }

	void foo(double a)
        {
                printf("Hello, v2\n");
        }
}

namespace v1
{
	void foo(int a)
	{
		printf("Hello, v1\n");
	}
}

namespace usage
{
	#include "v1.h"
	#include "v2.h"	
}
*/
#include "usage.h"
using namespace usage;

int main()
{
	v1::foo(5);
	v2::foo(5);
	foo(5);
	return 0;
}

