#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> m;
    m.insert(std::pair<std::string, int> ("HEY", 5));
    std::cout << m.at("HEY") << std::endl;
    m.insert(std::pair<std::string, int> ("HEY", 10));
    std::cout << m.at("HEY") << std::endl;
}
