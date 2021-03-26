#include <stdio.h>
#define OUT 0
#define IN 1
/*You must use Ctrl-Z to get EOF, so after write come text in progamm click
Ctrl-Z to stop while loop.*/

int main(int argc, char const* argv[]) {

    char c;
    int stat = OUT;
    _Bool IsSpBf = 0;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\t' || c == '\n') {
            stat = OUT;
        }

        else if (stat == OUT && (c != ' ' && c != '\t' && c != '\n')) {
            stat = IN;
            putchar(' ');
        }


        if (stat == IN) {
            putchar(c);
        }
    }

    return 0;
}
