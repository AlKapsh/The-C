#include <stdio.h>
#include <inttypes.h>

unsigned rightrot(uint8_t x, int num){

    uint8_t copy = x;
    x >>= num;
    copy <<= (8-num);
    return x | copy;
}

int main(int argc, char const *argv[]) {
    
    int x = 5;
    int num = 2;
    printf("%d", rightrot(x, num));

    // строго заданный восьмибитовый инт чуть проще для понимания того, как это всё работает

    return 0;
}
