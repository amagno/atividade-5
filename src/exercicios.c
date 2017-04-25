#include <stdio.h>
#include <math.h>

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
void velocidadeMaximaMulta() {
	int vm, v;
	printf("Digite a velocidade máxima permitida    -> ");
	scanf("%d", &vm);
	printf("Digite a velocidade do carro no momento -> ");
	scanf("%d", &v);

	if ((v - vm) <= 10) {
		printf("Valor da multa = 50,00R$ ");
		return;
	}
	if ((v - vm) > 10 && (v - vm) <= 30) {
		printf("Valor da multa = 100,00R$ ");
		return;
	}
	if ((v - vm) > 30) {
		printf("Valor da multa = 200,00R$ ");
		return;
	}

}
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
