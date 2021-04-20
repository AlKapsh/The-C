#include <stdio.h>
 


int main(){

    char c;
    char arr[265];
    int len = 0;

    while ((c = getchar()) != EOF){
        
        if(c == '\n'){
            for(int i = 0; i < len; i++){
                if(arr[i] == '\t'){
                    putchar(' ');
                    putchar(' ');
                    putchar(' ');
                    putchar(' ');
                }
                else{
                    putchar(arr[i]);
                }
            }
            len = 0;
        }
        else if(c != '\n'){
        arr[len] = c;
        len++;
        }
    }
}