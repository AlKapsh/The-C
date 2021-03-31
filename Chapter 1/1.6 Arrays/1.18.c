#include <stdio.h>
#define MAXLEN 256

int main() {

    char c;
    int size = 0;
    char array[MAXLEN];

    while ((c = getchar()) != EOF) {
        array[size] = c;
        size++;
        if (size != 0 && c == '\n') {
            for (int i = 0; i < size; i++) {
                if (array[i] != ' ' && array[i] != '\t' && array[i] != '\n') {
                    putchar(array[i]);
                }
                else if ((array[i] == ' ' || array[i] == '\t') && (array[i + 1] == ' ' || array[i + 1] == '\t')) {
                }
                else if ((array[i] == ' ' || array[i] == '\t') && (array[i + 1] != ' ' && array[i + 1] != '\t')) {
                    putchar(' ');
                }
            }
            size = 0;
        }
    }
    return 0;
}