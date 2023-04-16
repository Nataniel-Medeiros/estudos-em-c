// Importação de bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função principal.
int main(){

    // Imprimie o cabeçalho do jogo.
    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    // Declara um número inteiro aleatório para o jogo de adivinhação.
    int segundos = time(0);
    srand(segundos);
    int numeroaleatorio = rand();
    int numerosecreto = numeroaleatorio % 100;

    // Variáveis de controle de tentativas e pontuação.
    int tentativas = 1;
    double pontos = 1000;

    // Controlando o número de tentativas.
    while (1) {

            // Mostra o número de tentativas.
            printf("Tentativa número %d \n: ", tentativas);

            // Recebe um número do usuário.
            printf("Qual é o seu chute? ");
            int chute;
            scanf("%d", &chute);
            printf("Seu chute foi %d \n ", chute);

            if(chute < 0){
                printf("Você não pode chutar números negativos! \n");
                continue;
            }

            int acertou = (chute == numerosecreto);
            int maior = (chute > numerosecreto);

            // Verifica se acertou, ou se é maior ou menor que o número secreto.
            if (acertou) {
                printf("Parabéns você acertou!\n");
                break;
            } else if (maior) {
                    printf("Seu chute foi maior que o número secreto.\n");
                } else {
                printf("Seu chute foi menor que o número secreto.\n");
                    
            }

            tentativas++;

            double pontosperdidos = abs (chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;
    }

    printf("***********************************\n");
    printf("* Você conseguiu em %d tentativas *\n", tentativas);
    printf("****** Total de pontos: %.2f ******\n", pontos);
    printf("*********** Fim do jogo! **********\n");
    printf("***********************************\n");

}