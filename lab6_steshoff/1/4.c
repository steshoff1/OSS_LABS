#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, const char** argv)
{
	if (argc < 2)
		return -1;

	int num = atoi(argv[1]);
	char** ptr;
	for (ptr = environ; *ptr && ptr - environ < num; ++ptr)
		printf("[%ld] %s\n", ptr - environ, *ptr);

	return 0;
}
