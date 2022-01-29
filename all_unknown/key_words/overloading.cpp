bool foo()
{
	return true;
}

bool foo(int a)
{
	return true;
}
bool foo(int b)
{
	return false;
}
bool foo(float b)
{
	return false;
}
bool foo(int a, float b)
{
        return false;
}
bool foo(float b, int a)
{
        return false;
}

int main()
{
	return 0;
}

