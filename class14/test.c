#include <stdio.h>

int main() {
    int i, j, k;

    i = 1;
    j = 3;

	
    if (j) {
        j--; // Decrement j if it is non-zero
    } else {
        i++; // Increment i if j is zero
    }

    if (i) {
        i--; // Decrement i if it is non-zero
    } else {
        j++; // Increment j if i is zero
    }

    k = i + j; // Calculate k as the sum of i and j
    printf("%d", k); // Print the result

    return 0;
}
