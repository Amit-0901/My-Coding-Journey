#include<stdio.h>
int main(){

//to demonstrate sizeod() operator

/*
sizeof operator is used to calculate the size of given array 

*/
// first array initialization
int n;
int arr[n];

// to put values of array
for(int i =0 ; i < n ; i++){
    printf("enter the array elements :");
    scanf(" %d ", & arr[i]);
}
printf(" the size of array is :" , sizeof(arr[n]));
    return 0;
}