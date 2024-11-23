#include <stdio.h>

int main() {
    int i, bit_a, bit_b;

    // Explicación de los operadores de archivo
    // O_RDONLY: Open file for read-only access.
    // O_WRONLY: Open file for write-only access.
    // O_RDWR: Open file for both read and write access.
    // O_APPEND: Write data at the end of the file.
    // O_TRUNC: If the file already exists, truncate the file to 0 length.
    // O_CREAT: Create the file if it doesn’t exist.

    printf("bitwise OR operator |\n");
    for(i = 0; i < 4; i++) {
        bit_a = (i & 2) / 2; // Get the second bit.
        bit_b = (i & 1); // Get the first bit.
        printf("%d | %d = %d\n", bit_a, bit_b, bit_a | bit_b);
    }

    printf("\nbitwise AND operator &\n");
    for(i = 0; i < 4; i++) {
        bit_a = (i & 2) / 2; // Get the second bit.
        bit_b = (i & 1); // Get the first bit.
        printf("%d & %d = %d\n", bit_a, bit_b, bit_a & bit_b);
    }

    return 0;
}
