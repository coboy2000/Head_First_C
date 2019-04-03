#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int score = 0;

void end_game(int sig)
{
    printf("\nFinal score : %i\n", score);
    exit(0);
}

int catch_signal(int sig, void (*handler) (int))
{
    struct sigaction action;
    action.sa
}