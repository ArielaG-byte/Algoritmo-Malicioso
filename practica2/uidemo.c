#include <stdio.h>
#include <unistd.h> // Incluir este encabezado para getuid() y geteuid()

int main() {
    printf("real uid: %d\n", getuid());
    printf("effective uid: %d\n", geteuid());
    return 0;
}
