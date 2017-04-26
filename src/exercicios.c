/*
 *  Author: Alexandre Magno Monteiro <amagnomonteiro@gmail.com>
 *  Reposit�rio: https://github.com/amagno/atividade-5
 *  Arquivo: exercicios.c
 *  Descri��o: implementa��o de fun��es dos exerc�cios da Atividade 5 da Aula de Laborat�rio
 */
//    Este arquivo � parte do programa atividade-5
//
//    atividade-5 � um software livre; voc� pode redistribu�-lo e/ou
//    modific�-lo dentro dos termos da Licen�a P�blica Geral GNU como
//    publicada pela Funda��o do Software Livre (FSF); na vers�o 3 da
//    Licen�a, ou (a seu crit�rio) qualquer vers�o posterior.
//
//    Este programa � distribu�do na esperan�a de que possa ser  �til,
//    mas SEM NENHUMA GARANTIA; sem uma garantia impl�cita de ADEQUA��O
//    a qualquer MERCADO ou APLICA��O EM PARTICULAR. Veja a
//    Licen�a P�blica Geral GNU para maiores detalhes.
//
//    Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral GNU junto
//    com este programa, Se n�o, veja <http://www.gnu.org/licenses/>.
#include "exercicios.h"
#include <stdio.h>
#include <math.h>
/**
 * Exerc�cio n�mero 1
 * Calcular m�ida aluno e verifica se foi aprovado ou n�o
 */
void calcularMediaAluno() {
	int n1, n2, n3, media;
	printf("Digite nota da primeira prova -> ");
	scanf("%d", &n1);
	printf("Digite nota da segunda prova  -> ");
	scanf("%d", &n2);
	printf("Digite nota da terceira prova -> ");
	scanf("%d", &n3);
	media = (n1 + n2 + n3) / 3;
	if (media >= 6) {
		printf("M�dia: %d Aluno aprovado! \n", media);
		return;
	}
	if (media < 6 && media > 4) {
		printf("M�dia: %d Recupera��o! \n", media);
		return;
	}
	if (media < 4) {
		printf("M�dia %d Reprovado! \n", media);
		return;
	}

}
/**
 * Exerc�cio n�mero 2
 * Recebe dois n�meros e verifica qual � o maior
 */
void qualNumeroMaior() {
	int a, b;
	printf("Digite o n�mero A -> ");
	scanf("%d", &a);
	printf("Digite o n�mero B -> ");
	scanf("%d", &b);
	if (a == b) {
		printf(" A = B \n");
	} else {
		if (a > b) {
			printf(" A e maior! \n");
		} else {
			printf(" B e maior! \n");
		}
	}
}
/**
 * Exerc�cio n�mero 3
 * Recebe velocidade maxima permida e velocidade do momento para calcular valor da multa
 */
void velocidadeMaximaMulta() {
	int vm, v;
	printf("Digite a velocidade m�xima permitida    -> ");
	scanf("%d", &vm);
	printf("Digite a velocidade do carro no momento -> ");
	scanf("%d", &v);

	if ((v - vm) <= 10) {
		printf("Valor da multa = 50,00R$ \ns");
		return;
	}
	if ((v - vm) > 10 && (v - vm) <= 30) {
		printf("Valor da multa = 100,00R$ \n");
		return;
	}
	if ((v - vm) > 30) {
		printf("Valor da multa = 200,00R$ \n");
		return;
	}

}
/**
 * Exerc�cio n�mero 4
 * Recebe dois n�meros e calcula o quociente
 */
void calculaQuociente() {
	int n1, n2;
	printf("Digite o primeiro n�mero -> ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero  -> ");
	scanf("%d", &n2);

	if (n2) {
		printf("Quociente = %d \n", (n1 / n2));
	} else {
		printf("Divis�o por ZERO \n");
	}
}
/**
 * Exerc�cio n�mero 5
 * Recebe tr�s n�meros e verifica qual � o maior
 */
void defineMaiorEntreTresNumeros() {
	int n1, n2, n3;

	printf("Digite o n�mero 1 -> ");
	scanf("%d", &n1);
	printf("Digite o n�mero 2 -> ");
	scanf("%d", &n2);
	printf("Digite o n�mero 3 -> ");
	scanf("%d", &n3);

	if (n1 > n2 && n1 > n3) {
		printf(" N�mero 1 = %d � o maior! \n", n1);
		return;
	}
	if (n2 > n1 && n2 > n3) {
		printf(" N�mero 2 = %d � o maior! \n", n2);
		return;
	}
	if (n3 > n1 && n3 > n2) {
		printf(" N�mero 3 = %d � o maior! \n", n3);
		return;
	}
}
/**
 * Exerc�cio n�mero 6
 * Recebe tr�s n�meros e coloca em ordem crescente
 */
void recebeTresNumeroEColocaEmOrdemCrescente() {
	int n1, n2, n3;

	printf("Digite o n�mero 1 -> ");
	scanf("%d", &n1);
	printf("Digite o n�mero 2 -> ");
	scanf("%d", &n2);
	printf("Digite o n�mero 3 -> ");
	scanf("%d", &n3);

	if (n1 == n2 || n2 == n3 || n1 == n3) {
		printf("Existem N�meros iguais \n");
		return;
	}
	if (n1 < n2 && n1 < n3) {
		if (n2 < n3) {
			printf("%d - %d - %d \n", n1, n2, n3);
			return;
		} else {
			printf("%d - %d - %d \n", n1, n3, n2);
			return;
		}
	}
	if (n2 < n1 && n2 < n3) {
		if (n1 < n3) {
			printf("%d - %d - %d \n", n2, n1, n3);
			return;
		} else {
			printf("%d - %d - %d \n", n2, n3, n1);
			return;
		}
	}
	if (n3 < n1 && n3 < n2) {
		if (n1 < n2) {
			printf("%d - %d - %d \n", n3, n1, n2);
			return;
		} else {
			printf("%d - %d - %d \n", n3, n2, n1);
			return;
		}
	}
}
/**
 * Exerc�cio n�mero 7
 * Recebe float a,b,c e calcula as raizes da equa��o do segundo grau
 */
