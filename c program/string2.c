#include<stdio.h>
#include<string.h>
int main (){
    int n;
printf(" enter the number of character in string : ");
scanf(" %d " , &n);
char str[n];

for( int i = 0 ; i < n ; i++){
    scanf(" %c ", & str[i]);
}

printf("the length of string is : %d ", strlen(str));
    return 0;
}