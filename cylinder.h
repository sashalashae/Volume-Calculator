//
//  cylinder.h
//  HW6
//
//  Created by Shvetha Soundararajan on 10/27/15.
//  Copyright (c) 2015 Shvetha Soundararajan. All rights reserved.
//

using namespace std;

class cylinder
{
private:
	double radius;//declares double radius as a private variable
	double height;//declares double height as a private variable

public:
    cylinder(double newRadius, double newHeight);
    double surface_area();
    double volume();
    void write(ostream& Out);
};
