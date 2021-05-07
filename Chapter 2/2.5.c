#include <stdio.h>

int any(char s[], char s1[]) {

    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s[i] == s1[j]) {
                printf("%c - ", s[i]);
                return i;
            }
        }
    }
    return -1;
}

int main() {

    char s[] = "What's time is it?";
    char s1[] = "sey";

    printf("%d", any(s, s1));

    return 0;
}