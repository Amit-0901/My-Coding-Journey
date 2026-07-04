#include<stdio.h>
int main (){
float a , b ,c;
printf("enter value of a :");
scanf("%f",&a);
printf("enter value of b :");
scanf("%f",&b);



printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
   
int choice ;
printf("enter your choice : ");
scanf("%d", &choice);

    switch(choice)
    {
        case 1 : c = a + b ;
        printf("addition is %f " , c);
        break;

        case 2 : c = a - b ;
        printf("subtraction is %f " , c);
        break;

        case 3 : c = a * b ;
        printf("multiplication is %f " , c);
        break;

        case 4: c = a / b ;
        printf("division is %f " , c);
        break;



    }

    return 0 ;
}
