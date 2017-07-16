
#include "cone.h"//includes cone header file
#include <cmath>//includes math function
#include <iostream>//includes iostream
#include "PI.h"//includes pi header

using namespace std;


cone::cone(double newRadius, double newHeight)//constructor
{
	radius = newRadius;//setting the radius value
	height = newHeight;//setting the height value
}


double cone :: surface_area()//surface area function
{
	
	return ((PI*radius)*(radius + sqrt(pow(radius,2) + pow(height,2)))); //calculating the surface area
}
double cone::volume()//volume function
{
	
	return PI * radius * radius * (height / 3);//calculating the volume

}

void cone::write(ostream& out)//out stream function
{
	out << "CONE: " << height << ", " << radius;//outputs the height and radius
	out << endl << endl;//outputs a blank line
}