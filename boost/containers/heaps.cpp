#include <boost/heap/priority_queue.hpp>
#include <boost/heap/binomial_heap.hpp>
#include <iostream>

int main()
{
	typedef boost::heap::priority_queue<int> boost_priority_queue;
	boost_priority_queue q;
	
	q.push(2);
	q.push(1);
	q.push(0);
	
	std::cout << "Queue: \n";
	for (int i : q)
	{
		std::cout << i << '\n';
	}
	
	boost::heap::priority_queue<int> pq2;
	pq2.push(4);
	std::cout << std::boolalpha << (q > pq2) << '\n';
	
	std::cout << "\nBinomial heap\n";
	boost::heap::binomial_heap<int> bh;
	bh.push(2);
	bh.push(3);
	bh.push(1);

	boost::heap::binomial_heap<int> bh2;
	bh2.push(4);
	bh.merge(bh2);

	for (auto it = bh.ordered_begin(); it != bh.ordered_end(); ++it)
		std::cout << *it << '\n';
	std::cout << std::boolalpha << bh2.empty() << '\n';
	
	return 0;
}

