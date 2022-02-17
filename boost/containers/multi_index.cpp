#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <iostream>
#include <string>

struct animal
{
	std::string name;
	int legs;
};

typedef boost::multi_index::multi_index_container<
  animal,
  boost::multi_index::indexed_by<
    boost::multi_index::hashed_non_unique<
      boost::multi_index::member<
        animal, std::string, &animal::name
      >
    >,
    boost::multi_index::hashed_non_unique<
      boost::multi_index::member<
        animal, int, &animal::legs
      >
    >
  >
> animal_multi;

int main()
{
	animal_multi animals;
	
	animals.insert({"cat", 4});
	animals.insert({"dog", 8});
	animals.insert({"spider", 0});
	
	std::cout << animals.count("cat") << std::endl;
	
	const animal_multi::nth_index<1>::type &legs_index = animals.get<1>();
	std::cout << legs_index.count(8) << std::endl;
	
	return 0;
}

