#include <stdio.h>
#include "fila.h"
int main (void)
{
Fila* f = cria();
insere(f,17.0);
insere(f,22.0);
insere(f,13.0);
insere(f,55.0);
printf("Configuracao da fila:\n");
imprime(f);
retira(f);
printf("=============TIRA!==============\n");
imprime(f);
printf("===============BOTA!================\n");
insere(f, 40.0);
imprime(f);
return 0;
}
