#include <stdio.h>
main() {
	char *name;
	char *command;
	name = (char *) malloc(10);
	command = (char *) malloc(128);
	sprintf(command, "echo %s", "Good Morning!");
	printf("What's your name? ");
	gets(name);
	system(command);
}
