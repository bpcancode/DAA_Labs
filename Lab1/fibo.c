#include<stdio.h>

int fibo(int n) {
    int first = 0;
    int second = 1;
    
    if (n == 1) {
        return first;
    } else if ( n == 2) {
        return second;
    } else {
        for( int i=3; i<=n; i++) {
            int temp = first+second;
            first = second;
            second = temp;
        }
        return second;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d th term fibonachhi number is %d", n, fibo(n));
}