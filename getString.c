#include"main.h"
char* getString(char* s) {
    char buffer[256]; // Assuming a maximum input length of 255 characters
    printf("%s", s);
    fgets(buffer, sizeof(buffer), stdin);
    /*fgets reads characters from the specified file stream
     until it reaches a newline character '\n' or the specified maximum size 
     minus one character (to leave space for the null-terminator '\0').*/

    // Remove the trailing newline character
    buffer[strcspn(buffer, "\n")] = '\0';
    /* strcspn search for the \n character in buffer string and return its position */

    char* str = malloc(strlen(buffer) + 1);
    if (str == NULL) {
        // Handle memory allocation failure
        exit(1); // Exit the program with an error status
    }
    strcpy(str, buffer);

    return str;
}

