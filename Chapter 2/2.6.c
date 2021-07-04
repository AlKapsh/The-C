#include <stdio.h>

unsigned setbits(unsigned x, unsigned y, int pos, int num){
    return (x & ~(~(~0<<num)<<(pos-num))) | ((y&~(~0<<num))<<(pos-num));
}

int main(int argc, char const *argv[]) {
    
    unsigned x = 0;
    unsigned y = 1;
    int pos = 3;
    int num = 1;
    // биты ставит включительно с позиции pos
    printf("%d\n", setbits(x, y, pos, num));

    return 0;
}
