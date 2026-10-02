#include <stdio.h>
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Linear: Element is present at index %d\n", result);
    } else {
        printf("Element is not present\n");
    }
    result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) {
        printf("Binary: Element is present at index %d\n", result);
    } else {
        printf("Element is not present\n");
    }
    return 0;
}