/*
 * coder.h
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class header.
 *
 * You have to change this file to fix build errors, and make
 * the unit tests passed.
 *
 */

#ifndef CODER_H
#define CODER_H
#include <iostream>
#include <cstring>
/*
 * This function was pre-compiled and is provided as a part of the
 * static library.
 *
 */
void encode( char* buf, int size );

#pragma pack(push)

/*
 * Coder class header.
 *
 */
class Coder
{
public:
	void set( const char* buf, int size )
	{	
		
		std::string str_buf = buf;
		std::string str_buf_array = "";
		for (int i = 0; i < size; i++) {
			str_buf_array += buf[i];
		}

		if ((int) str_buf_array.size() != (int)str_buf.size() + 1) {
			is_array = true;
		}
		
		if ((int) str_buf_array.size() != size ||
			((int)str_buf.size() != size && (int) str_buf_array.size() == 0)) 
		{
			throw std::logic_error("Invalid size");
		}

		m_buf = new char[size + 1];
		std::copy(str_buf_array.begin(), str_buf_array.end(), m_buf);
		m_buf[size + 1] = '\0';
		m_size = size;

	}
	char* buf() const
	{
		if ( m_buf == 0 ) 
		{
			return m_buf;
		}
		std::string str_buf_array = "";
		for (int i = 0; i < m_size; i++)
		{
			str_buf_array += m_buf[i];
		}

		char* returnable = new char[m_size + 1];
		if ( (int) str_buf_array.size() - 1 > m_size )
		{
			std::copy(str_buf_array.begin(), str_buf_array.end() 
				- (str_buf_array.size() - m_size), returnable);
		} 
		else 
		{
			std::copy(str_buf_array.begin(), str_buf_array.end(), returnable);
		}
		returnable[m_size] = '\0';
		return returnable;

	}
	int size() const
	{
		return m_size;
	}

	void encode();
	void decode()
	{
		std::string str_buf = const_cast<char*>(m_buf);
		std::string str_buf_array = "";
		for (int i = 0; i < m_size * 2; i++) {
			str_buf_array += m_buf[i];
		}

		std::string together;
		if ( str_buf_array.size() > str_buf.size() ) 
		{
			std::string encoded = str_buf_array.substr(0, m_size - 1);
			std::string decoded = str_buf_array.substr(m_size, str_buf_array.size() - 1);
			together = decoded + encoded;
			m_size =  str_buf_array.size() - m_size;	
		} 
		else 
		{
			std::string encoded = str_buf.substr(0, m_size - 1);
			std::string decoded = str_buf.substr(m_size, str_buf.size() - 1);
			together = decoded + encoded;
			m_size =  str_buf.size() - m_size;
		}

		char* to_char = new char[together.size() + 1];
		std::copy(together.begin(), together.end(), to_char);
		to_char[together.size()] = '\0';
		m_buf = to_char;

	}

private:
	char* m_buf;
	int m_size;
	bool is_array = false;
};

#pragma pack(pop)

#endif // CODER_H
