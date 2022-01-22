#include <iostream>
#include <cstring>

class String
{
private:
        int m_size;
        char *m_s;
        // Try with private constructor
        //String (const String&); // copy constructor
public:
        String (const char *s = NULL); // constructor
        ~String (); // destructor
        // Try to remove this copy constructor
        String (const String&); // copy constructor
        // This constructor with =delete does same as a private constructor
        // BUT
/*
        the difference between private and =delete copy constr. is that
        private one is "old", and it's disadvantage is that the constructor still exist
        (try to uncomment private one and uncomment declaration of it. It will compile)
        But if you try to take constructor with =delete and uncomment declaration, it won't compile!!!
*/
        //String (const String&) = delete; // copy constructor that doesn't allow to copy
        void print();
        void change(const char *);
        int get_size() const
        {
                return m_size;
        }
        char * get_s() const
        {
                return m_s;
        }
};

String::String (const char *s)
{
        m_size = std::strlen(s);
        m_s = new char[m_size + 1];
        std::strcpy(m_s, s);
}

String::~String ()
{
        delete [] m_s;
}

// Try to remove this copy constructor
String::String (const String &copy_obj)
{
        m_size = copy_obj.get_size();
        m_s = new char[m_size + 1];
        std::strcpy(m_s, copy_obj.get_s());
}

void String::print()
{
        std::cout << m_s << std::endl;
}

void String::change(const char *new_str)
{
        delete [] m_s;
        m_size = std::strlen(new_str);
        m_s = new char[m_size + 1];
        std::strcpy(m_s, new_str);
}

int main()
{
        String s1("String one");
        String s2 = s1; // String s2 (s1); // as an alternative
        s1.print();
        s2.print();
        s1.change("HELLO");
        s1.print();
        s2.print();
        return 0;
}
