#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/regex.hpp>
#include <iostream>
#include <string>

#define iterator_from_boost boost::iterator_range<std::string::iterator> 

using std::cout;

int main()
{
	std::string s = "This is my very Long STring";
	cout << boost::algorithm::erase_first_copy(s, "i") << '\n';
	cout << boost::algorithm::erase_nth_copy(s, "i", 1) << '\n';
	cout << boost::algorithm::erase_last_copy(s, "i") << '\n';
	cout << boost::algorithm::erase_all_copy(s, "i") << '\n';
	cout << boost::algorithm::erase_head_copy(s, 5) << '\n';
	cout << boost::algorithm::erase_tail_copy(s, 9) << '\n';
	
	boost::iterator_range<std::string::iterator> r = boost::algorithm::find_first(s, "Long");
	cout << "Long index: " << r << '\n';
	r = boost::algorithm::find_first(s, "xyz");
	cout << "xyz index: " << r << '\n';
	
	cout << "join: \n";
	std::vector<std::string> sss {"This", "is", "a", "string"};
	std::string res = boost::algorithm::join(sss, " ");
	cout << res << '\n';
	
	cout << "find_regex: \n";
	std::string check = "The Boost C++ Libraries";
	iterator_from_boost iter = boost::algorithm::find_regex(check, boost::regex{"\\w\\+\\+"});
	cout << "iter: " << iter << '\n';
		
	return 0;
}

