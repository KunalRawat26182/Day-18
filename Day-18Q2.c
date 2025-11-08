#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF using Euclidean algorithm
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;

    printf("%d", hcf);

    return 0;
}
