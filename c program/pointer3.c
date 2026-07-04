#include<stdio.h>
int main (){
int a[] = {1,2,30,20,40};
int *b= a;


for(int i=0;i<5;i++){

    printf("array  [%d] :  %d : adress %p\n",i,a[i], b);
    b++;
}

    return 0;

}