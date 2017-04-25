#include <stdio.h>
#include <stdlib.h>
#include "../interface/menu_interface.h"
#include "exercicios.h"

int main()
{
    registrarOpcao(1, calcularMediaAluno, "Calcular media de aluno");
    registrarOpcao(2, qualNumeroMaior, "Verifica qual numero e maior");
    return renderizarMenu();
}
