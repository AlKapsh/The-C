#include <stdio.h>
#define len 255

void expand(char s[], char e[]) {
    int j = 0;
    int let = 0;
    for (int i = 0; s[i] != '\0';i++) {

        for (; e[j - 1] != s[i + 2];) {

            if ((s[i] < 'A' && s[i] > '9') || (s[i] < 'a' && s[i] > 'Z') || s[i] < '0') {
                e[j] = s[i];
                i++;
                j++;
            }
            else {
                e[j] = s[i] + let;
                let++;
                j++;
            } 
        }
        let = 0;
        i += 2;
        if (s[i + 3] == '\0') {
            i--;
            j--;
        }
    }
    e[j] = '\0';

}

int main() {

    char s[] = "a-b-l";
    char e[len];
    expand(s, e);
    printf("%s", e);
    return 0;
}