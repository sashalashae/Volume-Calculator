#include "prism.h"//include prism header
#include <iostream>
using namespace std;

//constructor
prism::prism(double newBase, double newHeight, double newLength)
{
	base = newBase;//setting the value base variable
	height = newHeight;//setting the value of the height variable
	width = newLength;//setting the value of the width variable
}

//surface area function
double prism::surface_area()
{
	return 2 * (width*base + height*base + (height*width));//calculates the surfact area
}
 //volume function
double prism::volume(){
	return width*height*base;//calculates the volume
}
void prism::write(ostream& out)
{
	out << "PRISM: " << base << ", " << height << ", " << width; // outputs the height and radius
	out << endl << endl;//outputs a blank line

}