#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid;  
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return -1; 
}

int main() {
    int arr[] = {2, 3, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
