#define abcd 2
#include <iostream>

// this and pragma exit don't work on my compiler
#pragma startup func
int func()
{
	std::cout << "hello!!!\n";
	return 0;
}

#pragma exit func_end
int func_end()
{
	std::cout << "END!!!\n";
	return 0;
}

// basic pragma is 8
//#pragma pack(8) // not necessary to write
typedef struct
{
	int i; // size 4
	short s; // size 2
	double d; // size 8
	bool b; // size 1
} S;

#pragma pack(2)
typedef struct
{
	int i; // size 4
	short j; // size 2
	double k;
	bool b;
} T;

#pragma pack(4)
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
        bool b;
} four;

#pragma pack(1)
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
	bool b;
} one;

/*
#pragma pack(0) // it is the same as #pragma pack()
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
	bool b;
} zero;
*/

#pragma pack(push) // gives 1 as param
// Current stack: 1
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
        bool b;
} push_nothing;

#pragma pack(push, 1)
// Current stack: 1, 1
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
        bool b;
} push_one;

#pragma pack(push, 4)
// Current stack 1, 1, 4
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
        bool b;
} push_four;

#pragma pack(pop)
// Current stack 1, 1
// so packing will be 1-byte(previous)
typedef struct
{
        int i; // size 4
        short j; // size 2
        double k;
	bool b;
} pop;

#pragma pack(pop) // Current stack 1
#pragma pack(pop) // Current stack: []  (empty), so no warnings
// if stack will have any elements, warning will be given(unterminated pragma)

int main()
{
	// predefined macros
	// in all c++ versions
	std::cout << "__LINE__: " << __LINE__ << std::endl;
	std::cout << "__FILE__: " << __FILE__ << std::endl;
	std::cout << "__DATE__: " << __DATE__ << std::endl;
	std::cout << "__TIME__: " << __TIME__ << std::endl;
	std::cout << "__cplusplus: " << __cplusplus << std::endl;
//	std::cout << "__STDC_VERSION__: " << __STDC_VERSION__ << std::endl;	
// my compiler doesn't have this
	
	// c++17 has 2 not very significant new macros
	// c++11 has several important for me for now
	std::cout << "__func__: " << __func__ << std::endl;
	// other c++11 macros are not very important for me for now

// all macros are pre-compiled(constexpr)
	#ifdef abcd
		std::cout << "1: yes\n";
	#else
		std::cout << "1: no\n";
	#endif

// #elifdef and #elifndef is only since c++23
	#ifndef abcd
		std::cout << "2: no1\n";
	#elif abcd == 2
		std::cout << "2: yes\n";
	#else
		std::cout << "2: no2\n";
	#endif      // don't forget #endif

	#if ! defined(dcba) && (abcd < 2 * 4 - 3)
		std::cout << "3: yes\n";
	#endif

	// when c++ is not supported
	#ifdef CPU
		std::cout << "4: no1\n";
	#elifdef GPU
		std::cout << "4: no2\n";
	#elifdef RAM
		std::cout << "4: yes\n"; // expected block, RAM is defined
	#else
		std::cout << "4: no!\n"; // it jumps after unknown macros
	#endif

	#undef abcd
	#if defined abcd
		std::cout << "abcd is is still here\n";
	#else
		std::cout << "abcd was undefined\n";
	#endif

	std::cout << "Usual pragma: " << sizeof(S) << '\n';
	std::cout << "2 pragma: " << sizeof(T) << '\n';
	std::cout << "one pragma: " << sizeof(one) << '\n';
//	std::cout << "zero pragma: " << sizeof(zero) << '\n';
	std::cout << "four pragma: " << sizeof(four) << '\n';

	std::cout << "With pushing\n";
	std::cout << "push_nothing pragma: " << sizeof(push_nothing) << '\n';
	std::cout << "push_one pragma: " << sizeof(push_one) << '\n';
	std::cout << "push_four pragma: " << sizeof(push_four) << '\n';
	std::cout << "pop pragma: " << sizeof(pop) << '\n';
	return 0;
}

