Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
  //solution
  #include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Input
    if (scanf("%d", &total_seconds) != 1) {
        // error reading input
        return 1;
    }

    // Compute hours, minutes, seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Output in H:M:S format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
