1 a) Write the output of the following C code.
#include <stdio.h>
int main()
{ int rows = 5;
 for (int i = 1; i <= rows; i++)
 {
 for (int j = 1; j <= rows; j++)
 if (j <= i)
 printf("C");
 printf("\n");
 }
 return 0;
}

output:
C
CC
CCC
CCCC
CCCCC
