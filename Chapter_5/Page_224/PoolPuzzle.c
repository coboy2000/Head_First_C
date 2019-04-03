
#include <stdio.h>
#include <string.h>

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void catalog(struct fish f)
{
    printf("%s is %s with %i teeh. he is %i years old\n",
        f.name, f.species, f.teeth, f.age);
}

/* temporary just fill blank the function */
void label(struct fish f)
{
    ;
}

int main (int argc, char *argv[])
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4};
    catalog(snappy);

    return 0;
}