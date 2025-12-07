#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Convert to upper and print
    printf("The upper name is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
    }

    // Convert to lower and print
    printf("\nThe lower name is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }

    return 0;
}

