#include<stdio.h>
#include<string.h>
  
int main(){
    char str1[100],s2[100];
    printf("enter first string:");
    gets(str1);
     int len = strlen(s2);
      printf(" the reverse string is s2 \n");
    for(int i = len -1; i>=0 ; i--){
        printf("%c",s2[i]);
    }
    
    if(strcmp(str1,s2)==0){
    printf("string are equal\n");
}
else {
    printf("string are not equal");
}

    
    return 0;
}
   
