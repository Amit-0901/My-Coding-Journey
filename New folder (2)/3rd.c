//program to find sum nd average of two arrays
#include<stdio.h>
int main(){
 int arr[5] = { 1,2,3,4,5};
 int sum , average ;
 sum = 0 ;

 for ( int i = 0 ; i<5 ; i++){
    sum += arr[i];
 }

 printf("the sum is : %d",sum);
 average = sum / 5 ;

printf(" the average is %d",average);

    return 0;
}