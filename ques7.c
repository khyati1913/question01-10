Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
//solution
#include <stdio.h>

int main() {
    int a, b;
    // read two integers
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    // swap without third variable using arithmetic
    a = a + b;
    b = a - b;  // now b is original a
    a = a - b;  // now a is original b

    // print result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
