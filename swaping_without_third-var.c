/*#include <stdio.h>
#include <conio.h>

void main() 
{ 
int a=111,b=10; 
b=(a+b)-(a=b);      
printf("\nB is %d",b);
printf("\nA is %d",a);
getch(); 
}*/

//using betwise operator
#include <stdio.h>
int main()
{
int a=11;
int b=20;
b=a^b;
a=a^b;
b=a^b;
printf("%d %d",a,b);
return 0;
}
