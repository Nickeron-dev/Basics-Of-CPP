#include <iostream>
#include <queue>

void print_and_pop(std::queue<int> queue)
{
	while ( ! queue.empty() )
        {
                std::cout << queue.front() << " ";
                queue.pop(); // pops element on the front
        }
}

int main()
{
	std::queue<int> queue;
	queue.push(1);
	queue.push(2);
	queue.push(5);
	
	print_and_pop(queue);
	std::cout << std::endl;

	print_and_pop(queue);
	std::cout << std::endl;

	return 0;
}

