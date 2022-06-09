//Reverse a Number
#include <iostream>
using namespace std;
int main() 
{
    int n, rem=0, reverse;
    cin>>n;
  	while(n!=0)    
    {    
         rem=n%10;      
         reverse=reverse*10+rem;    
         n/=10;   
    }
  	cout<<reverse;
    return 0;
}
