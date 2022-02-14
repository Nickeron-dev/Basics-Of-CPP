#include <iostream>
#include <chrono>

int main()
{
	// there are 3 types of clocks: system_clock(usual, depends on time on pc)
	// steady_clock(monotomic clock that will never be adjucted)
	// high_resolution_clock(clock with smallest tick period)
	std::chrono::time_point<std::chrono::system_clock> start;
	start = std::chrono::system_clock::now();
	for (int i = 0; i < 1000000; i++)
	{
		int var = i;
	}
	std::chrono::time_point<std::chrono::system_clock> end;
	end = std::chrono::system_clock::now();
	
	std::chrono::duration<double> duration = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	
	std::cout << "The duration is: " << duration.count() << " ended at: " << std::ctime(&end_time) << '\n';
	
	return 0;
}

