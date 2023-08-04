#include <stdio.h>
#include <stdlib.h>

/*Ler as notas da 1ª e 2ª avaliação de um aluno. Calcular a média aritmética
simples e escrever uma mensagem que diga se o aluno foi ou não
aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado).
Escrever também a média calculada.*/


int main()
{
    float n1;
    float n2;
    float resultado;
    float media;
    printf("avaliacao 1:");
    scanf("%f",&n1);
    printf("avaliacao 2:");
    scanf("%f",&n2);
    resultado=n1+n2;
    media=resultado/2;
    printf("\n%.2f+%.2f/2=%.2f",n1,n2,media);
        if (media>=6)
            printf("\naprovado ");
        else
            printf("\nreprovado ");

}
