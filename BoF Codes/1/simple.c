#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	char name[5] = "";
	char lastName[10] = "";
	
	printf("Enter your name: ");
	scanf("%s", name);
	
	printf("My name is %s \n", name);
	printf("And my last name is %s \n", lastName);
	
	return 0;


}
