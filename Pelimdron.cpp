#include <iostream>
using namespace std;

int main() 
{
    int n,r,sum=0,rev=0;
    cout<<"Enter Number : ";
    cin>>n;
    rev=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if(sum==rev)
        cout<<rev<<" is Pelimdron Number";
    else
        cout<<rev<<" is Not a Pelimdron Number";
    return 0;
}
