/**
 * big_file_writer.c
 * 
 * This program writes a 1M file.
 * Used to test file size limit.
 */

#include <stdio.h>

int main(void) {
	
	int count = 0;
	FILE *f = fopen("test.txt", "w");
	
	while (count < 1024 * 1024) {
		count += fprintf(f, "test");
	}
	
	fclose(f);
	
	puts("I have written lots of stuff on test.txt.");
	
	return 0;
}