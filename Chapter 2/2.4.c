#include <stdio.h>
#include <string.h>

void del(char s[], int pos) {

    for (int i = pos; s[i] != '\0'; i++) {
        s[i] = s[i + 1];
    }

}

void sq(char s1[], char s2[]) {

    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                del(s1, i);
                i--;
            }
        }
    }
}

int main() {

    char s1[] = "I have something special for you, my bro"; // i have ething pecial fr yu, y br
    char s2[] = "ossm";

    sq(s1, s2);
    printf("%s", s1);
    getchar();
    return 0;

}