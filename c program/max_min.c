#include<stdio.h>
int main(){

    int a[5];
    for(int i =0 ; i<5;i++){
printf("enter the %d th element of the array  " , i);
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
     for( int i = 0 ; i<5 ; i++){

        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
     }
     printf(" the max value in the array is %d \n" ,max);
     
     printf(" the min value in the array is %d \n ",min);

     int sum = 0 ;
     for( int i = 0; i<5 ; i++){

        sum += a[i];
     }
 printf( " the sum is %d \n " , sum);
     int average = sum / 5 ;
     printf( " the average is %d \n" , average);

     for( int i = 0 ; i< 4; i++){
        for ( int j = i+ 1; j<5;j++){
            if( a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }


        }
     }
     printf(" array in ascending order is ");
       for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }



    return 0;
}