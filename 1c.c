c) You will be given some positive integer inputs followed by a negative value. You have to print
the sum of the given positive inputs except the ones which are divided by 5 or 7. You have to
calculate their average also. Write a C program for this by using break statement after getting
the negative input and continue statement if the input is divided by 5 or 7.
Sample Input Sample Output
5 6 2 8 7 8 -1
Sum = 24
Average = 6.0

#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    while (1) {
        scanf("%d", &num);
        
        if (num < 0) {
            break;
        }

        if (num % 5 == 0 || num % 7 == 0) {
            continue;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No valid numbers entered.\n");
    }

    return 0;
}
