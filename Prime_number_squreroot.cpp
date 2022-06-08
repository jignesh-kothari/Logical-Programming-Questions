#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "enter Number : ";
    cin>>n;
    int flag=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"Given number is a prime number"<<endl;
    else
        cout<<"Given number is not a prime number"<<endl;
    return 0;
}
