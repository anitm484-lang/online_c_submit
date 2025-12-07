#include <stdio.h>

int main() {
    int start, end, mid;

    // Input range from user
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    // Calculate the mid (average of range)
    mid = (start + end) / 2;

    printf("\nEven numbers between %d and %d are:\n", start, end);

    int i = start;
    while (i <= end) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\nMid (average) of range = %d\n", mid);

    return 0;
}
