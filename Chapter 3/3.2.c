#include <stdio.h>
#define len 255

void escape(char s[], char t[]) {
    int j = 0;
    for (int i = 0; s[i - 1] != '\0'; i++) {
        (s[i - 1] == '\0') ? t[j] = '\0' : s[i];
        switch (s[i]) {

        case '\\':
            (s[i + 1] == 't') ? (t[j] = '\t') : (s[i + 1] == 'n') ? (t[j] == '\n') : (s[i + 1] == 'r') ? (t[j] = '\r')
                : (s[i + 1] == 'b') ? (t[j] = '\b') : (s[i + 1] == 'f') ? (t[j] = '\f') : s[i];
            i++;
            break;

        case '\t':
            t[j] = '\\';
            t[j+1] = 't';
            j++;
            break;

        case '\n':
            t[j] = '\\';
            t[j + 1] = 'n';
            j++;
            break;

        case '\r':
            t[j] = '\\';
            t[j] = 'r';
            j++;
            break;

        case '\b':
            t[j] = '\\';
            t[j + 1] = 'b';
            j++;
            break;

        case '\f':
            t[j] = '\\';
            t[j + 1] = 'f';
            j++;
            break;

        default:
            t[j] = s[i];
            break;
        }
        j++;
    }
}


int main() {

    char s[len] = "Some text with escapes";
    char t[len];
    escape(s, t);
    printf("%s \n", t);
    return 0;
}