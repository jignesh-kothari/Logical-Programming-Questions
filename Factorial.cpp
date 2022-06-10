// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n,f,i,ans;
    cout<<"Enter Number : ";
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial is : "<<f;
    return 0;
}
