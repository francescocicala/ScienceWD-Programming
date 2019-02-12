#include <iostream>
#include <string>
#include <math.h>

#include "Daniele_53.h" // header containing the function maximum
using namespace std;




int main()
{
   int int1;
   int int2;
   
   float float1;
   float float2;
   
   char char1;
   char char2;
   
   cout << "Input two integer values ";
   cin  >> int1 >> int2;
   
   cout << "The maximum integer value is: " << maximum( int1, int2 ) << endl;
   
   cout << "Input two floating point number values ";
   cin  >> float1 >> float2;
   
   cout << "The maximum floating point number value is: " << maximum( float1 , float2 ) << endl;
   
   cout << "Input two character values ";
   cin  >> char1 >> char2;
   
   cout << "The maximum character value is: " << maximum( char1, char2 ) << endl;
   	
}
