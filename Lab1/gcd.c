#include <stdio.h>

int calculateGCD(int a, int b) {
    if(a == 0) {
        return b;
    }
    while(b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf( "GCD of %d and %d is %d" ,a, b, calculateGCD(a, b));
}