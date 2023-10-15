#include"main.h"
char* getString(char* s) {
    char buffer[256]; // Assuming a maximum input length of 255 characters
    printf("%s", s);
    fgets(buffer, sizeof(buffer), stdin);

    // Remove the trailing newline character
    buffer[strcspn(buffer, "\n")] = '\0';

    char* str = malloc(strlen(buffer) + 1);
    if (str == NULL) {
        // Handle memory allocation failure
        exit(1);
    }
    strcpy(str, buffer);

    return str;
}

