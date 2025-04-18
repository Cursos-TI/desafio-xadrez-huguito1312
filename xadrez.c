#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre (int t) {
    printf("Você escolheu mover a Torre\n");
    printf("Movendo...\n");
    for (t = 0; t < 5; t++) {
        printf("Direita\n");
    }
}

void moverBispo (){
    printf("Você escolheu mover o Bispo\n");
    printf("Movendo...\n");
    int movimentoBispo = 1;    
    while(movimentoBispo--) {
        for (int h = 0, v = 10; h < 5 && v > 5; h++, v--) {
            printf("Diagonal Cima /"); // Imprime "Cima" cinco vezes
            printf(" Direita\n");
            printf("\n"); // Separa por uma linha
        }
        printf("\n"); // Imprime "Direita" cinco vezes
    }
} 

void moverRainha (int q) {
    printf("Você escolheu mover a Rainha\n");
    printf("Movendo...\n");    
    q = 0;
    do {
        printf("Esquerda\n");                
        q++;
    } while (q < 8);
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char opcao;
    int movimentoCavalo = 1;
    int torre = 5, rainha = 8, bispo = 5;

    printf("Jogo de Xadrez\n");

    // repete até o usuário digitar uma opção válida
    while (1) {
        printf("\nEscolha uma peça para movimentar:\n");
        printf("T. Torre\n");
        printf("B. Bispo\n");
        printf("Q. Rainha\n");
        printf("C. Cavalo\n");
        printf("X. Sair\n");
        printf("Digite a opção: ");
        scanf(" %c", &opcao);

        if (opcao == 'T' || opcao == 't' ||
            opcao == 'B' || opcao == 'b' ||
            opcao == 'Q' || opcao == 'q' ||
            opcao == 'C' || opcao == 'c' ||
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
            moverTorre(torre);       
            break;
        case 'B':
        case 'b':            
            moverBispo(bispo);
            break;
        case 'Q':
        case 'q':
            moverRainha(rainha);
            break;
        case 'C':
        case 'c':            
            while(movimentoCavalo--) {
                printf("Você escolheu mover o Cavalo\n"); 
                printf("Movendo...\n");
                    // Move na vertical
                for (int i = 0, linha = 4; i < 2 && linha > 0; i++, linha--) {
                    printf("Cima\n");
                }
                    // Move na horizontal
                for (int j = 0, coluna = 3; j < 1 && coluna < 8; j++, coluna++) {
                    printf("Direita\n");
                }
                
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
