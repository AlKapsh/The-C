#include <stdio.h>

char itob(int x, int b, char *s) {

    int temp = x;
    int remainder;
    int quotient;
    remainder = temp % b;
    quotient = temp / b;
    
    if (quotient == 0) {
    
        if (temp >= 10) {
            *s = 'A' + temp - 10;
        }
        else
            *s = '0' + temp;
        s--;
        return s;
    }
    else {
        
        if (remainder >= 10) {
            *s = 'A' + remainder - 10;
        }
        else
            *s = '0' + remainder;
        s--;
        return itob(quotient, b, s);
    }
}

int main(int argc, char const* argv[]) {

    char s[10] = "000000000";
    char* str = &s[8];
    itob(1205, 16, str);
    printf("%s", s);
    return 0;
}
