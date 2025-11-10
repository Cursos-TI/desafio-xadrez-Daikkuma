#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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

    
        printf("Desafio de Xadrez - MateCheck\n");
        printf("\nMovendo a Torre 5 casas para a direita:\n");
        for (int torre = 0; torre < 5; torre++){ // variavel torre // Mover a Torre 5 casas para a direita
            printf ("Direita\n"); // 

        }
        printf("\n");
        printf("Movendo o Bispo 5 casas na diagonal para cima e para a direita:\n");
        int bispo = 0; // declarando a variavel bispo
        while (bispo < 5) {  // loop while para o Bispo se mover 5x
            printf("Diagonal para cima e direita\n"); // direcao cima e direita 5x do Bispo
            bispo++; 
        }

        printf("\n"); //
        printf("Movendo a rainha 8 casas para a esquerda:\n");
        
        int rainha = 0; // declarando a variavel rainha

        do { //loop do while para a Rainha se mover 8x
            printf("Esquerda\n");
            rainha++; 
        } while (rainha < 8); //condicao do loop do while para direcao esquerda 8x da Rainha

        printf("\nMovendo o Cavalo em L:\n");
        int movimentoCompleto = 1; // declarando a variavel igual a 1
        while (movimentoCompleto --) // loop while para o Cavalo se mover em L
              { 
                for (int cavalo = 0; cavalo < 2; cavalo++) { // loop for para o Cavalo se mover duas casas para frente
                    printf("Cima\n"); // direcao duas casas para frente do Cavalo
                    
                } // fim do for
                printf("Direita\n"); // direcao uma casa para a direita do Cavalo

              } // fim do while




    return 0;
}
