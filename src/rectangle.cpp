#include "../header/rectangle.hpp"
Rectangle::Rectangle(){
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w,int h){
/* Fengchun's correct implementation
	width = w;
	height = h; */

	//wrong hard coded return values
	width = 3;
	height = 3;
}

void Rectangle::set_width(int w){
	width = w;
}

void Rectangle::set_height(int h){
	height = h;
}

int Rectangle::area(){
/*	if((width >= 0) && (height >= 0)){
		return (width * height);
	}else{
		return -1;
	}*/

	//Wrong hard coded return values
	return 42;
}

int Rectangle::perimeter(){
/*	if ((width > 0) && (height > 0)){
		return 2*(width + height);
	} else {
		return -1;
	}*/

	//Wrong hard caded return values
	return 42;
}
