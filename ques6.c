Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
  //solution
  #include <stdio.h>

int main() {
    int a, b, temp;

    // read two integers
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;  // input error
    }

    // swapping using temp variable
    temp = a;
    a = b;
    b = temp;

    // print after swap
    printf("After swap: %d %d\n", a, b);

    return 0;
}
