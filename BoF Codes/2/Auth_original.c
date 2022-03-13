#include <stdio.h>

int main(void) {
    int authorized = 0;
    char sys_pass[16] = "secret!";
    char usr_pass[16];

    printf("enter password: ");
    scanf("%s", usr_pass);

    if (strcmp(sys_pass, usr_pass) == 0) {
        authorized = 1;
    }

    if (authorized) {
        printf("password is correct!\n");
    }
    else {
    	printf("password is wrong!\n");
    }
}
