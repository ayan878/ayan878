#include <stdio.h>
int main(){
    int n,col;
    printf("Enter Number of Lines:\n");
    scanf("%d",&n);
    for(int row=1; row<=n;row++)
    { 
        //loop to print
        for(col=1; col<=n+1-row;col++)
        {
        printf("*");
       
        }
        printf("\n");
    }
    return 0;
}