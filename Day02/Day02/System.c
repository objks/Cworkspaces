#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_System() {
	char command[50];

	strcpy(command, "Dir");
	int result = system(command);
	printf("result = %d\n", result);

	return(0);
}