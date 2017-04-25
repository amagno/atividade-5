#include <stdio.h>
#include <stdlib.h>
#include "../interface/menu_interface.h"
#include "exercicios.h"

int main()
{
    registrarOpcao(1, calcularMediaAluno, "Calcular m�dia de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual n�mero e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois n�meros e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior n�mero entre tr�s entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe tr�s n�meros e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equa��o do segundo grau");
    return renderizarMenu();
}
