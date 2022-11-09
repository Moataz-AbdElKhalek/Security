#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	setbuf(stdout, NULL);

	char *inputUsername = (char*) malloc(3);
	char *inputPass = (char*) malloc(3);
	char *hashedStoredPass = (char*) malloc(3);
	char *hashedInputPass = (char*) malloc(3);

	printf("Please enter your username ");
	scanf("%s",inputUsername);

	//hashedStoredPass = doHash(retrievePassword(inputUsername));
	strcpy(hashedStoredPass, "###");

	printf("Please enter your password ");
	scanf("%s",inputPass);

	//hashedInputPass = doHash(inputPass);
	strcpy(hashedInputPass, "!!!");

	if (strcmp(hashedStoredPass, hashedInputPass) == 0) {
		printf("Welcome Mr. Root!");
	} else {
		printf("Access Denied!");
	}

	printf("\n");
	printf("inputUsername: %s\n", inputUsername);
	printf("inputPass: %s\n", inputPass);
	printf("hashedStoredPass %s\n", hashedStoredPass);
	printf("hashedInputPass %s\n", hashedInputPass);

	return 0;
}
