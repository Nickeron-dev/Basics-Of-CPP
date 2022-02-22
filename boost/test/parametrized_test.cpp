#include <boost/test/included/unit_test.hpp>
#include <boost/test/parameterized_test.hpp>

void test_func(int i)
{
	BOOST_TEST( i < 4 /* NOOOOOOO, invalid */);
}

boost::unit_test::test_suite* init_unit_test_suite(int /*argc*/, char* /*argv*/ [])
{
	int params[] = {1, 2, 3, 4, 5};
	boost::unit_test::framework::master_test_suite().add(BOOST_PARAM_TEST_CASE(&test_func, params, params + 5));
	return 0;
}

