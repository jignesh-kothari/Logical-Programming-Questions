#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char n[50], t;
    int i, j;
    cout << "Enter a Word : ";
    cin>>n;
    i = strlen(n) - 1;
    for (j = 0; j < i; j++,i--)
    {
        t = n[j];
        n[j] = n[i];
        n[i] = t;
    }
    cout << "\nReverse Word : " << n;
    return 0;
}
