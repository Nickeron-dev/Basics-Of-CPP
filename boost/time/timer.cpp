#include <boost/timer/timer.hpp>
#include <cmath>
#include <iostream>

// Doesn't work for arm64

int main()
{
	boost::timer::cpu_timer timer;
	for (int i = 0; i < 1000000; ++i)
    std::pow(1.234, i);
    std::cout << timer.format() << '\n';

    timer.stop();

    for (int i = 0; i < 1000000; ++i)
      std::pow(1.234, i);
    std::cout << timer.format() << '\n';

    timer.resume();

    for (int i = 0; i < 1000000; ++i)
      std::pow(1.234, i);
    std::cout << timer.format() << '\n';
	return 0;
}

