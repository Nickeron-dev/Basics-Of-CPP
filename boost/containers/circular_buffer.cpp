#include <boost/circular_buffer.hpp>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	typedef boost::circular_buffer<int> circular_buffer;
	
	circular_buffer buffer{3};
	
	cout << "capacity: " << buffer.capacity() << endl;
	cout << "size: " << buffer.size() << endl;
	
	buffer.push_back(10);
	buffer.push_back(20);
	buffer.push_back(30);
	
	cout << "size after adding first: " << buffer.size() << endl;
	
	buffer.push_back(40);
	buffer.push_back(50);
	buffer.push_back(60);
	
	cout << "size after adding second: " << buffer.size() << endl;
	
	cout << "buffer: " << endl;
	for (auto i = buffer.begin(); i != buffer.end(); i++)
	{
		cout << *i << '\n';
	}
	
	return 0;
}

