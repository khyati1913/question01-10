Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
  //solution
  #include <stdio.h>
#include <math.h>



int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;
    double amount;
    int i;

    // Read inputs: principal, rate (as percent), time (in years)
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;  // input error
    }

    // Simple interest = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100.0;

    // Compound interest (compounded annually, using loop)
    amount = principal;
    for (i = 0; i < (int)time; i++) {
        // For each year, add the interest on the current amount
        amount = amount + (amount * rate / 100.0);
    }
    compoundInterest = amount - principal;

    // Print results. Using two decimal places.
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}

