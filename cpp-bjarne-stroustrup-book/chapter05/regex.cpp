#include <iostream>
#include <string>
#include <regex>

void print_matches(std::string str, std::regex regex)
{
	std::smatch matches;
	std::cout << std::boolalpha; // it will print bools as 
					//true or false(by default is 1, 0)
	while ( std::regex_search(str, matches, regex) ) 
	{
		// it will print if there was a match or not
		std::cout << "Is there a match: " << 
			matches.ready() << "\n";
		// it will print if there was NO match or not(opposite)
		std::cout << "Are there no matches: " <<
			matches.empty() << "\n";
		std::cout << "Number of matches: " << 
                        matches.size() << "\n";
		std::cout << "First match: " << 
                        matches.str(1) << "\n";
		str = matches.suffix().str();
		std::cout << "Suffix: " << str << std::endl;
	}

}

void print_matches_iterator(std::string string, std::regex regex)
{
	std::sregex_iterator current_match(string.begin(),
		string.end(), regex);
	std::sregex_iterator last_match;
	while ( current_match != last_match )
	{
		std::smatch match = *current_match;
		std::cout << match.str() << "\n";
		current_match++;
	}
	std::cout << std::endl;
	
}

int main()
{
	std::string str = "The ape was at the apex";
	std::smatch matches;
	std::regex regex ("(ape[^ ]?)");
	print_matches(str, regex);
	
	std::cout << "============\n";
	std::string str2 = "I picked the pickle";
	std::regex regex2 ("(pick[^ ]?)");
	print_matches_iterator(str2, regex2);
	
	std::string string3 = "Cat rat mat fat pat";
	std::regex regex3 ("([crmfp]at)");
	print_matches_iterator(string3, regex3);

	std::regex regex4 ("([C-Fc-f]at)");
	print_matches_iterator(string3, regex4);
	
	std::regex regex5("([^C]at)");
	print_matches_iterator(string3, regex5);
	
	std::regex regex6 ("([Cr]at)"); // choosing Cat and rat
	std::string changed_str = std::regex_replace(string3, regex6, "Change");
	std::cout << changed_str << std::endl;
	
	std::cout << "============\n";
	std::string string7 = "F.B.I I.R.S CIA";
	std::regex regex7 ("([^ ]\..\..\.)");
	print_matches_iterator(string7, regex7);
	
	std::cout << "============\n";
	std::string string8 = "This\n string \n has many\n new lines.";
	std::regex regex8("\n");
	std::string no_new_lines = std::regex_replace(string8, regex8, " ");
	std::cout << no_new_lines << std::endl;
	
	std::cout << "============\n";
	std::string string10 = "12345";
	// \d [0-9]
	// \D [^0-9]
	std::regex regex10 ("\\d");
	print_matches_iterator(string10, regex10);
	
	std::cout << "============\n";
	std::string string11 = "123 12345 123456 1234567";
	std::regex regex11 ("\\d{5,7}");
	print_matches_iterator(string11, regex11);
	
	std::cout << "============\n";
	// \w [a-zA-Z0-9]
	// \W [^a-zA-Z0-9]
	std::string string12 = "38-123-45-67";
	std::regex regex12 ("\\w{2}-\\w{3}-\\w{2}-\\w{2}");
	print_matches_iterator(string12, regex12);
	
	std::cout << "============\n";
	// \s [\f\n\r\t\v]
	// \S [^\f\n\r\t\v]
	std::string str13 = "Toshio Muramatsu";
	std::regex regex13 ("\\w{2,20}\\s\\w{2,20}");
	print_matches_iterator(str13, regex13);
	
	std::cout << "============\n";
	std::string string14 = "a aS ape bug";
	std::regex regex14 ("a[a-zA-Z]+");
	print_matches_iterator(string14, regex14);

	return 0;
}

