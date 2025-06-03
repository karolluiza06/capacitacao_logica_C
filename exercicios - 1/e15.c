/*
    O seguinte programa calcula a área de um triângulo.
    Complete-o para que ele funcione corretamente e imprima o resultado com uma casa decimal.
    Ao final, crie um IF/ELSE para verificar se a área é maior que 30:
    caso sim - exiba "Triangulo grande", 
    caso contrário - exiba "Triangulo pequeno".
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calcule a área do triângulo
    area = (base * altura) /2;

    // Exiba o resultado formatado com duas casas decimais
    printf("A area é %.1f\n",area);

    // IF/ELSE para verificar se a área é maior que 30
    if(area>30)
        printf("Triangulo grande");
    else
    printf("Triangulo pequeno");

    return 0;
}