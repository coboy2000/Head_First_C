#include <stdio.h>

void go_south_east(int lat, int lon)
{
    lat = lat - 1;
    lon = lon + 1;
}

int main()
{
    int latitute = 32;
    int longitude = -64;

    go_south_east(latitute, longitude);

    printf("Avast! Now at : [%i, %i]\n", latitute, longitude);

    return 0;
}