#include <stdio.h>
#include <string.h>
int main() {
 char str_a[20];
 char *pointer;
 char *pointer2;
 strcpy(str_a, "Hello, world!\n");
 pointer = str_a;
 printf(pointer);
 pointer2 = pointer + 2;
 printf(pointer2);
 strcpy(pointer2, "y you guys!\n");
 printf(pointer);
}

int addressof() {
    int int_var = 5;
    int *int_ptr;
    int_ptr = &int_var; // put the address of int_var into int_ptr
}

int addressof_2() {
    int int_var = 5;
    int *int_ptr;
    int_ptr = &int_var; // Put the address of int_var into int_ptr.
    printf("int_ptr = 0x%08x\n", int_ptr);
    printf("&int_ptr = 0x%08x\n", &int_ptr);
    printf("*int_ptr = 0x%08x\n\n", *int_ptr);
    printf("int_var is located at 0x%08x and contains %d\n", &int_var, int_var);
    printf("int_ptr is located at 0x%08x, contains 0x%08x, and points to %d\n\n",
    &int_ptr, int_ptr, *int_ptr);
}
