/*
 * Program To Calculate the Number of cards in the shoe.
 * This code is released under the Vegas Public License.
 * (c) 2014, The College Blackjack Team.
 */

#include <stdio.h>

int main()
{
    int decks;

    #ifdef NDEBUG
        // release build stuff goes here.
        // IF NO DEBUG reads clearly
        puts("Application In Release Mode");
    #else
        // debug build stuff goes here
        // makes sense to have it second in the order
        puts("Application In Debug Mode");
    #endif

    puts("Enter a number of decks");
    scanf("%i", &decks);
    if (decks < 1)
    {
        puts("That is not a valid number of decks");
        return 1;
    }

    printf("There are %i cards\n", (decks * 52));

    return 0;
}