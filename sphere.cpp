#include "sphere.h"//includes sphere header file
#include <iostream>
#include <cmath>//math functions
#include "PI.h"//pi header file

using namespace std;

//constructor
sphere::sphere(double newRadius)
{ 
	radius = newRadius;//setting the radius value

}

//surface area
double sphere::surface_area(){
	
		return 4 * PI*radius*radius; //calculating the surface area//returning the surface area
}

//volume
double sphere::volume()
{
	
	return (4*PI*pow(radius,3))/3;//calculating the volume

}

//ostream
void sphere::write(ostream& out)
{
	out << "SPHERE: " << radius; //displays the radius
	out << endl << endl;//blank lines
}
