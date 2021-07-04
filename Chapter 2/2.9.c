#include <stdio.h>

int count(int x){
    int res = 0;
    
    while (x) {
    res ++;
    x &= x-1;  // обнуляем младший бит и увеличиваем счётчик
  }
    return res;
}

int main(int argc, char const *argv[]) {
    
    printf("%d\n", count(128));
    printf("%d\n", count(3));
    printf("%d\n", count(16));
    printf("%d\n", count(15));
    printf("%d\n", count(32));
    printf("%d\n", count(35));


    return 0;
}
