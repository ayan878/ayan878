#include<stdio.h> // include stdio.h

int main() 
{
    int n;

    printf("Enter number of lines:\n");
    scanf("%d", &n);

    // loop for line number of lines
    for(int row = 1; row <= n; row++)
    {   
        // loop to print leading spaces in each line
        for(int space = 0; space <= n - row; space++)
        {
            printf("---"); // given 3 space given from left
        }

        // loop to print *
        for(int col = 1; col <= row * 2 - 1; col++)
        {
            printf(" * ");
        }               

        printf("\n");
    }

    return 0;
}