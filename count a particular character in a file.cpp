#include <iostream>
#include <fstream>
using namespace std;
int fcchar( char x , char name[] )
{
	ifstream fin;
	fin.open ( name );
	char ch;
	int count = 0;
	while (!fin.eof())
	{
		fin.get(ch);
		if (ch == x){
			count++;
		}
	}
	return count;
	fin.close();
}
int main()
{
	char ch , name[300];
	int count;
	cout << "Enter the name of the file : ";
	cin >> name;
	cout << "\nEnter a character to count its occurance: ";
	cin >> ch;
	count = fcchar( ch , name );
    cout << "\nThe total number of " << ch << " is : " << count << endl;
}
