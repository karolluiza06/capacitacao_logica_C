/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/
#include<stdio.h>

int main(){
    int n,i,soma=0;
    
    printf("Digite um número:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        soma+=i;
    }
    printf("A soma dos primeiros números naturais de %d é %d ",n,soma);

    return 0;
}