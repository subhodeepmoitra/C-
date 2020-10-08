#include "cppnumber.h"
#include <iostream>
int combination ( int n , int r )
{
	int combi = 0;
	combi = (factorial(n))/(factorial(n-r)*factorial(r));
	return combi;
}
int main()
{
	int n , r , combi;
	std :: cout << "n : ";
	std :: cin >> n;
	std :: cout << "\nr : ";
	std :: cin >> r;
	combi = combination (n,r);
	std :: cout << "\nnCr : " << combi;
	return 0;
}
