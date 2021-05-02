#include<stdio.h>
#include <unistd.h>

void main() {
    int num;

    while(1) {
        printf("%d\n", num);
        num += 1;
        sleep(1);
    }
}