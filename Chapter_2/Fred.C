
#include <stdio.h>
#include <string.h>

int main()
{
    char s[][3] = {"AB", "CD"};
    char* t[3] =  {"AB", "CD"};
    char **fred = s;

    if (s == s[0])
        puts("Equal???");
    printf("s at %p\n", s);
    printf("sizeof(s) is %i\n", sizeof(s));
}