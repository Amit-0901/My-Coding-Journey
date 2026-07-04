#include <stdio.h>
#include <string.h>  // required for strlen()

int main() {
    char s1[100]; 
    printf("Enter a string: ");
    scanf("%s", s1);  
    
 printf("the string: %s \n " , s1);
    int length = strlen(s1);

    printf("The length of the string is %d\n", strlen(s1));
// char s1[100];
// printf("enter the string ");
// scanf("%s",&s1);

// printf("the string is %s",s1);
// int length = strlen(s1);
// printf("the length is %d \n",strlen(s1));

    return 0;
}


// string comparision , string concadination , string copying
