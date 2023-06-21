#include"dicionario.h"
#include<stdio.h>
#include<stdlib.h>

int main(){

    Dicio* root = inicailarDicio();
    root = inserirPalavra(root,"bola");
    printf("\ndone!\n");
    return 0;
}