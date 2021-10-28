#include <iostream>

// RAII - Resource Acquision Is Initialization!!!
/*
	In C++ there is no garbage collection, so you need to 
	manage memory manually, that's why memory leaks are
	quite well-spread problem. 
	That's why you should avoid allocating objects on heap,
	but use stack instead.
*/

class Widget
{
	gadget g; // it will be private
public:
	void draw();
};

void function()
{
	widget w; // created on stack
	
	w.draw();
} // automatically deallocates memory for w and w.g


class Widg1
{
	int* m_data;
public:
	Widg1()
	{
		m_data = new int[10]; // acquire memory
	}
	~Widg1()
	{
		detete [] m_data; // release memory
	}
	void do_smth() { /* do smth */ };
};

void func()
{
	Widg1 obj;
	obj.do_smth();
} // automatically deallocates memory for w and w.m_data (using destructor)

// better way to write previous example(C++11), smart pointers are preferable
#include <memory>
class widget
{
private:
    std::unique_ptr<int> data;
public:
    widget(const int size) { data = std::make_unique<int>(size); }
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.data gadget member
    // ...
    w.do_something();
    // ...
} // automatic destruction and deallocation for w and w.data


