 // Write a language program which accepts the radius of a circle from the user and compute the area and circumference
#include <iostream>
using namespace std;

AreaCir(float r)
{
	cout << "Area of circle is:\n" << 3.142*r*r << endl;
}

CircumCir(float r)
{
	cout << "Circumference of circle is:\n" << 2*3.142*r << endl;
}

int main()
{
	float r;
	
	cout << "Please enter the radius of circle" << endl;
	cin >> r;
	AreaCir(r);
	CircumCir(r);
}
