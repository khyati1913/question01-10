Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
  // solution
  #include <stdio.h>

int main() {
    int r;
    double area, circumference;
    const double PI = 3.14159;

    // read integer radius
    if (scanf("%d", &r) != 1) {
        return 1;  // error in input
    }

    // computing area and circumference
    area = PI * r * r;
    circumference = 2 * PI * r;

    // printing with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
