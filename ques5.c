Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

  //solution
  #include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Read the temperature in Celsius
    if (scanf("%lf", &celsius) != 1) {
        // input error
        return 1;
    }

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    

    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}
