#include<stdio.h>

int main() {
    int arr[] = {1, 9, 34, 55, 4, 5, 6, 10, 11, 12, 2, 3, 7, 8, 105, 6004};

    int len = sizeof(arr)/sizeof(int);

    for(int i=0; i<len; i++) {
        for(int j=0; j<len-1; j++) {
            if(arr[j+1] < arr[j]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array is: \n");
    for(int i=0; i<len; i++) {
        printf("%d, ", arr[i]);
    }
}