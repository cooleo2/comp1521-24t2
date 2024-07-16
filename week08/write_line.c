// Write a C program, write_line.c, which is given one command-line argument,
// the name of a file, and which reads a line from stdin, and writes it to the
// specified file; if the file exists, it should be overwritten (rather than appended).
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Open file for writing
    FILE *fp = fopen(argv[1], "w");

    // Handle Errors
    if (fp == NULL) {
        perror(argv[1]);
        exit(1);
    }

    char buffer[1024];

    // Scan in a line from stdin
    fgets(buffer, 1024, stdin);

    // write to file
    fprintf(fp, "%s", buffer);

    fclose(fp);
    return 0;
}

// What change would we make if we wanted to append to a file rather than
// overwrite it?
