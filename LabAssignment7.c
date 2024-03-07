#include <stdio.h>
int bubbleSort(int arr[], int n) {
    int i, j, temp, swaps = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}
int selectionSort(int arr[], int n) {
    int i, j, min_idx, temp, swaps = 0;
    for (i = 0; i< n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        swaps++;
    }
    return swaps;
}
int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    printf("array1:\n");
    for (int i = 0; i < n1; i++) {
        int swaps = bubbleSort(array1, n1);
        printf("%d: %d times swapped\n", array1[i], swaps);
    }
    printf("Total swaps for array1: %d\n\n", bubbleSort(array1, n1));
    printf("array2:\n");
    for (int i = 0; i < n2; i++) {
        int swaps = selectionSort(array2, n2);
        printf("%d: %d times swapped\n", array2[i], swaps);
    }
    printf("Total swaps for array2: %d\n\n", selectionSort(array2, n2));
    return 0;
}