// Write a C program, first_line.c, which is given one command-line argument -
// the name of a file - and which prints the first line of that file to stdout.
// If given an incorrect number of arguments, or if there was an error opening
// the file, it should print a suitable error message.
//
// A line may be of any size.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Open file for reading
    FILE *fp = fopen(argv[1], "r");

    // Handle Errors
    if (fp == NULL) {
        perror(argv[1]);
        exit(1);
    }

    
    int c;
    while ((c = fgetc(fp)) != EOF && c != '\n') {
        fputc(c, stdout);
    }

    /*
    char buffer[1024];
    if (fgets(buffer, 1024, fp) == NULL) {
        printf("error");
    }
    */

    /* Need to add null terminator at the end
    char buffer[1024];
    if (fread(buffer, 1024, 1, fp) == 0) {
        printf("error");
    } */

    printf("%s", buffer);
    

    fclose(fp);

    return 0;
}
