b) Write a C program that reads a positive integer N and prints the following pattern for n rows.
For example, if N is 5, then the output would be:
*********
*******
*****
***
*

#include<stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N= ");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=2*row-1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
