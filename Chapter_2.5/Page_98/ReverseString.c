
#include <stdio.h>
#include <string.h>
#include <time.h> 

#define MAX_LEN 100

void print_reverse(char *s)
{
    clock_t launch = clock();

    size_t len = strlen(s);
    char *t = s + len -1;

    while (t >= s)
    {
        // %c => for character
        printf("%c", *t);
        t = t - 1;
    }
    puts("");

    clock_t done = clock();
    double diff = (done - launch) / CLOCKS_PER_SEC;
    printf("took %f seconds to execute \n", diff);
}

int main(int argc, char **argv)
{
    char entered_string[MAX_LEN];

    puts("Enter a String Max 100 character : ");
    fgets(entered_string, sizeof(entered_string), stdin);
    printf("\n");

    print_reverse(entered_string);

    return 0;
}