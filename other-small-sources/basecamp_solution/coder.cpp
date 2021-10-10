/*
 * coder.cpp
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class source.
 *
 * You may have to change this file to fix build errors, and make
 * the unit tests pass.
 *
 * Usually source files are used to write an implementation of
 * global and member functions.
 *
 */

#include "coder.h"

/*
 * To make all unit tests pass you may try to puzzle out the ::encode() algorithm
 * and it should help you to write the decoding one. But there are other ways to
 * make them pass.
 *
 * Good luck!
 *
 */
void Coder::encode()
{
	std::string old_str_buf = const_cast<char*>(m_buf);
	std::string old_str_array = "";
	for (int i = 0; i < m_size; i++) {
		old_str_array += m_buf[i];
	}	

	::encode( m_buf, m_size );
	std::string new_str_buf = const_cast<char*>(m_buf);
	std::string str_buf_array = "";
	for (int i = 0; i < m_size; i++) {
		str_buf_array += m_buf[i];
	}
	char* together;
	if (is_array) {
		m_size = str_buf_array.size();
		str_buf_array += old_str_array;
		together = new char[str_buf_array.size() + 1];
		std::copy(str_buf_array.begin(), str_buf_array.end(), together);
		together[str_buf_array.size()] = '\0';
	} else {
		m_size = new_str_buf.size();
		new_str_buf += old_str_array;
		together = new char[new_str_buf.size() + 1];
		std::copy(new_str_buf.begin(), new_str_buf.end(), together);
		together[new_str_buf.size()] = '\0';
	}

	m_buf = together;
}

