/**
 * mem_killer.c
 * 
 * This program will halt the system by allocating
 * too much memory
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char buf[1024000];
	puts("I allocated 1M in stack.");
	
	while (1) {
		char *p = (char *)malloc(25 * 1024 * 1024);
		puts("I allocated 25M in heap.");
		if (p == NULL) {
			perror("malloc");
			break;
		}
	}
	
	return 0;
}