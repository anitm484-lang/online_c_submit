#include <stdio.h>
#include <ctype.h>   // for toupper() and tolower()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Uppercase: %c\n", toupper(ch));
    printf("Lowercase: %c\n", tolower(ch));

    return 0;
}

