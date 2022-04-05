#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *thread_func()
{
	printf("Starting thread\n");
	sleep(5);
	printf("End thread\n");
	return NULL;
}

int main(int argc, char **argv)
{
	pthread_t thread_id;
	printf("Before thread\n");
	pthread_create(&thread_id, NULL, thread_func, NULL);
	pthread_join(thread_id, NULL);
	printf("Ended thread\n");
	return 0;
}

