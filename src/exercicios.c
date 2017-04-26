/*
 *  Author: Alexandre Magno Monteiro <amagnomonteiro@gmail.com>
 *  Repositório: https://github.com/amagno/atividade-5
 *  Arquivo: exercicios.c
 *  Descrição: implementação de funções dos exercícios da Atividade 5 da Aula de Laboratório
 */
//    Este arquivo é parte do programa atividade-5
//
//    atividade-5 é um software livre; você pode redistribuí-lo e/ou
//    modificá-lo dentro dos termos da Licença Pública Geral GNU como
//    publicada pela Fundação do Software Livre (FSF); na versão 3 da
//    Licença, ou (a seu critério) qualquer versão posterior.
//
//    Este programa é distribuído na esperança de que possa ser  útil,
//    mas SEM NENHUMA GARANTIA; sem uma garantia implícita de ADEQUAÇÃO
//    a qualquer MERCADO ou APLICAÇÃO EM PARTICULAR. Veja a
//    Licença Pública Geral GNU para maiores detalhes.
//
//    Você deve ter recebido uma cópia da Licença Pública Geral GNU junto
//    com este programa, Se não, veja <http://www.gnu.org/licenses/>.
#include "exercicios.h"
#include <stdio.h>
#include <math.h>
/**
 * Exercício número 1
 * Calcular méida aluno e verifica se foi aprovado ou não
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
		printf("Média: %d Aluno aprovado! \n", media);
		return;
	}
	if (media < 6 && media > 4) {
		printf("Média: %d Recuperação! \n", media);
		return;
	}
	if (media < 4) {
		printf("Média %d Reprovado! \n", media);
		return;
	}

}
/**
 * Exercício número 2
 * Recebe dois números e verifica qual é o maior
 */
void qualNumeroMaior() {
	int a, b;
	printf("Digite o número A -> ");
	scanf("%d", &a);
	printf("Digite o número B -> ");
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
 * Exercício número 3
 * Recebe velocidade maxima permida e velocidade do momento para calcular valor da multa
 */
void velocidadeMaximaMulta() {
	int vm, v;
	printf("Digite a velocidade máxima permitida    -> ");
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
 * Exercício número 4
 * Recebe dois números e calcula o quociente
 */
void calculaQuociente() {
	int n1, n2;
	printf("Digite o primeiro número -> ");
	scanf("%d", &n1);
	printf("Digite o segundo número  -> ");
	scanf("%d", &n2);

	if (n2) {
		printf("Quociente = %d \n", (n1 / n2));
	} else {
		printf("Divisão por ZERO \n");
	}
}
/**
 * Exercício número 5
 * Recebe três números e verifica qual é o maior
 */
void defineMaiorEntreTresNumeros() {
	int n1, n2, n3;

	printf("Digite o número 1 -> ");
	scanf("%d", &n1);
	printf("Digite o número 2 -> ");
	scanf("%d", &n2);
	printf("Digite o número 3 -> ");
	scanf("%d", &n3);

	if (n1 > n2 && n1 > n3) {
		printf(" Número 1 = %d é o maior! \n", n1);
		return;
	}
	if (n2 > n1 && n2 > n3) {
		printf(" Número 2 = %d é o maior! \n", n2);
		return;
	}
	if (n3 > n1 && n3 > n2) {
		printf(" Número 3 = %d é o maior! \n", n3);
		return;
	}
}
/**
 * Exercício número 6
 * Recebe três números e coloca em ordem crescente
 */
void recebeTresNumeroEColocaEmOrdemCrescente() {
	int n1, n2, n3;

	printf("Digite o número 1 -> ");
	scanf("%d", &n1);
	printf("Digite o número 2 -> ");
	scanf("%d", &n2);
	printf("Digite o número 3 -> ");
	scanf("%d", &n3);

	if (n1 == n2 || n2 == n3 || n1 == n3) {
		printf("Existem Números iguais \n");
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
 * Exercício número 7
 * Recebe float a,b,c e calcula as raizes da equação do segundo grau
 */
void calculaRaizEquacaoSegundoGrau() {
	float a, b, c, delta, x1, x2;
	printf("Digite o número a -> ");
	scanf("%f", &a);
	printf("Digite o número b -> ");
	scanf("%f", &b);
	printf("Digite o número c -> ");
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
 * Exercício número 8
 * Recebe três valores e verica qual tipo dfe triángulo formado
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
		printf("Triángulo do tipo Equilátero \n");
		return;
	}

	if(n1 == n2 || n1 == n3 || n2 == n3) {
		printf("Triángulo do tipo Isósceles \n");
		return;
	}

	if(n1 != n2 && n1 != n3 && n2 != n3) {
		printf("Triángulo do tipo Escaleno \n");
		return;
	}
}
/**
 * Exercício número 9
 * Recebe quatro números e soma todos os pares
 */
void calculaNumerosPares() {
	int i, n, soma;
	for(i = 0; i < 4; i++) {
		printf(" Digite o %d número -> ", (i + 1));
		scanf("%d", &n);
		if((n % 2) == 0) {
			soma += n;
		}
	}
	printf(" Soma de todos os números pares = %d ", soma);
}
/**
 * Exercício número 10
 * Recebe preço de um produto de um loja e calcula desconto ou parcelamento
 */
void calculaPrecoProdutoLoja() {
	float preco, parcela;
	int i, desconto = 0;
	printf("Digite o preço do produto -> ");
	scanf("%f", &preco);
	if(preco < 100 || preco > 2000 ) {
		printf("Este preço não pertence a nenhum produto na loja");
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
		printf("Preço a vista %.2fR$ com %d por cento de desconto \n", (float)(preco - (preco * desconto / 100)), desconto);
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
 * Exercício número 11
 * Calcula área de uma figura geométrica conforme a opçãoe escolhida
 */
void calculaArea() {
	float PI = 3.14159265358979323846;
	int n; 
	float a,b,c, raio, arestas, raioc, altura;
	printf("[1] - calcula área de um triángulo \n");
	printf("[2] - calcula área de um círculo   \n");
	printf("[3] - calcula área de um cubo      \n");
	printf("[4] - calcula área de um cilindro  \n");
	printf("Digite a opção desejada -> ");
	scanf("%d", &n);
	
	switch(n) {
		case 1:
			printf("Digite o valor da primeira medida ->");
			scanf("%f", &a);
			printf("Digite o valor da segunda medida  ->");
			scanf("%f", &b);
			printf("Digite o valor da terceira medida ->");
			scanf("%f", &c);
			printf("Área de um triángulo = %.2f \n", (a + b + c));
			break;
		case 2:
			printf("Digite o valor do raio ->");
			scanf("%f", &raio);
			printf("Área de um circulo = %.2f \n", (float)(PI * (pow(raio, 2))));
			break;
		case 3:
			printf("Digite o valor das arestas ->");
			scanf("%f", &arestas);
			printf("Área de um cubo = %.2f \n", (6 * (pow(arestas, 2))));
			break;
		case 4:
			printf("Digite o valor do raio ->");
			scanf("%f", &raioc);
			printf("Digite o valor da altura ->");
			scanf("%f", &altura);
			printf("Área de um cilindro = %.2f \n", 2 * PI * (pow(raioc, 2)));
			break;
		default:
			printf(" Opção não encontrada! \n\n");
	}
}
