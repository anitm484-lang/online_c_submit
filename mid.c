#include <stdio.h>

int main() {
    int start, end, mid;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // calculate the midpoint (average)
    mid = (start + end) / 2;

    printf("\nEven numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nThe mid (average) value between %d and %d is: %d\n", start, end, mid);

    return 0;
}
