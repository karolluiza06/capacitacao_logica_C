/*
    O programa abaixo deve verificar se um número informado pelo usuário está presente no vetor.
    
    Crie a lógica para realizar essa verificação.
    Se o número for encontrado, imprima "Número presente!".
    Se não for encontrado, imprima "Número ausente!".

    EXTRA: Utilize "break;" para interromper o loop quando o número é encontrado,
    de modo que a execução não continua verificando os outros números, tornando o código mais eficiente.
*/

#include <stdio.h>

int main() {
    int numeros[] = {3, 7, 12, 25, 30};
    int tamanho = 5;
    int alvo,i;
    int encontrado = 0;

    printf("Digite um número para buscar no array: ");
    scanf("%d", &alvo);

    // Lógica:
    for(i=0;i<tamanho;i++){
        if(alvo==numeros[i]){
        encontrado=1;
        break;
        }
    }
    // Mensagem de resultado:
      if(encontrado)
        printf("Número presente");
    else
        printf("Número ausente");

    return 0;
}

