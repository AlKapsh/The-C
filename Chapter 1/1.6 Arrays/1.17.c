#include <stdio.h> 

void prn(char str[], int len);

int main(){

    char c;
    int len = 0;
    char arr[256] ;

    while((c = getchar()) != EOF){

        if(c == '\n'){
            prn(arr, len);
            len = 0;
        }
        else{
            arr[len] = c;
            len++;
        }
        

    }
    return 0;
}

void prn(char str[], int len){
    if(len >= 80){
        for(int i = 0; i < len; i++){
            putchar(str[i]);
        }
    }
}