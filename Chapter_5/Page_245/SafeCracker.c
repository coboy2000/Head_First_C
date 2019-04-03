
#include <stdio.h>


typedef struct
{
    const char *description;
    float value;
} swag;

typedef struct
{
    swag *swag;
    const char *sequence;
} combination;

typedef struct 
{
    combination numbers;
    const char *make;
} safe;

int main (int argc, char *argv[])
{
    
    swag gold = {"GOLD", 1000000.00};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};

    printf("Password : %s\n", s.numbers.swag->description);

    return 0;
}