#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 2;       // start checking from 2
    int isPrime = 1; // assume number is prime

    while (i < n) {
        if (n % i == 0) {   // if n is divisible by i
            isPrime = 0;    // not a prime number
            break;          // stop checking
        }
        i++; // move to next number
    }

    if (n <= 1) { //for n = 1
        printf("Not a prime number\n");
    } else if (isPrime == 1) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}
