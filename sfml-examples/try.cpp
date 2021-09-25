#include <iostream>
#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>
//#include <Foundation/Foundation.h>

//extern "C" bool click() {
    //	__CGEvent *event;
  //  	CGEventSetIntegerValueField(event, kCGMouseEventClickState, 1);
//	return true;
//}


int main() {
	CGPoint pt;
    	pt.x = 10;
    	pt.y = 10;

    	CGPostMouseEvent( pt, 1, 1, 1 );
    	CGPostMouseEvent( pt, 1, 1, 0 );
}
