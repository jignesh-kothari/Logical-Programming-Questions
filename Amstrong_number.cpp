#include <iostream>
using namespace std;

int main() {
    
    int n, temp, sum=0, r;
    cout<<"Enter Number : ";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n/=10;
    }
    if(sum==temp)
        cout<<temp<<" Is Amstrong Number";
    else
        cout<<temp<<" Is Not a Amstrong Number";
    return 0;
}
