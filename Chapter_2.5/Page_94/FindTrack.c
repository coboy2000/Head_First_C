
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

/* In the book the tracks are without \n */
    char tracks[][MAX_LEN] = {
        "I left my heart in harvard Med school",
        "Newark, Neward - a wonderful town",
        "Dancing with a dork",
        "From here to maternity",
        "The Girl from Iwo Jima"
    };

void find_track(char search_for[], char track_list[][MAX_LEN])
{
    int i;
    char *result;
    for (i = 0; i < 5; i++)
    {
        char *str = track_list[i];
        char *substr = search_for;
        if (strstr(track_list[i], search_for))
        {
            printf("Tracks %i : '%s'\n", i, track_list[i]);
        }
        result = strstr(substr, str);
        // printf("Text : '%s' search_for '%s' value is '%s'\n", track_list[i], search_for, result);
    }
}

int main()
{
    
    char search_for[MAX_LEN];

    printf("Search for : ");
    //fgets(search_for, sizeof(search_for), stdin);
    scanf("%79s", search_for); 
    find_track(search_for, tracks);

    return 0;
}


/*
#include <stdio.h>
#include <string.h>
int main () {
   const char str[20] = "Hello, how are you?";
   const char searchString[10] = "you";
   char *result;

   result = strstr(str, searchString);
   printf("The substring starting from the given string: '%s'", result);
   return 0;
}
*/