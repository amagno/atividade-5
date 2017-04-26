/*
 *  Author: Alexandre Magno Monteiro <amagnomonteiro@gmail.com>
 *  Repositório: https://github.com/amagno/atividade-5
 *  Arquivo: main.c
 *  Descrição: chama função main() e renderiza interface para exercícios da Atividade 5 da Aula de Laboratório UTFPR
 */
//    Este programa é um software livre; você pode redistribuí-lo e/ou
//    modificá-lo sob os termos da Licença Pública Geral GNU como publicada
//    pela Fundação do Software Livre (FSF); na versão 3 da Licença,
//    ou (a seu critério) qualquer versão posterior.
//
//    Este programa é distribuído na esperança de que possa ser útil,
//    mas SEM NENHUMA GARANTIA; sem uma garantia implícita de ADEQUAÇÃO
//    a qualquer MERCADO ou APLICAÇÃO EM PARTICULAR. Veja a
//    Licença Pública Geral GNU para mais detalhes.
//
//    Você deve ter recebido uma cópia da Licença Pública Geral GNU junto
//    com este programa. Se não, veja <http://www.gnu.org/licenses/>.

#include <stdio.h>
#include <stdlib.h>
/**
 * Inclui funções para renderizar interface;
 */
#include "../interface/menu_interface.h"
/**
 * Inclui funções dos exercícios;
 */
#include "exercicios.h"

int main()
{
	/**
	 * Registra opções na interface com void registrarOpcao(int número da opção, void função a ser executada, char* enunciado);
	 * Arquivo: ../interface/menu_interface.h
	 */
	registrarOpcao(1, calcularMediaAluno, "Calcular média de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual número e maior");
    registrarOpcao(3, velocidadeMaximaMulta, "Recebe velocidade e calcula multa");
    registrarOpcao(4, calculaQuociente, "Recebe dois números e calcula o quociente");
    registrarOpcao(5, defineMaiorEntreTresNumeros, "Define o maior número entre três entradas");
    registrarOpcao(6, recebeTresNumeroEColocaEmOrdemCrescente, "Recebe três números e coloca em ordem crescente");
    registrarOpcao(7, calculaRaizEquacaoSegundoGrau, "Calcula raizes de equação do segundo grau");
    registrarOpcao(8, calculaTipoTriangulo, "Recebe três valores e verifica o tipo do triángulo formado");
    registrarOpcao(9, calculaNumerosPares, "Calcula soma dos números pares digitados");
    registrarOpcao(10, calculaPrecoProdutoLoja, "Calcula descontos do preço de um produto");
    registrarOpcao(11, calculaArea, "Calcula área de figuras geométricas conforme opção");
    /**
     * retorna função int renderizarMenu();
     * Arquivo: ../interface/menu_interface.h
     */
    return renderizarMenu();
}
