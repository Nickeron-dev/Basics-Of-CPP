#define BOOST_TEST_MODULE Test_name
#include <boost/test/included/unit_test.hpp>

template <typename T>
void single_test()
{
  BOOST_CHECK( /* test assertion */ );
}

void combined_test()
{
  single_test<int>();
  single_test<float>();
  single_test<unsigned char>();
}
