#include <iostream>
#include <set>
#include <string>
#include <functional>

class Person
{
	int m_id;
	std::string m_name;
public:
	Person(int id, std::string name)
	{
		m_id = id;
		m_name = name;
	}
	int get_id() const
	{
		return m_id;
	}
	std::string get_name() const
	{
		return m_name;
	}
	bool operator > (const Person &comp_obj) const
	{
		return (m_id > comp_obj.get_id());
	}

	bool operator < (const Person &comp_obj) const
        {
                return (m_id < comp_obj.get_id());
        }
};

int main()
{
	// Example 1:
	std::multiset<int, std::less<int>> set = { 2, 4, 5, 2, 5, 3 };
	// passing type to std::less<> is not required. std::less or std::greater
	// are defined in <functional>
	set.insert(20);
	for (const auto element : set)
	{
		std::cout << element << std::endl;
	}

	// Example 2:
	std::multiset<Person, std::greater<>> m_set = {{1, "Ivan"}, {2, "Danya"}};
	
	for (const auto& e : m_set)
	{
		std::cout << e.get_id() << " " << e.get_name() << std::endl;
	}

	return 0;
}

