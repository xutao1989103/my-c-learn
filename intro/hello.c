
#include <stdio.h>  /* for convenience */
#include <stdlib.h> /* for convenience */
#include <unistd.h> /* for convenience */

int
main(void)
{
	printf("hello world from process ID %ld\n", (long)getpid());
	exit(0);
}
