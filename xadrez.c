#include <stdio.h>

//Função Movimento BISPO
void movBispo (int n){
    if (n > 0){
        printf("Cima\n");
        printf("Direita\n");
        movBispo(n-1);
    }
}

//Função Movimento TORRE
void movTorre (int n){
    if (n > 0){
        printf("Direita\n");
        movTorre(n-1);
    }
}

//Função Movimento RAINHA
void movRainha (int n){
    if (n > 0){
        printf("Esquerda\n");
        movRainha(n-1);
    }
}

//Função Movimento CAVALO
void movCavalo (int n, int m){
    if (n > 0){
        while (m > 0){
            printf("Direita\n");
            m--;
        }
        printf("Cima\n");
        movCavalo(n-1, m);
    }
}

int main (){
    // Declaração de Variáveis;
    int bispoDesloc = 5;    //Deslocamento Bispo Constante
    int torreDesloc = 5;    //Deslocamento Torre Constante 
    int rainhaDesloc = 8;   //Deslocamento Rainha Constante
    int cavaloDesloc_1 = 2; //1º Deslocamento Cavalo Constante
    int cavaloDesloc_2 = cavaloDesloc_1 == 1 ? 2 : 1;

    // Deslocamento BISPO para [Diagonal Superior Direita]

    printf("Deslocamento BISPO: %d casas na Diagonal superior direita\n", bispoDesloc);
    movBispo(bispoDesloc);

    // Deslocamento TORRE para [Direita]

    printf("Deslocamento TORRE: %d casas para a direita\n", torreDesloc);
    movTorre(torreDesloc);
    
    // Deslocamento RAINHA para [Esquerda]

    printf("Deslocamento RAINHA: %d casas para a esquerda\n", rainhaDesloc);
    movRainha(rainhaDesloc);

    // Deslocamento CAVALO para [Cima e Direita]
    printf("Deslocamento CAVALO: %d casas para a Cima e %d para Direita\n", cavaloDesloc_1, cavaloDesloc_2);
    movCavalo(cavaloDesloc_1, cavaloDesloc_2);

    return 0;
}