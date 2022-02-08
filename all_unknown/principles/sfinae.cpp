int difference(int val1, int val2)
{
	return val1 - val2;
}

template<typename T>
typename T::difference_type difference(const T &val1, const T &val2)
{
	return val1 - val2;
}

int main()
{
	return 0;
}

