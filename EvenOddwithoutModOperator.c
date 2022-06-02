#include <stdio.h>
#include <string.h>
int main()
{
int a=7;
( a & 1 == 1)? printf(" odd number\n") : printf(" even number \n");
return 0;
}


/*
in c++

#include <iostream>
 
using namespace std;
 
int main()
{
    char arr[2][5] = { "Even", "Odd" };
    int no;
    cout << "Enter a number: ";
    cin >> no;
    cout << arr[no % 2];
    getchar();
    return 0;
}*/
