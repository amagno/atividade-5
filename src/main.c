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
	registrarOpcao(1, calcularMediaAluno, "Calcular m�dia de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual n�mero e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois n�meros e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior n�mero entre tr�s entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe tr�s n�meros e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equa��o do segundo grau");
    registrarOpcao(8, calculaTipoTriangulo, "Recebe tr�s valores e verifica o tipo do tri�ngulo formado");
    registrarOpcao(9, teste, "Calcula soma dos n�meros pares digitados");//ERRO VERIFICAR!
    registrarOpcao(10, calculaTipoTriangulo, "Teste 1");
    registrarOpcao(11, calculaTipoTriangulo, "Teste 2");
    return renderizarMenu();
}
