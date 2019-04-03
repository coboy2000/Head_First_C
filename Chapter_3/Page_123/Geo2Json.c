
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
    float latitude, longitude;
    char info[MAX_LEN];
    int started = 0;

    puts("data=[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
            printf(",\n");
        else
            if ((latitude < -90.0) || (latitude > 90.0))
            {
                // printf("Invalid latitude : %f\n", latitude);
                fprintf(stderr,"Invalid latitude : %f\n", latitude);
                return 2;
            }
            if ((longitude < -180.0) || (longitude > 180.0)) 
            {
                // printf("Invalid longitude : %f\n", longitude);
                fprintf(stderr,"Invalid langitude : %f\n", longitude);
                return 2;
            }

        printf("{latitude : %f, longitude : %f, info : '%s'}\n", latitude, longitude, info);
    }
    puts("]");

    return 0;
}