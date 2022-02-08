#include <cstdio>

class A
{
public:
	void show()
	{
		printf("Hello from A\n");
	}
};

// by default (class B : A) = (class B : private A)
class B : public virtual A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
	D* d = new D();
	d->show();
	delete d;
	return 0;
}

