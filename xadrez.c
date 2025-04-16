#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char opcao;
    int movimentoCavalo = 1;

    printf("Jogo de Xadrez\n");

    // repete até o usuário digitar uma opção válida
    while (1) {
        printf("\nEscolha uma peça para movimentar:\n");
        printf("T. Torre\n");
        printf("B. Bispo\n");
        printf("Q. Rainha\n");
        printf("H. Cavalo\n");
        printf("X. Sair\n");
        printf("Digite a opção: ");
        scanf(" %c", &opcao);

        if (opcao == 'T' || opcao == 't' ||
            opcao == 'B' || opcao == 'b' ||
            opcao == 'Q' || opcao == 'q' ||
            opcao == 'H' || opcao == 'h' ||
            opcao == 'X' || opcao == 'x') {
            break; // Sai do while se for válido
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    // Trata o que foi escolhido
    switch (opcao) {
        case 'T':
        case 't':
            printf("Você escolheu mover a Torre\n");
            printf("Movendo...\n");
            for (int t = 0; t < 5; t++) {
                printf("Direira\n");
            }
            break;
        case 'B':
        case 'b':
            printf("Você escolheu mover o Bispo\n");
            printf("Movendo...\n");
            int b = 0;
            while (b < 5) {
                printf("Cima direita\n");
                b++;
            }
            break;
        case 'Q':
        case 'q':
            printf("Você escolheu mover a Rainha\n");
            printf("Movendo...\n");
            int q = 0;
            do {
                printf("Esquerda\n");                
                q++;
            } while (q < 8);            
            break;
        case 'H':
        case 'h':            
            printf("Você escolheu mover o Cavalo\n");
            printf("Movendo...\n");
            while(movimentoCavalo--) {
                for (int h = 0; h < 2; h++) {
                    printf("Baixo\n"); // Imprime "Cima" duas vezes
                    printf("\n"); // Separa por uma linha
                }
                printf("Esquerda\n"); // Imprime "Direita" uma vez
            }          
            break;    
        case 'X':
        case 'x':
            printf("Saindo do jogo...\n");
            break;
    }
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
