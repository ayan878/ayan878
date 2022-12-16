#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^b]%*c", &s);
    //%[^b] is encounter b it is used for taking multiple word
    //if i enter ayanbraza it only print ayan
  	printf("Hello, World!\n%s",s);  
    return 0;
}