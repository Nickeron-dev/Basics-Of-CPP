#include <iostream>

class BoxWithCandies
{
	int m_amount;
	int m_price;
public:
	BoxWithCandies(int amount, int price)
	{
		m_amount = amount;
		m_price = price;
	}

	int get_amount()
	{
		return m_amount;
	}
	
	int get_price()
	{
		return m_price;
	}
	
	bool clear()
	{
		m_amount = 0;
		return true;
	}

	// Both < and > should be overloaded!!!
	// at least for storing these objects
	// in data structures that are based 
	// on trees.
	bool operator < (BoxWithCandies &box)
	{
		return (m_amount < box.get_amount());
	}

	bool operator > (BoxWithCandies &box)
	{
		return (m_amount > box.get_amount());
	}
	
	void operator += (BoxWithCandies &box)
	{
		this -> m_amount += box.get_amount();
		box.clear();
		return;
	}

	bool operator == (BoxWithCandies &box)
	{
		return (this -> m_amount == box.get_amount()
				&& this -> m_price == box.get_price());
	}

//	void operator << (std::ostream &COUT, BoxWithCandies &box);
// << and >> operators cannot be overloaded in classes! (they must 
// be binary!!!)

};

// If we need to work with both objects from arguments
// or one of them might 
void operator << (std::ostream &COUT, BoxWithCandies &box)
        {
                COUT << "Amount: " << box.get_amount() << std::endl;
                COUT << "Price: " << box.get_price() << std::endl;
        }

int main()
{
	BoxWithCandies box{10, 100};

	std::cout << box; // but this way is much better!
	std::cout << "=========Second way of calling:\n";
	operator<<(std::cout, box);
	
	std::cout << "===========\n";
	BoxWithCandies box1{15, 200};
	std::cout << std::boolalpha;
	std::cout << "Comparison: " << (box > box1) << std::endl;

	std::cout << "=============\n";
	box += box1;
	std::cout << "Box: " << box;
	std::cout << "Box1: " << box1;

	std::cout << "=============\n";
	BoxWithCandies box2 {25, 100};
	std::cout << "Compare ==: " << (box == box2) << std::endl;
	return 0;
}

