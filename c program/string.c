#include<stdio.h>
int main(){

    int n;
    printf(" number of character in string is : ");
    scanf(" %d", &n);

    char s[n]  ;
   
    for( int i = 0 ; i < n ; i++){
scanf(" %c", &s[i]);
    }

      for( int i = 0 ; i < n ; i++){
             printf(" %c ", s[i]);

    }
    printf("\n");
  

return 0 ;
}