// Importação de bibliotecas.
#include <stdio.h>

// função principal.
int main(){

    // Imprimie o cabeçalho do jogo.
    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    // Declara um número inteiro aleatório para o jogo de adivinhação.
    int numeroSecreto = 26;

    // Recebe um número do usuário.
    printf("Qual é o seu chute? ");
    int chute;
    scanf("%d",&chute);
    printf("Seu chute foi %d \n ", chute);

}