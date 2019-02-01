#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int   counter = {1};
	int   sign    = {1};
	float total   = {1};
	
	for ( counter = 1 ; counter <= 1000 ; counter = counter + 1 )
	{
		sign = - sign ;
	    total = total  + sign *  1.0 / ( counter * 2.0 + 1.0) ;
    }
    
    cout << "pi=" << 4 * total  << endl;
    
    return 0;
}
	
