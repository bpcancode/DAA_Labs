#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 10, 15, 18, 23, 26, 28, 29, 43, 46, 80, 100};

    int key;

    printf("Enter a search key: ");
    scanf("%d", &key);

    int first = 0, last = sizeof(arr)/sizeof(int);

    int mid = (first+last)/2;

    while(1) {
        if(arr[mid] == key) {
            printf("Key %d is in index %d", key, mid);
            break;
        } else if (mid == first) {
            printf("No key found");
            break;
        } else if(arr[mid] > key) {
            last = mid;
        } else if (arr[mid] < key) {
            first = mid;
        } 
        mid = (first+last)/2;
    }


}