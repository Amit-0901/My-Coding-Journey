#include<stdio.h>
int main(){
int a = 100;
char z ='a';
float x=1.000;
int *b = &a;
char*d =&z;
float *g=&x;
printf("the value of a is = %d \n", *b);
printf("value of character is = %c \n", *d);
printf("value of x is = %f \n", *g);



    return 0;
}