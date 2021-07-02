#include <stdio.h>
#include <string.h>

void reverse(char s[], int len){
    if(len == 0){
        putchar(s[len]);
        return;
    }
    else {
        putchar(s[len]);
        reverse(s, len -1);
    }
}

int main(int argc, char const *argv[]) {
    

    char str[] = "Some str of text";
    int len = strlen(str);
    reverse(str, len);
    return 0;
}
