#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Insert N \n"; //prompt for imput and read number from user
	unsigned int n; 
	cin >> n;       // input number
	
	
	unsigned int i = { 1 };
	unsigned int factorial = { 1 };
	
	while( i <= n )
	{
	   factorial = factorial * i; 
	   i = i + 1;
	}
	cout << factorial << "\n";
}
	
