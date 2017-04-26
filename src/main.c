/*
 *  Author: Alexandre Magno Monteiro <amagnomonteiro@gmail.com>
 *  Reposit�rio: https://github.com/amagno/atividade-5
 *  Arquivo: main.c
 *  Descri��o: chama fun��o main() e renderiza interface para exerc�cios da Atividade 5 da Aula de Laborat�rio UTFPR
 */
//    Este programa � um software livre; voc� pode redistribu�-lo e/ou
//    modific�-lo sob os termos da Licen�a P�blica Geral GNU como publicada
//    pela Funda��o do Software Livre (FSF); na vers�o 3 da Licen�a,
//    ou (a seu crit�rio) qualquer vers�o posterior.
//
//    Este programa � distribu�do na esperan�a de que possa ser �til,
//    mas SEM NENHUMA GARANTIA; sem uma garantia impl�cita de ADEQUA��O
//    a qualquer MERCADO ou APLICA��O EM PARTICULAR. Veja a
//    Licen�a P�blica Geral GNU para mais detalhes.
//
//    Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral GNU junto
//    com este programa. Se n�o, veja <http://www.gnu.org/licenses/>.

#include <stdio.h>
#include <stdlib.h>
/**
 * Inclui fun��es para renderizar interface;
 */
#include "../interface/menu_interface.h"
/**
 * Inclui fun��es dos exerc�cios;
 */
#include "exercicios.h"

int main()
{
	/**
	 * Registra op��es na interface com void registrarOpcao(int n�mero da op��o, void fun��o a ser executada, char* enunciado);
	 * Arquivo: ../interface/menu_interface.h
	 */
	registrarOpcao(1, calcularMediaAluno, "Calcular m�dia de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual n�mero e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois n�meros e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior n�mero entre tr�s entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe tr�s n�meros e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equa��o do segundo grau");
    registrarOpcao(8, calculaTipoTriangulo, "Recebe tr�s valores e verifica o tipo do tri�ngulo formado");
    registrarOpcao(9, calculaNumerosPares, "Calcula soma dos n�meros pares digitados");
    registrarOpcao(10, calculaPrecoProdutoLoja, "Calcula descontos do pre�o de um produto");
    registrarOpcao(11, calculaArea, "Calcula �rea de figuras geom�tricas conforme op��o");
    /**
     * retorna fun��o int renderizarMenu();
     * Arquivo: ../interface/menu_interface.h
     */
    return renderizarMenu();
}
