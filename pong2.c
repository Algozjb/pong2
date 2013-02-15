#include <stdio.h>
#include <stdlib.h>
#include <sys/reboot.h>
#include <signal.h>
#include <sys/syscall.h>

void handle()
{
	printf("this is a alarm handler\n");
}

int main(int argc, const char *argv[])
{
	printf("to go to alarm handler function\n");
	signal(SIGALRM,handle);
	alarm(4);
	pause();
	int i = reboot(RB_AUTOBOOT);
	if (-1 == i) {
		printf("reboot: must be superuser\n");
	}
	return 0;
}
