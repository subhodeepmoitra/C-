// This program is 100% OK and has been checked by Subroto Sir
#include <iostream>
using namespace std;
void line(int n = 80, char ch = '-')
{
	for(int i = 1; i<= n; i++)
		cout << ch << "";
	cout << endl;
}
int main()
{
	int  m = 80;
	char c, choice, ch = '-';
	cout << "Do you wish to continue with the default case (y/n): ";
	cin >> choice;
	if (choice == 'y')
        line();
    else if (choice == 'n')
    {
    	cout << "Enter the character: ";
    	cin >> c;
    	cout << "Enter the number of terms the character will be printed: ";
    	cin >> m;
    	line(m , c);
    }
    cout << endl;
    return 0;
}