#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int mes, ano;

} TD;

typedef struct prod{
    int cod;
    float peso, preco;
    TD *valid;

} TPROD;


// para trocar a posicao, pegamos o ponteiro de cada struct e trocamos seu conteúdo
void trocarPosicao(TPROD *a, TPROD *b) {
    TPROD temp = *a;
    *a = *b;
    *b = temp;
}

// preco maiores vem primeiro
void desempatePreco(TPROD *a, TPROD *b) {
    if (a->preco < b->preco) { 
        trocarPosicao(a, b);
    }
}

// datas mais próximas vem primeiro
void desempateData(TPROD *a, TPROD *b) {
    if (a->valid->ano > b->valid->ano) { 
        trocarPosicao(a, b);
    } else if (a->valid->ano == b->valid->ano) {
        if (a->valid->mes > b->valid->mes) { 
            trocarPosicao(a, b);
        } else if (b->valid->mes == a->valid->mes) {
            desempatePreco(a, b);
        }
    }
}

// ordenando atraves de um algoritmo de ordenação ingênua

void ordena1(TPROD **prat, int N) {

    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (prat[i]->cod > prat[j]->cod) { // primeira condicao, codigo menor vem antes

                trocarPosicao(prat[i], prat[j]);

            } else if(prat[i]->cod == prat[j]->cod) {
                desempateData(prat[i], prat[j]); 
            }
        }
    }
}

