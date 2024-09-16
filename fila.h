struct no {
    float info;
    struct no* prox
 };
 typedef struct no No;

 struct fila{
    No* ini;
    No* fim;
 };
typedef struct fila Fila;

Fila* cria(void);
void insere(Fila* f, float v);
float retira(Fila* f);
int vazia(Fila* f);
void libera(Fila* f);
