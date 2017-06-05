#include <iostream>
#include <stdlib.h>

#include "struct.h"
#include "lista.h"

using namespace std;

void aloca_novo(ESTRUTURA *ponteiro, int tamanho){
    ESTRUTURA *var = (ESTRUTURA*)malloc((tamanho + 1) * sizeof(ESTRUTURA));

    for(int i = 0; i < tamanho - 1; i++){
        var[i].vBool = ponteiro[i].vBool;
        var[i].vFloat = ponteiro[i].vFloat;
        var[i].vInt = ponteiro[i].vInt;
    }

    ponteiro = var;
}

int main_lista(int LOOP){
    ESTRUTURA *ponteiro = (ESTRUTURA*)malloc(sizeof(ESTRUTURA));

    int quant_dados = 0;

    for(int i = 1; i <= LOOP; i++){
        ponteiro[quant_dados].vBool = false;
        ponteiro[quant_dados].vFloat = i;
        ponteiro[quant_dados].vInt = i;
        quant_dados++;

        aloca_novo(ponteiro, quant_dados);

    }

    for(int i = 0; i < LOOP; i++)
        cout << ponteiro[i].vBool << " - " << ponteiro[i].vFloat << " - " << ponteiro[i].vInt << endl;

    return 0;
}

