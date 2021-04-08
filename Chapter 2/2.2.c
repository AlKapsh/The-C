#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim) {
    int i;
    int c;
    for (i = 0; i < lim - 1; ++i) {
        if ((c = getchar()) != EOF) {
            if (c != '\n') {
                s[i] = c;
            }
        }
        else {
            break;
        }
    }

    s[i] = '\0';
    return i;
}

int main() {

    char line[MAXLINE];
    int len = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        len > 1 ? printf("%d", len) : printf("%s", "Xnj-nj");
    }
    printf("%d", getline(line, MAXLINE));

    return 0;
}