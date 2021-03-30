#include <stdio.h>

int main(int argc, char const* argv[]) {

    char c;
    int siz = 0;
    int len = 0;
    int count = 0;
    char symb[100];
    char origin[100];
    int bylo = 0;

    while ((c = getchar()) != EOF) {

        origin[siz] = c;
        siz++;

        for (int i = 0; i < len; i++) {
            if (symb[i] == c) {
                bylo++;
            }
        }

        if (bylo == 0 && c != ' ' && c != '\n') {
            symb[len] = c;
            len++;
        }
        bylo = 0;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < siz; j++) {
            if (symb[i] == origin[j]) {
                count++;
            }
        }
        if (count > 0) {
            putchar(symb[i]);
            printf("%s", " - ");
            for(int y = 0; y < count; y++)
                putchar('#');
            count = 0;
            putchar('\n');
        }
    }

    return 0;
}

