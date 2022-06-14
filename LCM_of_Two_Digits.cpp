#include <iostream>
using namespace std;
int main() {
    int a,b,r,lcm;
    cout<<"Enter Two Numbers(First Number Should be big) : ";
    cin>>a>>b;
    while(1)
    {
        lcm=r;
        r=a%b;
        if(r==0)
            break;
        else
            a*=2;
    }
    cout<<"LCM Is : "<<a;
    return 0;
}
