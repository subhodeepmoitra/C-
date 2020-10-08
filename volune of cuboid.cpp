#include <iostream>
using namespace std;
int volume ( int l=10 , int b=10 , int h=10 )
{
	int vol = 0;
	vol = l*b*h;
	return vol;
}
int main()
{
	int l , b , h , vol;
	char ch;
	cout << "Do you want to continue with the default (Y/N) ";
	cin >> ch;
	if (ch == 'Y'){
		vol = volume();
			cout << "Volume of the the cuboid is: " << vol;

	}
	else if (ch == 'N'){
		cout << "\nLength: "; cin >> l;
		cout << "\nBreadth: "; cin >> b;
		cout << "\nHeight: "; cin >> h;
		vol = volume (l , b , h);
			cout << "Volume of the the cuboid is: " << vol;

	}
	else if (ch != 'Y' || ch != 'N'){
		cout << "INPUT INVALID" << endl;
		cout << "Process returned with error code (1)";
		}
	return 0;
}
