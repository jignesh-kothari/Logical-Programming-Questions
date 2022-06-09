//Printing Prime numbers till N
#include<iostream>
using namespace std;
int main()
{
    int i, chk=0, j, b;
    cin>>b;
    for(i=1; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<" ";
        chk = 0;
    }
    cout<<endl;
    return 0;
}
