#include <stdio.h>
#include <stdlib.h>

/*Ler as notas da 1� e 2� avalia��o de um aluno. Calcular a m�dia aritm�tica
simples e escrever uma mensagem que diga se o aluno foi ou n�o
aprovado (considerar que nota igual ou maior que 6 o aluno � aprovado).
Escrever tamb�m a m�dia calculada.*/


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
