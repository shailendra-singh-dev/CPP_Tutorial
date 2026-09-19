/*
 * named_constructor_idiom.cpp
 *
 *  Created on: Feb 14, 2023
 *      Author: ssingh42
 */

#include "iostream"
#include <cmath>

using namespace std;

class Point{
private:
	float _x, _y;
	Point(float x, float y);
public:
	static Point rectangle(float x, float y);
	static Point polar(float x, float y);
	float getX();
	float getY();
};

Point::Point(float x, float y){
	_x=x;
	_y=y;
}

float Point::getX(){
	return _x;
}

float Point::getY(){
	return _y;
}

Point Point::rectangle(float x,float y){
	return Point(x,y);
}

Point Point::polar(float radius, float angle){
	return Point(radius*sin(angle),radius*cos(angle) );
}

void named_constructor_idiom_main(){
	Point obj1=Point::rectangle(10,20);
	Point obj2=Point::polar(5,100);
	cout << "obj1:x" << obj1.getX() << ",y:" << obj1.getY() << endl;
	cout << "obj2:x" << obj2.getX() << ",y:" << obj2.getY() << endl;
}
