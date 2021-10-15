#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;	

	Timer()
	{
		auto start = std::chrono::high_resolution_clock::now();
	}
	
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "timer took " << ms << "ms" << std::endl;
	}
};

void function()
{
	Timer timer;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Hello" << std::endl;
	}
}

int main()
{
	/*
	// threads don't guarantee that they sleep exactly for a certain time
	using namespace std::literals::chrono_literals;

	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();
	
	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << "s " << std::endl;
*/
	function();
	return 0;
}

