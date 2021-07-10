#include <stdio.h>

char* strncpy1(char* s, char* t, int n) {
    char* ret = s;
    while (*t && n) {

        *s++ = *t++;
        n--;
    }
    return ret;
}
char* strncat1(char* s, char* t, int n) {
    char* ret;
    ret = s;

    while (*s) {
        s++;
    }
    while (*t && n) {
        *s++ = *t++;
        n--;
    }
    return ret;
}

int strncmp1(char* s, char* t, int n) {
    while (n) {
        if (*s++ == *t++) {}

        else {
            return *s++ - *t++;
        }
        n--;
    }
    return 1;
}

int main(int argc, char const* argv[]) {

    char firstStr[256] = "string";
    char secondStr[] = "string"; 
    char anotherStr[] = "strang";

    printf("%d", strncmp1(firstStr, secondStr, 3));
    printf("\n%d", strncmp1(firstStr, anotherStr, 4));

    char dest[40] = "Hello, ";
    char source[] = "World";

    printf("\n%s", strncat1(dest, source, 3));
    printf("\n%s", strncat1(dest, source, 5));

    char dest1[40] = "";
    char source1[] = "World";

    printf("\n%s", strncpy1(dest1, source1, 3)); 
    printf("\n%s", strncpy1(dest1, source1, 5)); 

    return 0;
}
