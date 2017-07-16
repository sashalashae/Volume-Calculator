#include <iostream>
using namespace std;
class sphere
{
private:
	double radius;//makes the double radius private
	

public:
	sphere(double newRadius);//constructor as public
	double surface_area();//makes the double surface area public
	double volume();//makes the volume public
	void write(ostream& Out);// makes the ostream public
};
