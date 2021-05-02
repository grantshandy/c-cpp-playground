#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    long arg = strtol(argv[1], NULL, 10);

    if (arg > 0) {
        printf("%ld is a positive number\n", arg);
    } else if (arg < 0) {
        printf("%ld is a negative number\n", arg);
    } else {
        printf("You said 0...\n");
    };
}