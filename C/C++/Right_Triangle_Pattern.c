#include <stdio.h>
int main(){
    int n;
    printf("Enter Number of Lines:\n");
    scanf("%d",&n);

    //loop for no. of lines
    for(int row=1; row<=n;row++)
    {  
        //loop to print
        for(int col=1; col<=row;col++)
        {
        printf("*");
        }
    
        
        printf("\n");
        
    }
    return 0;
}