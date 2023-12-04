A prime number (or a prime) is a natural number greater than 1 that is not a product of two
smaller natural numbers. In this problem, you will be given T test cases. Each test case consists
of one line containing a single nonnegative integer N. For each test case, print Prime number
if the number N is a prime number. Otherwise, print Not a prime number.
Sample Input Sample Output
2
11
12
Prime number
Not a prime number
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int isPrime = 1;

        if (N <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= N; i++) {
                if (N % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("Prime number\n");
        } else {
            printf("Not a prime number\n");
        }
    }

    return 0;
}

