#include <stdio.h>

void divide(int arr[], int start, int end, int *count) {
    if (start >= end) {
        return;
    }
    
    int mid = (start + end) / 2;
    divide(arr, start, mid, count);
    divide(arr, mid + 1, end, count);
    (*count)++;
}

int main() {
    int n;
    printf("the Size of the array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    
    divide(arr, 0, n, &count);
    
    printf("Number of iterations: %d\n", count);
    
    return 0;
}
