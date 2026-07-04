#include<stdio.h>
int main(){

    int a = 5 ;
    int *ptr;
    ptr = &a;

    printf(" the value of variable :%d \n",a);
        printf(" the address an also the value stored in pointer: %p \n",ptr);
    printf(" the value accessed : %d \n", *ptr);







    return 0;
}