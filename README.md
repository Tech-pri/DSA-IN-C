#include <stdio.h>
int main (void){
printf("Hellm world");
}
// 1
// 12
// 123
// 1234
// 12345
int i ;
    int k;
    for ( i = 1 ; i <=5 ; i++){
        for ( k = 1; k <= i; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
