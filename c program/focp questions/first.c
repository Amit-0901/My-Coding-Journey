#include<stdio.h>
int main(){
int a = 2,*ptr;
 ptr = &a;
 printf("%d %d", a,*ptr);

    return 0;

}
// #include <stdio.h>

// int main() {
//     long long int fact = 1;  // use long long for bigger results
//     int n;

//     printf("Enter the number to find factorial: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }

//     printf("The factorial of %d is: %lld\n", n, fact);

//     return 0;
// }
