/*
    DESAFIO

    Abaixo temos um programa com as variaveis anos, meses, dias e totalDias.
    O objetivo é calcular o total de dias a partir dos anos, meses e dias informados pelo usuário.
    Complete o código para que ele funcione corretamente, realizando as seguintes operações:
    - Leitura dos valores informados pelo usuário
    - Cálculo do total de dias considerando:
        - 1 ano = 365 dias
        - 1 mês = 30 dias
        - 1 dia = 1 dia
    - Exibir o total de dias calculado
    - Calcular o total de semanas a partir do total de dias, considerando:asm
        - 1 semana = 7 dias
    - Exibir o total de semanas calculado
*/

#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;
    float totalSemanas;

    // Leitura dos valores informados pelo usuário
    printf("Digite a quantidade de anos,meses e dias:");
    scanf("%d %d %d",&anos,&meses,&dias);

    // Cálculo do total de dias
    totalDias = (anos*365) + (meses*30) + dias;

    // Exibição do total de dias
    printf("\nO total de dias é %d",totalDias);

    // Cálculo do total de semanas
    totalSemanas = totalDias/7;

    // Exibição do total de semanas
    printf("\nO total de semanas %.2f",totalSemanas);

    return 0;
}