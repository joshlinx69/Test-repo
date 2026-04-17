#include <stdio.h>

int main() {
    int *ptr;
    int a = 16;

    ptr = &a;
    printf("%d", *ptr);
    return 0;
}