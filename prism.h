#include <iostream>
using namespace std;
class prism
{
private:
	double base;//declares double base as a private variable
	double height;//declares double height as a private variable
	double width;//declares double width as a private variable

public:
	prism(double newBase, double newHeight, double newLength);//constructor as public
	double surface_area();//makes the double surface area public
	double volume();//makes the volume public
	void write(ostream& Out);// makes the ostream public
};

