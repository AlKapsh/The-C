#include <stdio.h>
#include <string.h>

/*int htol(char s){
    
    return s;
}*/

int main(){
    printf("%f" ,abd(1, 0.4));
    double a = 0.1, b = 0.2;
    //printf("%.20f \n%.20f \n%.20f", b, a, a + b);
    //printf("\n");
  //  printf("%d", s);
    for(int i = 0; i < 10; i++){
        printf("%.20f %d\n", a, i);
        a += 0.1;
    }
    //printf("%.20f \n%.20f \n%.20f", b, a, a + b);
    //0.1 + 0.2 > 0.3 ? printf("Yes") : printf("No");
    return 0;
}