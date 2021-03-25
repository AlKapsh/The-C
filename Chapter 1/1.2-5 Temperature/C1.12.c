#include <stdio.h>
#define IN 1
#define OUT 0

int main(int argc, char const* argv[]) {

    char c;
    int stat = OUT;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\t' || c == '\n') {
            stat = OUT;
        }
        else if (stat == OUT && (c != ' ' && c != '\t' && c != '\n')) {
            stat = IN;
            putchar('\n');
        }

        if (stat == IN) {
            putchar(c);
        }

    }

    return 0;
}
