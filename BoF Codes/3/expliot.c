#include <stdio.h>
main() {
	char *name;
	char *command;
	name = (char *) malloc(10);
	command = (char *) malloc(128);

	printf("Address of name is %d\n", name);
	printf("Address of command is %d\n", command);

	sprintf(command, "echo %s", "Good Morning!");
	printf("What's your name? ");
	gets(name);

	system(command);
}
