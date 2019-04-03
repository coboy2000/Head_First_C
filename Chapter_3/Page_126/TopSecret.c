
#include <stdio.h>
#include <time.h> 

#define MAX_LEN 100

void mesure_exec_time()
{
    clock_t launch = clock();

    
    clock_t done = clock();
    double diff = (done - launch) / CLOCKS_PER_SEC;
    printf("took %f seconds to execute \n", diff);
}

int main(int argc, char **argv)
{
    
    char word[10];
    int i = 0;

    while (scanf("%9s", word) == 1)
    {
        i = i + 1;
        if (i % 2)
        {
            //printf("%i % 2 = %i\n", i, (i % 2));
            fprintf(stdout, "%s\n", word);
        }
        else
        {
            //printf("%i % 2 = %i\n", i, (i % 2));
            fprintf(stderr, "%s\n", word);
        }

    }

    

    return 0;
}