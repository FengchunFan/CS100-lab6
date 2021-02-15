#include "../header/rectangle.hpp"
Rectangle::Rectangle(){
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w,int h){
	width = w;
	height = h;
}

void Rectangle::set_width(int w){
	width = w;
}

void Rectangle::set_height(int h){
	height = h;
}

int Rectangle::area(){
	if((width >= 0) && (height >= 0)){
		return (width * height);
	}else{
		return -1;
	}
}

int Rectangle::perimeter(){
	if ((width > 0) && (height > 0)){
		return 2*(width + height);
	} else {
		return -1;
	}
}
