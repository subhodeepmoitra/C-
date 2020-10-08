// Calculation of nPr using function
#include <iostream>
#include "cppnumber.h" // my self created header file
int permutation ( int n , int r )
{
	int permu = 0;
	permu = (factorial(n))/factorial(n-r);
	return permu;
}
int main()
{
	int n , r , permu;
	std :: cout << "n : ";
	std :: cin >> n;
	std :: cout << "\nr : ";
	std :: cin >> r;
	permu = permutation (n,r);
	std :: cout << permu;
	return 0; 
}
