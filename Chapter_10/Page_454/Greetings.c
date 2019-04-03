/*
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

void diediedie(int sig)
{
    puts ("Goodbye cruel world ....\n");
    exit(1);
}

int catch_signal(int sig, void (*handler) (int))
{
    struct sigaction action;
    action.sa_handler = handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    return sigaction (sig, &action, NULL);
}

int main()
{
    if (catch_signal(SIGINT, diediedie) == -1)
    {
        fprintf(stderr, "Can't map the handler");
        exit(2);
    }

    char name[30];
    printf("Enter your name : ");
    fgets(name, 30, stdin);
    printf("Hello %s\n", name);

    return 0;
}
*/

#include <signal.h> // 需要包含 signal.h 头文件。
#include <stdio.h>
#include <stdlib.h>
// 捕捉到信号后的处理函数
void diediedie(int sig) {
	puts("Goodbye cruel world....\n");
	exit(1);
}
//注册处理器的函数
int catch_signal(int sig, void (*handler)(int)) {
//	struct sighandler_t action;//windows中
	struct sigaction action; // linux系统中的
	action.sa_handler = handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags = 0;
	return sigaction(sig, &action, NULL);
//	return signal(sig, &action);
}
int main() {
	// SIGNIT--->表示中断信号
	if (catch_signal(SIGINT, diediedie) == -1) {
		fprintf(stderr, "Can't map the handler");
		exit(2);
	}
	char name[30];
	printf("Enter your name:");
	fgets(name, 30, stdin);
	printf("Hello %s\n", name);
	return 0;
}