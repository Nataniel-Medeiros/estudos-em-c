// Importação de bibliotecas.
#include <stdio.h>

// função principal.
int main(){

    // Imprimie o cabeçalho do jogo.
    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    // Declara um número inteiro aleatório para o jogo de adivinhação.
    int numerosecreto = 26;

    // Controlando o número de tentativas.
    for (int i = 1; i <= 3; i++) {

            // Mostra o número de tentativas.
            printf("Tentativa número %d de %d \n: ",i, 3);

            // Recebe um número do usuário.
            printf("Qual é o seu chute? ");
            int chute;
            scanf("%d", &chute);
            printf("Seu chute foi %d \n ", chute);

            if(chute < 0){
                printf("Você não pode chutar números negativos! \n");
                i--;
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
    }

    printf("****************\n");
    printf("* Fim do jogo! *\n");
    printf("****************\n");

}