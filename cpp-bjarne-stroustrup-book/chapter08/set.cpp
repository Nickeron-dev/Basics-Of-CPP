#include <iostream>
#include <string>
#include <set>
#include <functional>

class person
{
public:
	int m_id;
	std::string m_name;

	person(int id, std::string name)
	{
		m_id = id;
		m_name = name;
	}
	
	bool operator < (const person &person_instance) const
	{
		return m_id < person_instance.m_id;
	}
	
	bool operator > (const person &person_instance) const
	{
		return m_id > person_instance.m_id;
	}
};

int main()
{
	std::set<int> set = { 1, 2, 4, 4, 3, 1, 2, 3, 4, 5 };
	for ( auto element : set )
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;

	std::set<person> person_set = { {1, "Ivan"}, {2, "Vasya"}, {3, "John"} };
	for ( const auto element : person_set )
	{
		std::cout << "Id: " << element.m_id << " Name: " << element.m_name << std::endl;
	}

	std::cout << std::endl;

	std::set<person, std::greater<>> person_set_desc = { {1, "Ivan"}, {2, "Vasya"}, {3, "John"} };
        for ( const auto element : person_set_desc )
        {
                std::cout << "Id: " << element.m_id << " Name: " << element.m_name << std::endl;
        }

	return 0;
}

