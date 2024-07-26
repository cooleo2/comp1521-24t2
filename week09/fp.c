
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp = fopen(argv[1], "r");

    int b;
    b = fgetc(fp);
    fputc(b, stdout);
    b = fgetc(fp);
    fputc(b, stdout);

    fputc('\n', stdout);

    fseek(fp, -2, SEEK_END);

    b = fgetc(fp);
    fputc(b, stdout);
    b = fgetc(fp);
    fputc(b, stdout);

    fputc('\n', stdout);
    

    fclose(fp);

    return 0;
}