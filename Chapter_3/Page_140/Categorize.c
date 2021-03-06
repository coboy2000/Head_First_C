
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

#define MAX_LEN 80

void mesure_exec_time()
{
    clock_t launch = clock();

    
    clock_t done = clock();
    double diff = (done - launch) / CLOCKS_PER_SEC;
    printf("took %f seconds to execute \n", diff);
}

int main(int argc, char **argv)
{
    char line[MAX_LEN];    

    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen("ufos.csv", "w");
    FILE *file2 = fopen("dissapearances.csv", "w");
    FILE *file3 = fopen("others.csv", "w");

    if (!(in= fopen("spooky.csv", "r")))
    {
        fprintf(stderr, "Can't open the input file 'spooky.csv'\n");
        return 1;
    }

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, "UFO"))
        {
            fprintf(file1, "%s\n", line);
            // char *ret = strstr(line, "UFO");
            // printf("%s = %s\n", line, ret);
        }
        else if (strstr(line, "Disappearance"))
        {
            fprintf(file2, "%s\n", line);
        }
        else
        {
            fprintf(file3, "%s\n", line);
        }

    }
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}