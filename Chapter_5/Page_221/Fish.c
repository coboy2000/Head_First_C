
#include <stdio.h>
#include <string.h>

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

/* temporary just fill blank the function */
void catalog(struct fish f)
{
    ;
}

/* temporary just fill blank the function */
void label(struct fish f)
{
    ;
}

int main (int argc, char *argv[])
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4};
    printf("Name = %s\n", snappy.name);
    catalog(snappy);
    label(snappy);

    return 0;
}