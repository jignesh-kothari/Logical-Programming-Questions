/* 

Program in C to print the Hollow Number Diamond Pattern

Sample Input:

4

Sample Output:

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

--------------------------------

*/
#include<stdio.h>
int main()
{
printf("Enter the number of rows to show the star pattern:  ");
int n, x,  y,  s = 1, k;
scanf("%d",&n);
for(x = 0; x <= n; x++)
{
for(y = n; y > x; y--)
{
printf(" ");
}
printf("*");
if (x > 0)
{
for(k = 1; k <= s;  k++)
{
printf(" ");
}
s += 2;
printf("*");
}
printf("\n");
}
s -= 4;
for(x = 0; x <= n -1; x++)
{
for(y = 0; y <= x; y++)
{
printf(" ");
}
printf("*");
for(k = 1; k <= s; k++)
{
printf(" ");
}
s -= 2;
if(x != n -1)
{
printf ("*");
}
//ending line after each row
printf("\n");
}
return 0;
}
