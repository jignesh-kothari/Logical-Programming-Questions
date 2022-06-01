// C++ program to check if two numbers are equal
// without using arithmetic operators or
// comparison operators
#include <iostream>
using namespace std;
 
int main()
{
   int x = 10;
   int y = 10;
    
   if (!(x ^ y))
      cout << " x is equal to y ";
   else
      cout << " x is not equal to y ";
       
   return 0;
}
