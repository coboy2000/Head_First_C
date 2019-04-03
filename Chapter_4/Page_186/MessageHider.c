/* the original code doean't works find on internet and 
 * modified it do it works now :)
 * I doesn't make Makefile , i use Cmake, it can generated
 * makefiles, etc :)
 */
#include <stdio.h>
#include <ctype.h>
#include "Encrypt.h"

int main()
{
    char msg[80];
    while (fgets(msg, 80, stdin) != NULL)
    {
        if (!isprint((unsigned char)*msg))
            break;
        encrypt(msg);
        printf("%s", msg);
    }
}

/* Notes : Function isprint() takes a single 
 * argument in the form of an integer and returns 
 * a value of type int .
 * Usage :
 * Example :
 #include <ctype.h>
#include <stdio.h>

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));

    return 0;
}

output :
Result when a printable character Q is passed to isprint(): 1
Result when a control character 
 is passed to isprint(): 0
 */