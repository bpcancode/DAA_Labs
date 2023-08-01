#include<stdio.h>

void display_arr(int arr[]) {
    printf("\n");
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d,", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 34, 55, 105, 6004};
    int key;

    printf("Enter a search key: ");
    scanf("%d", &key);

    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        if(key == arr[i]) {
            printf("%d is found in index %d", key, i);
            return;
        }
    }

    printf("No key found in arr");
}