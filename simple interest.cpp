#include <iostream>
float interest (float p , float r , float t)
{
	float si = 0;
	si = (p*r*t)/100;
	return si;
}
int main ()
{
	float p , t , age ,si;
	std :: cout << "Principal: "; std :: cin >> p; 
	std :: cout << "Time: "; std :: cin >> t;
	std :: cout << "Age: "; std :: cin >> age;
	if (age < 60){
		float r = 10;
		si = interest(p,r,t);
	}
	else if (age >= 60){
		float r = 12;
		si = interest(p,r,t);
	}
	std :: cout << "Simple Interest: " << si;
	return 1;
}
