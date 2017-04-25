#include <stdio.h>


void calcularMediaAluno()
{
    int n1, n2, n3, media;
    printf("Digite nota da primeira prova -> ");
    scanf("%d", &n1);
    printf("Digite nota da segunda prova  -> ");
    scanf("%d", &n2);
    printf("Digite nota da terceira prova -> ");
    scanf("%d", &n3);
    media = (n1 + n2 + n3) / 3;
    if(media >= 6)
    {
        printf("Média: %d Aluno aprovado! \n", media);
    }
    if(media < 6 && media > 4)
    {
        printf("Média: %d Recuperação! \n", media);
    }
    if(media < 4)
    {
        printf("Média %d Reprovado! \n", media);
    }

}
void qualNumeroMaior()
{
    int a, b;
    printf("Digite o número A -> ");
    scanf("%d", &a);
    printf("Digite o número B -> ");
    scanf("%d", &b);
    if(a == b) {
        printf(" A = B \n");
    } else {
        if(a > b) {
            printf(" A e maior! \n");
        } else {
            printf(" B e maior! \n");
        }
    }
}
