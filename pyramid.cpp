#include "pyramid.h"//includes the pyramid header file
#include <cmath>//incldes math functions
#include <iostream>

//constructor
pyramid::pyramid(double newBase, double newHeight)
{
	base = newBase;//setting the value of the base function
	height = newHeight;//setting the value of the height function
}

//surface area
double pyramid::surface_area()
{
	return pow(base,2) + ((2*base)*sqrt((pow(base,2)/4)+pow(height,2)));//calculates surface area
}

//volume
double pyramid::volume()
{
	return (base*base)*(height / 3);//calculates volume
}
//outstream
void pyramid::write(ostream& out){
	out << "PYRAMID: " << base << ", " << height;//prints out the base and the height
	out << endl << endl;//blank lines
}
