#include<stdio.h>
#include<string.h>
int main (){

char s1[100];
char s2[100];

printf(" enter the string : ");
scanf("%s",s1);

printf(" display string 1 : %s \n", s1);
strcpy( s2 , s1);

printf(" display string 2 : %s \n", s2);

printf(" the length of string 1 and 2 is : %d \n", strlen(s1));

// new is string concardination two string in 1
strcat( s1 , s2 );
printf(" the new string is : %s", s1);


    return 0;
}
