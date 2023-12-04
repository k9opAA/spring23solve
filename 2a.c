a) int magic (int n) {
 int m = 0;
 m += n;
 return m;
}
int main () {
 for (int i = 1; i <= 5; i++) {
 printf("%d ", magic (i));
 }
 return 0;
}
i) Write the output produced by the code snippet above.
ii) You’re not allowed to make any changes in the main() function. Change the program so
that it would output the cumulative sum from 1 to 5, i.e. it would output 1 3 6 10 15.

i)
1 2 3 4 5
ii)
#include <stdio.h>

int magic(int n) {
    static int m = 0; 
    m += n;
    return m;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", magic(i));
    }
    return 0;
}
