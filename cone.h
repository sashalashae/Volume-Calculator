#include <iostream>
using namespace std;
class cone
{
private:
	double radius;//declares double radius as a private variable
	double height;//declares double height as a private variable

public:
	cone(double newRadius, double newHeight);//constructor as public
	double surface_area();//makes the double surface area public
	double volume();//makes the volume public
	void write(ostream& Out);// makes the ostream public

};

