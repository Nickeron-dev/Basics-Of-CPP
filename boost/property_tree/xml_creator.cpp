#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <string>
#include <iostream>

namespace pt = boost::property_tree;

int main()
{
	pt::ptree config;
	
	config.put("server.name", "Name of this server");
	config.put("server.port", "8080");
	config.put("server.channels.channel.name", "first");
	config.put("server.channels.channel.name", "second");
	
	pt::write_xml("created_xml", config);
	
	return 0;
}

