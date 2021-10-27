#include <iostream>
#include <stack>
#include <vector>

void print( std::stack<int> stack )
{
	while ( ! stack.empty() )
	{
		std::cout << stack.top() << " ";
		stack.pop(); // remove from the back
	}
}

void print_v( std::stack<int, std::vector<int>> stack )
{
        while ( ! stack.empty() )
        {
                std::cout << stack.top() << " ";
                stack.pop(); // remove from the back
        }
}

int main()
{
	std::stack<int> stck;
	
	stck.push(2);
	stck.push(3);
	stck.push(4);
	
	print(stck);

	std::cout << std::endl << "///////////\n";
	 
	std::stack<int, std::vector<int>> stck_v;

        stck_v.push(2);
        stck_v.push(3);
        stck_v.push(4);

        print_v(stck_v);

        std::cout << std::endl;

	return 0;
}

