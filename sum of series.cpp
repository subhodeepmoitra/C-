#include <iostream>
#include <math.h>
#include "cppnumber.h"
int sum ( int n )
{
	int s = 0;
	for (int i = 1 ; i <= n ; i++){
		s = s + ( pow(i,i)/factorial(i) );
	}
	return s;
}
int main()
{
	int n, s;
	std :: cout << "Enter the number of terms: ";
	std :: cin >> n;
	s = sum (n);
	std :: cout << "\nThe sum of the series is : " << s;
	return 0;
}
