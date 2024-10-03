#include <stdio.h>
int main() {
    float num1, num2, num3, num4, num5;
    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    float sum = num1 + num2 + num3 + num4 + num5;
    float average = sum / 5.0;
    printf("The average of the five numbers is: %.2f\n", average);
    return 0;
}
