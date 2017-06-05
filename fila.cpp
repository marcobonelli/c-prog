#include <iostream>
#include <stdlib.h>

#include "struct.h"
#include "fila.h"

using namespace std;

void aloca_novo(FILA *var, int vInt, float vFloat, bool vBool){
    var->vBool = vBool;
    var->vFloat = vFloat;
    var->vInt = vInt;
    var->proximo = (FILA*)malloc(sizeof(FILA));
}

int main_fila(int LOOP){
    FILA *ponteiro = (FILA*)malloc(sizeof(FILA));
    FILA *inicio = ponteiro;

    bool primeiro = true;

    for(int i = 1; i <= LOOP; i++){
        aloca_novo(ponteiro, i, i, false);
        ponteiro = ponteiro->proximo;
    }

    do{
        if(inicio->proximo != NULL){
            cout << inicio->vBool << " - " << inicio->vFloat << " - " << inicio->vInt << endl;
            inicio = inicio->proximo;
        }
    }while (inicio->proximo != NULL);

    return 1;
}

