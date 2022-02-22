//#define png_infopp_NULL (jpeg_infopp) NULL
//#define int_p_NULL (int*) NULL
#include <boost/gil.hpp>
#include <boost/gil/extension/dynamic_image/any_image.hpp>
#include <boost/gil/extension/io/jpeg.hpp>

// prior Boost 1.67
//#include <boost/gil/gil_all.hpp>
//#include <boost/gil/extension/io/png_dynamic_io.hpp>

int main()
{
	boost::gil::rgb8_image_t img(512, 512);
	boost::gil::rgb8_pixel_t red(255, 0, 0);
	boost::gil::fill_pixels(view(img), red);
	boost::gil::jpeg_write_view("redsquare.png", const_view(img));
	return 0;
}

