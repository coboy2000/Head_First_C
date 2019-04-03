#include <stdio.h>

int main()
{
    char c[18] = "Bow ties are cool";
    printf("c is %p\n", c);
    printf("c[0] is %p\n", &c[0]);
    printf("c[1] is %p\n", &c[1]);
}
