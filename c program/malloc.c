#include <stdio.h>
#include <stdlib.h>

int main() {
    int *P1;

    // Allocate memory for one integer
    P1 = (int *)malloc(sizeof(int));
// printf(" the size of pointer p1 is : %d",sizeof(P1));
    // Check if memory allocation was successful
    if (P1 == NULL) {
        printf("Memory not allocated.\n");

        return 1; // Exit program if allocation failed
    }


//     // Use the allocated memory
//     *P1 = 25;
//     printf("Memory successfully allocated.\n");
//     printf("Value stored in allocated memory: %d\n", *P1);

//     // Free the allocated memory
//     free(P1);
//     printf("Memory freed successfully.\n");

//     return 0;

}
