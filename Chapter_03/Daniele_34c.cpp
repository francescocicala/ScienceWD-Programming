#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	cout << "Insert N \n"; //prompt for imput and read number from user
	unsigned int n; 
	cin >> n;       // input number

	cout << "Insert x \n";  
	float x;
	cin >> x;

	unsigned int i = { 1 };
	unsigned int factorial = { 1 };
	float        total = { 1 };
	while( i <= n )
	{
	   factorial = factorial * i; 
	   total     = total + pow( x, i ) /factorial;
	   i = i + 1;
	}
	cout << total << " " << x << " "<< n << "\n";
	
	return 0;
}
	
