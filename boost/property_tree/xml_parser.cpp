#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <string>
#include <boost/optional.hpp>

int main()
{
	boost::property_tree::ptree config;
	boost::property_tree::read_xml("property.xml", config);
	
	boost::optional<std::string> name {""};
	try
	{
		name.reset();
		name = config.get<std::string> ("server.name");
	}
	catch (boost::property_tree::ptree_bad_path &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	if (name)
	{
		std::cout << name << std::endl;
	}
	else
	{
		std::cout << "Invalid node, empty optional: " << name << std::endl;
	}
	
	std::string c_name = config.get<std::string> ("server.channels.channel.name");
	std::cout << c_name << std::endl;
	
	return 0;
}

