#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>

/* a thread function can accept a single void parameter */
void* do_stuff(void *param)
{
    /* convert it back to long */
    long thread_no = (long)param;
    printf("Thread number %ld\n", thread_no);
    /* cast it back to void pointer when it returned */
    return (void*) (thread_no + 1);
}

void error(char *msg)
{
    fprintf(stderr, "s : %s", msg, strerror);
    exit(1);
}



int main(int argc, char *argv[])
{
    pthread_t threads[20];
    long t;
    
    for (t = 0; t < 3; t++)
    {
        pthread_create(&threads[t], NULL, do_stuff, (void*)t);
    }
    void* result;
    for(t = 0; t < 3; t++)
    {
        pthread_join(threads[t], &result);
        printf("Thread %ld return %ld\n", t, (long)result);
    }

    return 0;
}