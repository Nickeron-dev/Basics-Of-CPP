#include <iostream>
#include <memory>

struct Son;
struct Daughter;

struct Mother
{
	~Mother()
	{
		std::cout << "Mother dest" << std::endl;
	}

	void set_son(const std::shared_ptr<Son> son)
	{
		m_son = son;
	}

	void set_daughter(const std::shared_ptr<Daughter> daughter)
	{
		m_daughter = daughter;
	}

	std::weak_ptr<Son> m_son;
	std::weak_ptr<Daughter> m_daughter;
};

struct Son
{
	Son(std::shared_ptr<Mother> mother) : m_mother(mother) {}
	
	~Son()
	{
		std::cout << "Son dest" << std::endl;
	}

	std::shared_ptr<const Mother> m_mother;
};

struct Daughter
{
	Daughter(std::shared_ptr<Mother> mother) : m_mother(mother) {}
	~Daughter()
	{
		std::cout << "Daughter dest" << std::endl;
	}
	std::shared_ptr<const Mother> m_mother;
};

int main()
{
	std::shared_ptr<Mother> mother = std::shared_ptr<Mother>(new Mother);
	std::shared_ptr<Son> son = std::shared_ptr<Son> (new Son(mother));
	std::shared_ptr<Daughter> daughter = std::shared_ptr<Daughter> 
		(new Daughter(mother) );
	mother -> set_son(son);
	mother -> set_daughter(daughter);
	return 0;
}

