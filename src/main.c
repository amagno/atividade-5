#include <stdio.h>
#include <stdlib.h>
#include "../interface/menu_interface.h"
#include "exercicios.h"

void teste() {
	printf("testing...... \n");
}
int main()
{
	teste();
	registrarOpcao(1, calcularMediaAluno, "Calcular média de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual número e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois números e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior número entre três entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe três números e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equação do segundo grau");
    registrarOpcao(8, calculaTipoTriangulo, "Recebe três valores e verifica o tipo do triángulo formado");
    registrarOpcao(9, teste, "Calcula soma dos números pares digitados");//ERRO VERIFICAR!
    registrarOpcao(10, calculaTipoTriangulo, "Teste 1");
    registrarOpcao(11, calculaTipoTriangulo, "Teste 2");
    return renderizarMenu();
}
