#include <stdio.h>

/*You must use Ctrl-Z to get EOF, so after write come text in progamm click
Ctrl-Z to stop while loop.*/

int main(int argc, char const* argv[]) {

    char curr;
    char next;
    char temp;
    _Bool IsSpBf = 0;

    while ((curr = getchar()) != EOF) {
        if (curr == ' ' && (next = getchar()) != ' ') {
            putchar(curr);
            putchar(next);
            IsSpBf = 0;
        }
        if (curr == next == ' ' && IsSpBf == 0) {
            putchar(' ');
            IsSpBf == 1;
        }
        else if (curr != ' ') {
            putchar(curr);
        }
    }

    return 0;
}
