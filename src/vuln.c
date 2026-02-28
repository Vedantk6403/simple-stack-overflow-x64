#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void secret_function() {
    printf("\n[+] SUCCESS! You entered the secret function!\n");
    exit(0);
}

void echo_input(char *input) {
    char buffer[64];

    strcpy(buffer, input);

    printf("You entered: %s\n", buffer);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    echo_input(argv[1]);
    return 0;
}
