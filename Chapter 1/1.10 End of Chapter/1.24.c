#include <stdio.h>

int digital_root(int n) {
    int answer;
    int curr = 10;
    int prev = 1;

    printf("%d\n", (1 % 10) / 1);
    
    return 0;
  }

int rec(int n){
    int answr = 0;
    int curr = 10;
    int prev = 1;

    for(int i = 10; i < n ; i *= 10){

        answr += (n % i) / (i / 10);
    }
    printf("%d", answr);
    if(answr > 10){
        rec(answr);
    }
    return answr;
}

int main(){

    printf("\n%d", rec(200));
    return 0;
}

