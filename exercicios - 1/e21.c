/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Os 10 primeiros números pares são:\n");
    
    // Implemente a lógica:
    for(i=1;i<=20;i++){
        if(i%2==0)
        printf("\n%d ",i);
    }

    return 0;
}