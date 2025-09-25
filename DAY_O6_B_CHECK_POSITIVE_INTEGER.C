Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
//solution
#include <stdio.h>

int main() {
    int num;

    // Read integer input
    if (scanf("%d", &num) != 1) {
        return 1;  // error, no valid integer input
    }

    // Nested if-else to check positive / negative / zero
    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
