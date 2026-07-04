#include<stdio.h>
int main(){
int a[5] , b[5]  ;
for( int i = 0 ; i < 5 ; i++){

scanf(" %d %d", &a[i],&b[i]) ;
}

for( int i = 0 ; i < 5 ; i++){

int sum = a[i] + b[i];
printf(" the sum is : %d", sum);

}

for( int i = 0 ; i < 5 ; i++){
    printf(" elements of array a is : %d" , a[i]);
}




    return 0;
}