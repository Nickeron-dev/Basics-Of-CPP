#include <iostream>
#include <boost/proto/proto.hpp>
#include <boost/typeof/std/ostream.hpp>

boost::proto::terminal <std::ostream & >::type cout_ = {std::cout};

template<typename Expr>
void evaluate(Expr const & expr)
{
	boost::proto::default_context ctx;
	boost::proto::eval(expr, ctx);
}

int main()
{
	evaluate( cout_ << "hello" << ',' << " world");
	return 0;
}

