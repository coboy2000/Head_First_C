#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[2];
    puts("Enter the card_name : ");
    scanf("%3s", card_name);
    printf("%s\n", card_name);

    int val = 0;
    if ((card_name[0] == 'K') || (card_name[0] == 'Q') || (card_name[0] == 'J'))
    {
        val = 10;
    }
    else if (card_name[0] == 'A')
    {
        val = 11;
    }
    else
    {
        val = atoi(card_name);
    }

    /* Check if the Value is 3 to 6 */
    if ((val > 2) && (val < 7))
        puts("Count has gone up");
    else if (val == 10)
        puts("Count has gone Down");
    

    return 0;
}