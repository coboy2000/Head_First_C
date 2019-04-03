
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
    // running command ./bermudad | ./../page_106/Geo2Jsond < gpsdata.csv > output.json
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        // don't need to used {} in if but it will make more accurate reading
        if ((latitude > 26) && (latitude < 34))
        {
            if ((longitude > -76) && (longitude < - 64))
            {
                printf("{latitude : %f, longitude : %f, info : '%s'}", latitude, longitude, info);
            }
        }
    }    

    return 0;
}