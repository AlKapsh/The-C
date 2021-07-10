#include <stdio.h>

char* strcat(char* s, char* t) {

    char* ret;
    ret = s;

    while (*s) {
        s++;
    }
    while (*t) {
        *s++ = *t++;
    }
    return ret;
}

int main(int argc, char const* argv[]) {

    char firstStr[256] = "Some type of string.";
    char secondStr[] = "Another string";
    printf("%s", strcat(firstStr, secondStr));

    return 0;
}
