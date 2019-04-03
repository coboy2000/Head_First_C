#include <stdio.h>

typedef enum
{
    DUMP,
    SECOND_CHANGE,
    MARRIAGE
} response_type;

typedef struct 
{
    char *name;
    response_type type;
} response;

void dump(response r)
{
    printf("Dear %s\n", r.name);
    puts("Unfortunately your last date contacted us to");
    puts("say that they will not seeing you again");
}

void second_change(response r)
{
    printf("Dear %s\n", r.name);
    puts("Good news : your last date has asked us to");
    puts("arrange another meeting. Please call ASAP");
}

void marriage(response r)
{
    printf("Dear %s\n", r.name);
    puts("Congratulations ! Your last date has contacted");
    puts("us with proposal of marriage");
}

int main(int argc, char *argv[])
{
    response r[] = 
    {
        {"Mike", DUMP},
        {"Luis", SECOND_CHANGE},
        {"Matt", SECOND_CHANGE},
        {"William", MARRIAGE}
    };

    int i;

    for (i = 0; i < 4; i++)
    {
        switch(r[i].type)
        {
            case DUMP:
                dump(r[i]);
                break;
            case SECOND_CHANGE:
                second_change(r[i]);
                break;
            default :
                marriage(r[i]);
                break;
        }
    }
    return 0;
}