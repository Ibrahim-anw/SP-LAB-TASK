#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    while (start < end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

       
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
