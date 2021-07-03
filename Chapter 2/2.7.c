#include <stdio.h>

unsigned invert(unsigned x, int pos, int num) {

    return (x | (~(~0 << num) << 8 - num) >> (8 - pos - 1));
}

int main(int argc, char const* argv[]) {

    unsigned x = 1;
    int pos = 0;
    int num = 1;
    // биты считаются с нулевой позиции, и меняются с включением позиции
    printf("%d\n", invert(x, pos, num));
    return 0;
}
