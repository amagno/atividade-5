#include <stdio.h>
#include <stdlib.h>
#include "../interface/menu_interface.h"
#include "exercicios.h"

int main()
{
    registrarOpcao(1, calcularMediaAluno, "Calcular média de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual número e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois números e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior número entre três entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe três números e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equação do segundo grau");
    return renderizarMenu();
}
