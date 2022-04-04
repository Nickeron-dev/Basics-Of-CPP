#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int g = 10;

void *thread_func(void *args)
{
	int *arg = (int *) args;
	
	static int s = 0;
	
	s++;
	g++;
	
	printf("G: %d, args: %d, static s: %d\n", g, *arg, s);
	return NULL;
}

int main(int argc, char **argv)
{
	pthread_t thread_id;
	
	for (int i = 0; i < 3; i++)
	{
		pthread_create(&thread_id, NULL, thread_func, (void *)&thread_id);
	}
	
	pthread_exit(NULL);
	return 0;
}

