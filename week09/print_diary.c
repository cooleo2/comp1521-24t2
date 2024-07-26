/**
 * Write a C program, print_diary.c,
 * which prints the contents of the file $HOME/.diary to stdout.
 * 
 * Be sure to handle any errors!
 * snprintf is a convenient function for constructing the pathname of the diary file.
 * (it's also pretty handy for subset3 of a certain assignment.)
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIARY_PATH "/.diary"


int main(void) {

    char* home_path = getenv("HOME");
    int home_path_len = strlen(home_path);
    int final_length = strlen(DIARY_PATH) + home_path_len + 1;
    char full_path[final_length];
    snprintf(full_path, final_length, "%s%s", home_path, DIARY_PATH);

    // TODO: construct full_path in order to open the file 
    FILE *stream = fopen(full_path, "r");
    if (stream == NULL) {
        perror(full_path);
        exit(1);
    }

    int c;
    while ((c = fgetc(stream)) != EOF) {
        putchar(c);
    }

    fclose(stream);
    return 0;
}
