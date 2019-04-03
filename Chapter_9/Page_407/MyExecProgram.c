
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *my_env[] = {"JUICE=peach and apple", NULL};

    execle("dinner_info", "dinner_info", "4", NULL, my_env);
    
    printf("Dinners : %s\n", argv[1]);
    printf("Juice : %s\n", getenv("JUICE"));

    return 0;
}