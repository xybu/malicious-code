/**
 * sleeper.c
 * 
 * Emulate execution timeout.
 */

#include <stdio.h>


int main(void) {
	puts("I am going to sleep for 1min.");
	sleep(60);
	puts("I woke up.");
	
	return 0;
}