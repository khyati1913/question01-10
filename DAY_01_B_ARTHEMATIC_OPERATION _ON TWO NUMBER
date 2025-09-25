Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

  // solution
  #include <stdio.h>

int main() {
    int a, b;
    // read two integers
    if (scanf("%d %d", &a, &b) != 2) {
        // input error
        return 1;
    }

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot;
    if (b != 0) {
        quot = a / b;
    } else {
        // avoid division by zero; you could handle differently
        printf("Error: division by zero\n");
        return 1;
    }

    // display results in the exact sample format
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);

    return 0;
}
