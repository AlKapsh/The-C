#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]) {
    int i, j;
    i = 0;
    j = 0;
    int pos;
    int eq = 0;
    while (s[i] != '\0') {

        if (s[i] == t[j]) {
            pos = i;
            for (j = 0; j < strlen(t); j++, i++) {
                if (s[i] == t[j]) {
                    eq = 1;
                }
                else if (t[j] < 0) {
                    break;
                }
                else {
                    return -1;
                }
            }
            j = 0;
        }
        i++;
    }
    return pos + strlen(t) - 1;
}

int main() {

    char s[] = { "asdfghjklasd" };
    char t[] = { "fghj" };
    printf("%d\n", strindex(s, t));
    printf("%d\n", strindex(s, "asd"));
    printf("%d\n", strindex(s, "jkl"));
    return 0;
}