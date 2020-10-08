#include <iostream>
using namespace std;
float volume (float a)
{
	return (a*a*a);
}
float volume (float r , float h)
{
	return (1.414 * r * r * h);
}
float volume (float l , float b , float h)
{
	return (l * b * h);
}
int main()
{
	int ch;
	float vol;
	while (1)
	{
	cout << "\n1. Volume of Cube \n2.Volume of Cylinder \n3.Volume of Cuboid \n4.Exit \n";
	cout << "Enter your choice ..... ";
	cin >> ch;
	
	switch (ch)
	{
	case 1:
		float a;
		cout << "Enter the area of the cube: ";
		cin >> a;
		vol = volume(a);
		cout << "Volume of cube is: " << vol << endl;
		cout << "--------------------------------------------------------------\n";
		break;
	case 2:
		float r , height_of_cylinder;
		cout << "Enter the radius: "; cin >> r;
		cout << "Enter the height: "; cin >> height_of_cylinder;
		vol = volume(r,height_of_cylinder);
		cout << "Volume of cylinder is: " << vol << endl;
	    cout << "--------------------------------------------------------------\n";
		break;
	case 3:
		float l , b , height_of_cuboid;
		cout << "Enter the length: "; cin >> l;
		cout << "Enter the breadth: "; cin >> b;
		cout << "Enter the height: "; cin >> height_of_cuboid;
		vol = volume(l,b,height_of_cuboid);
		cout << "Volume of the cuboid: " << vol << endl;
		cout << "--------------------------------------------------------------\n";
		break;
	case 4:
		exit(0);
	default:
		cout << "INVALID INPUT" << endl;
		cout << "Process exit at error code (0)" << endl;
		cout << "--------------------------------------------------------------\n";
    } 
}
	return 1;
}
