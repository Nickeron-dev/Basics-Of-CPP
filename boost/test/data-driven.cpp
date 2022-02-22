#define BOOST_TEST_MODULE name
#include <boost/test/included/unit_test.hpp>

void single_test( int i )
{
  BOOST_TEST( /* test assertion */ );
}

void combined_test()
{
  int params[] = { 1, 2, 3, 4, 5 };
  std::for_each( params, params+5, &single_test );
}
