#include <stdio.h>
#include <string.h>
#include "limits.h"

void itoa(int number, char str[], int len) {

    if (number < 10) {
        str[len] = number + '0';
        return;
    }
    else {

        str[len] = (number % 10) + '0';
        return itoa(number / 10, str, len - 1);
    }
}

int main() {

    char str[11];
    for (int i = 0; i < 10; i++) {
        str[i] = ' ';
    }
    str[10] = '\0';

    //printf("%s\n", str);

    int num = 1234567890;

    itoa(num, str, 9);

    printf("%s", str);
    return 0;
}