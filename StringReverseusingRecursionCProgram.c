#include <stdio.h>  
#include <string.h>  
  
void revstr(char *str1)  
{    
    int i, len, temp;  
    len = strlen(str1);
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(str); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function   
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  
