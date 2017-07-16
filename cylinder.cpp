//
//  cylinder.cpp
//  HW6
//
//  Created by Shvetha Soundararajan on 10/27/15.
//  Copyright (c) 2015 Shvetha Soundararajan. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "cylinder.h"
#include "PI.h"


using namespace std;



// Constructors 
cylinder::cylinder(double newRadius, double newHeight)
{
	radius = newRadius;//setting the radius value
	height = newHeight;//setting the height value

}

//surface area function
double cylinder::surface_area()
{

	return (2 * PI * radius * radius) + (2 * PI * radius * height); //calculating the surface area

}

//volume function
double cylinder::volume()
{

		return PI * radius * radius * height;//calculating the volume

}

void cylinder::write(ostream& out)
{
	out << "CYLINDER: " << height << ", " << radius;//displays output
	out << endl << endl;//displays output
}