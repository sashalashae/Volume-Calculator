/**
* @file <HW6SMorgan>
* <This program allows users to input data into the system which returns the output of the answer as the shapes surface area and volume.
*
* @author <Sasha Morgan, sasha97>
* @date   <September 13, 2015>
*
* Virginia Tech Honor Code Pledge
* On my honor:
*
* - I have not discussed the C++ language code in my program with
* anyone other than my instructor or the teaching assistants
* assigned to this course.
* - I have not used C++ language code obtained from another student,
* or any other unauthorized source, either modified or unmodified.
* - If any C++ language code or documentation used in my program
* was obtained from another source, such as a text book of coarse
* notes, that has been clearly noted with a proper citation in
* the comments of my program.
* - I have not designed this program in such a way as to defeat or
* interfere with the normal operation of the Web-Cat Server.
*
* <Sasha Morgan>
*/
//
//  cylinder.h
//  HW6
//
//  Created by Shvetha Soundararajan on 10/27/15.
//  Copyright (c) 2015 Shvetha Soundararajan. All rights reserved.
//
#include <iostream>//include
#include <iomanip>//include
#include "cone.h"//include
#include "prism.h"//include
#include "pyramid.h"//include
#include "cylinder.h"//include
#include "sphere.h"//include
using namespace std;

int main()
{
    double radius, height, base, width;//declaration of double variables
    
    cout << fixed << showpoint << setprecision(2);//sets precision to 2 decimal places
    
    cout << "Enter cylinder height and radius >>> ";//prompts the user to input a number
    cin >> height >> radius;//stores number
    cylinder newCylinder (radius, height);//calls class
    cout << "The cylinder volume is " << newCylinder.volume () << endl;//displays volume
    cout << "The cylinder surface area is " << newCylinder.surface_area () << endl;//displays surface area
    newCylinder.write(cout);
    
    cout << "Enter sphere radius >>> ";//prompts the user to input a number
    cin >> radius;//stores number
    sphere newSphere (radius);//calls class
    cout << "The sphere volume is " << newSphere.volume () << endl;//displays volume
    cout << "The sphere surface area is " << newSphere.surface_area () << endl;//displays surface area
    newSphere.write(cout);
    
    cout << "Enter rectangular prism base length, height, and width >>> ";//prompts the user to input a number
    cin >> base >> height >> width;//stores number
    prism newPrism (base, height, width);//calls class
    cout << "The rectangular prism volume is " << newPrism.volume () << endl;//displays volume
    cout << "The rectangular prism surface area is " << newPrism.surface_area () << endl;//displays surface area
    newPrism.write(cout);
    
    cout << "Enter cone height and radius >>> ";//prompts the user to input a number
    cin >> height >> radius;//stores number
    cone newCone (radius, height);//calls class
    cout << "The cone volume is " << newCone.volume () << endl;//displays volume
    cout << "The cone surface area is " << newCone.surface_area () << endl;//displays surface area
    newCone.write(cout);
    
    cout << "Enter pyramid base side length and height >>> ";//prompts the user to input a number
    cin >> base >> height;//stores number
    pyramid newPyramid (base, height);//calls class
    cout << "The pyramid volume is " << newPyramid.volume () << endl;//displays volume
    cout << "The pyramid surface area is " << newPyramid.surface_area () << endl;//displays surface area
    newPyramid.write(cout);
    
    return 0;//ends program
}