void calculaRaizEquacaoSegundoGrau() {
	float a, b, c, delta, x1, x2;
	printf("Digite o n�mero a -> ");
	scanf("%f", &a);
	printf("Digite o n�mero b -> ");
	scanf("%f", &b);
	printf("Digite o n�mero c -> ");
	scanf("%f", &c);
	delta = pow(b, 2) - 4 * a * c;

	if(delta > 0) {
		x1 = ((-b) + sqrt(delta)) / (2 * a);
		x2 = ((-b) - sqrt(delta)) / (2 * a);
	} else {
		printf(" Delta <= 0 \n");
		return;
	}

	printf("Valor de x1 = %.2f\nValor de x2 = %.2f\n", x1, x2);
}
/**
 * Exerc�cio n�mero 8
 * Recebe tr�s valores e verica qual tipo dfe tri�ngulo formado
 */
void calculaTipoTriangulo() {
	int n1, n2, n3;

	printf("Digite primeira medida -> ");
	scanf("%d", &n1);
	printf("Digite segunda medida  -> ");
	scanf("%d", &n2);
	printf("Digite terceira medida -> ");
	scanf("%d", &n3);


	if(n1 == n2 && n1 == n3 && n2 == n3) {
		printf("Tri�ngulo do tipo Equil�tero \n");
		return;
	}

	if(n1 == n2 || n1 == n3 || n2 == n3) {
		printf("Tri�ngulo do tipo Is�sceles \n");
		return;
	}

	if(n1 != n2 && n1 != n3 && n2 != n3) {
		printf("Tri�ngulo do tipo Escaleno \n");
		return;
	}
}
/**
 * Exerc�cio n�mero 9
 * Recebe quatro n�meros e soma todos os pares
 */
void calculaNumerosPares() {
	int i, n, soma;
	for(i = 0; i < 4; i++) {
		printf(" Digite o %d n�mero -> ", (i + 1));
		scanf("%d", &n);
		if((n % 2) == 0) {
			soma += n;
		}
	}
	printf(" Soma de todos os n�meros pares = %d ", soma);
}
/**
 * Exerc�cio n�mero 10
 * Recebe pre�o de um produto de um loja e calcula desconto ou parcelamento
 */
void calculaPrecoProdutoLoja() {
	float preco, parcela;
	int i, desconto = 0;
	printf("Digite o pre�o do produto -> ");
	scanf("%f", &preco);
	if(preco < 100 || preco > 2000 ) {
		printf("Este pre�o n�o pertence a nenhum produto na loja");
		return;
	}
	
	if(preco <= 1000) {
		if(preco <= 250) {
			desconto = 5;
		}
		if(preco > 250 && preco <= 400) {
			desconto = 10;
		}
		if(preco > 400 && preco <= 1000) {
			desconto = 15;
		}
		printf("Pre�o a vista %.2fR$ com %d por cento de desconto \n", (float)(preco - (preco * desconto / 100)), desconto);
	} else {
		for(i = 5; i <= 10; i++) {
			parcela = preco / i;
			if(parcela >= 200) {
				printf("%d parcelas de %.2fR$ \n",i , parcela);
			}
		}
		
	}
}
/**
 * Exerc�cio n�mero 11
 * Calcula �rea de uma figura geom�trica conforme a op��oe escolhida
 */
void calculaArea() {
	float PI = 3.14159265358979323846;
	int n; 
	float a,b,c, raio, arestas, raioc, altura;
	printf("[1] - calcula �rea de um tri�ngulo \n");
	printf("[2] - calcula �rea de um c�rculo   \n");
	printf("[3] - calcula �rea de um cubo      \n");
	printf("[4] - calcula �rea de um cilindro  \n");
	printf("Digite a op��o desejada -> ");
	scanf("%d", &n);
	
	switch(n) {
		case 1:
			printf("Digite o valor da primeira medida ->");
			scanf("%f", &a);
			printf("Digite o valor da segunda medida  ->");
			scanf("%f", &b);
			printf("Digite o valor da terceira medida ->");
			scanf("%f", &c);
			printf("�rea de um tri�ngulo = %.2f \n", (a + b + c));
			break;
		case 2:
			printf("Digite o valor do raio ->");
			scanf("%f", &raio);
			printf("�rea de um circulo = %.2f \n", (float)(PI * (pow(raio, 2))));
			break;
		case 3:
			printf("Digite o valor das arestas ->");
			scanf("%f", &arestas);
			printf("�rea de um cubo = %.2f \n", (6 * (pow(arestas, 2))));
			break;
		case 4:
			printf("Digite o valor do raio ->");
			scanf("%f", &raioc);
			printf("Digite o valor da altura ->");
			scanf("%f", &altura);
			printf("�rea de um cilindro = %.2f \n", 2 * PI * (pow(raioc, 2)));
			break;
		default:
			printf(" Op��o n�o encontrada! \n\n");
	}
}
