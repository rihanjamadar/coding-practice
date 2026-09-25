#include <stdio.h>

int main() {
    int a;
    char b;
    float c;

    // 1. Prompt and scan integer
    printf("Enter a number: ");
    scanf("%d", &a);

    // 2. Prompt and scan character (note the space before %c)
    printf("Enter a character: ");
    scanf(" %c", &b);

    // 3. Prompt and scan float
    printf("Enter a float number: ");
    scanf("%f", &c);

    // Display the results cleanly
    printf("\n--- RESULTS ---\n");
    printf("Number: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %.2f\n", c);

    return 0;
}
