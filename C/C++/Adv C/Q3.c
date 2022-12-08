#include <stdio.h>
int main(){
    int a, b=1,c=1;
    a=sizeof(c=++b +1); 
    //after compile time, b=2, c=3
    //after run time a=4,size of int
    printf("a=%d, b=%d, c=%d",a,b,c);
   
    return 0;
}