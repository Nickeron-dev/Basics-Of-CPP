#include <iostream>

int main() {
	
const char* buf_company = "As a full-lifecycle product development services company, \
						  we offer the opportunity to work on amazing projects, using \
						  the latest disruptive technologies, with other designer and \
						  engineers who are experts in their field. We offer competitive \
						  salaries, the stability of a global company, and customized \
						  professional development that gives you exposure to a variety \
						  of interesting, hands-on projects.";
		
	char* m_buf = const_cast<char*>(buf_company);
	std::cout << buf_company << std::endl;
	std::cout <<  m_buf;
}

