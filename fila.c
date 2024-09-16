#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
Fila* cria(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

No* ins_fim (No* fim, float v){
    No* p = (No*) malloc(sizeof(No));
    p->info = v;
    p->prox = NULL;
    if (fim != NULL)
    fim->prox = p;
    return p;
}

No* ret_ini (No* ini){
    No* p = ini->prox;
    free(ini);
    return p;
}
void insere (Fila* f, float v){
    f->fim = ins_fim(f->fim,v);
    if (f->ini==NULL){
    f->ini = f->fim;
    }
}
float retira (Fila* f){
    float v;
    if (vazia(f)) {
    printf("Fila vazia.\n");
    exit(1);
}
    v = f->ini->info;
    f->ini = ret_ini(f->ini);
    if (f->ini == NULL)
    f->fim = NULL;
    return v;
}

int vazia(Fila* f){
    return (f->ini == NULL);
}

void libera(Fila* f){
    No* q = f->ini;
    while(q!=NULL){
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

void imprime(Fila* f){
        No* q;
        for(q = f->ini; q!=NULL;q=q->prox){
            printf("%.2f\n", q->info);
        }
    }
