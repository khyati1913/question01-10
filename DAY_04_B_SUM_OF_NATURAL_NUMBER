Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
  // solution
  #include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;

    // read how many natural numbers to sum
    if (scanf("%d", &n) != 1) {
        return 1;  // input error
    }

    // assume n >= 1
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum=%d\n", sum);
    return 0;
}
