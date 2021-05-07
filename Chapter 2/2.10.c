#include <stdio.h>
#include <string.h>

void tLow(char s[]){
    for(int i = 0; s[i] != '\0'; i++)
        (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] += 32) : s[i];
}

int main(){

    char s[] = "SoMe TeXt IN SOmE SyEL";
    tLow(s);
    printf("%s", s);
    return 0;
}