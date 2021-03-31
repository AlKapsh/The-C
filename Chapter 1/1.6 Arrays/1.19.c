#include <stdio.h>
#define MAXLEN 256

void revers(char str[], int len);

int main() {

    char c;
    int size = 0;
    char array[MAXLEN];
    while ((c = getchar()) != EOF) {
        array[size] = c;
        size++;
        if (c == '\n' && size != 0) {
            revers(array, size);
            size = 0;
        }
    }
    return 0;
}

void revers(char str[], int len) {
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
}