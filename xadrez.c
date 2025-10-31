#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre, bispo, rainha;
    const int movimento = 5;
    const int movimentoRainha = 8;

    int movimentoCavalo = 2;
    char baixo[6] = "Baixo", esquerda[9] = "Esquerda";

    rainha = 0;
    bispo = 0;
    
    // Implementação de Movimentação do Bispo
    //Movimentação do Bispo (cinco casas na diagonal para cima)
    printf("\nEste é um exemplo de movimento do bispo em um jogo de xadrez \n");
    do
    {
       printf("Cima, Direita\n");
       bispo++;

    } while (bispo < movimento);
    
    // Implementação de Movimentação da Torre
    //Movimentação da Torre (cinco casas para a direita)
    printf("Este é um exemplo de movimento da torre em um jogo de xadrez \n");
    for (torre = 0; torre < movimento; torre++){
        printf("Direita \n");
    }

    // Implementação de Movimentação da Rainha
    ///Movimentação da Rainha (oito casas para a esquerda)
    printf("\nEste é um exemplo de movimento da rainha em um jogo de xadrez \n");
    while (rainha < movimentoRainha)
    {
        printf("Esquerda\n");
        rainha++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    for(cavalo = 0; cavalo < movimentoCavalo; cavalo++){
        printf("\nEste é um exemplo de movimento do cavalo em um jogo de xadrez \n");
        printf("%s, %s, ", baixo, baixo);
        
        while (cavalo = 2)
        {
            printf(esquerda);
            break;            
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
