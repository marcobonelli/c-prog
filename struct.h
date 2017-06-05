#ifndef STRUCT_H
#define STRUCT_H

typedef struct estrut{
    int vInt;
    float vFloat;
    bool vBool;
} ESTRUTURA;

typedef struct fil{
    int vInt;
    float vFloat;
    bool vBool;
    struct fil *proximo = NULL;
} FILA;

#endif

