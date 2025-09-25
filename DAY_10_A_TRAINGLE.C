Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
//solution
#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input the three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        return 1; // Error in input
    }

    // Check for Equilateral triangle
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    // Check for Isosceles triangle
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    }
    // If neither, it's a Scalene triangle
    else {
        printf("Scalene\n");
    }

    return 0;
}
