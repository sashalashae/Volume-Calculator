#include <iostream>
using namespace std;
class pyramid
{
	private:
		double base;//makes the base variable private
		double height;//makes the height variable private

	public:
		pyramid(double newBase, double newHeight);//constructor as public
		double surface_area();//makes the double surface area public
		double volume();//makes the volume public
		void write(ostream& Out);// makes the ostream public
	};

