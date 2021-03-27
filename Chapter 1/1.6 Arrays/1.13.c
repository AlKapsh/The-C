#include <stdio.h>
int main(){

    char c; 
    int i = 0;
    char Word[256];

    while ((c = getchar()) != EOF){
        
        if(c != '\n' && c != ' '){
           // putchar(c);
            i++;
        }
        else {
           // printf(" - ");
            for(int j = 0; j < i; j++){
                putchar('#');
            }
            putchar('\n');
            i = 0;
        }
    }
    

    return 0;
}