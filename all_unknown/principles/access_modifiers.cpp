#include <cstdio>

class A_public
{
public:
	int i = 10;
};

class B_public : private A_public  // by default = class B : A, but word 'private' should be there
{
public:
	int b = i;
};

class A_private
{
// private is by default
private:
	int i = 10;
};

class B_private : public A_private
{
public:
//	int b = i;
};

class A_protected
{
protected:
	int i = 10;
};

class B_protected : public A_protected
{
public:
	int b = i;
//	A_protected a; // in this case, it is accessed not as a child class, so impossible
//	int m = a.i;
};

int main()
{
	B_public b_pub;
	printf("B_public b:%i\n", b_pub.b);
	
//	B_private b_p;
//        printf("B_private b:%i\n", b_p.b);

	B_protected b_pro;
        printf("B_protected b:%i\n", b_pro.b);
//	printf("B_protected m:%i\n", b_pro.m);
	return 0;
}

