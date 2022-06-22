//c++ program to print following pattern
/*
Enter Value For Patten : 6
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/

#include <iostream>
using namespace std;
int main() {
    
    int i,j,n,ch=64;
    cout<<"Enter Value For Patten : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ch=64;
        for(j=1;j<=i;j++)
        {
            ch+=1;
            cout<<(char)ch;
        }   
        cout<<"\n";
    }
    return 0;
}
