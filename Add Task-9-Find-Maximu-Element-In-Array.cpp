#include <stdio.h>

int main() {
    int arr[100]; // declare an array of size 100
    int i, n, max;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; // assume the first element is the maximum

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
