
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    printf("On this machine an int takes up %llu bytes\n", sizeof(int8_t));
    printf("On this machine an int takes up %llu bytes\n", sizeof(int));
    printf("And ints can store values from %i to %i\n", INT_MIN, INT_MAX);
    return 0;
}