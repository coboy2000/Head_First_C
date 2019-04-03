
#include <stdio.h>
#include <string.h>

struct excercise
{
    const char *description;
    float duration;
};

struct meal
{
    const char *ingredients;
    float weight;
};

struct preferences 
{
    struct meal food;
    struct excercise excercise;
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void catalog(struct fish f)
{
    printf("%s is %s with %i teeh. he is %i years old\n",
        f.name, f.species, f.teeth, f.age);
}

/* temporary just fill blank the function */
void label(struct fish f)
{
    printf("%s is %s with %i teeh. he is %i years old\n",
        f.name, f.species, f.teeth, f.age);
    printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
        f.care.food.weight, f.care.food.ingredients,
        f.care.excercise.description, f.care.excercise.duration);
}

int main (int argc, char *argv[])
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"Meat", 0.2}, {"Swin the Jacuzzi", 7.5}}};
    label(snappy);

    return 0;
}