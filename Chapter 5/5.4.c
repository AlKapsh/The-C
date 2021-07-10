#include <stdio.h>

int strend(char* s, char* t) {

    char *start = t;
    while (*s) {
        s++;
    }
    while (*t) {
        t++;
    }
    t--; s--;
    while (*s) {
        if (*s-- == *t-- && *s != ' ') { // сломается, если в t больше одного слова

        }
        else if (*s == ' ') {
            return 1;
        }
        else {
            return 0;
        }

    }
    return 1;

}

int main(int argc, char const* argv[]) {

    char firstStr[256] = "Some type of string";
    char secondStr[] = "string"; // находится в конце 
    char anotherStr[] = "strong";// а это нет
    printf("%d", strend(firstStr, secondStr)); // вернёт 1
    printf("\n%d", strend(firstStr, anotherStr)); // а это ноль
    return 0;
}
