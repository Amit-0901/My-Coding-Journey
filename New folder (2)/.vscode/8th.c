#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a word (no spaces)

    length = strlen(str);  // find length of string

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);  // print characters from end to start
    }

    printf("\n");
    return 0;
}
