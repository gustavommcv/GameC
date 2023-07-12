#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main(void) {

    srand(time(NULL)); //Deve ser chamado apenas 1 vez

    jogar();

    return 0;
}

void jogar() {

}

void mostrarInfo(Calcular calc) {

}

int somar(int resposta, Calcular calc) {

}

int diminuir(int resposta, Calcular calc) {

}

int multiplicar(int resposta, Calcular calc) {

}
