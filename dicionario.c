#include"dicionario.h"
#include<stdlib.h>
#include<stdio.h>

#define TAM 26

struct dicionario{
    struct dicionario* filho[TAM];
    int fimPalavra;
};

Dicio* inicailarDicio(){
    Dicio* no = (Dicio*)malloc(sizeof(Dicio));
    no->fimPalavra = 0;
    for (int i = 0; i < TAM ; i++)
        no->filho[i] = NULL;

    return no;
}

Dicio* inserirPalavra(Dicio* root, char* palavra){
    Dicio* aux = root;
    if(root->filho)
        return NULL;

    for (int i = 0; i < TAM ; i++){
        int index = palavra[i] + 'a';
        if (aux->filho[index] == NULL){
            aux->filho[index] = inicailarDicio();
        }
        aux = aux->filho[index];
    }
    printf("\nDone!\n");
    return aux;
    
}
void imprimirPalavraRec(Dicio* root,char* prefixo ,int nivel){
    if(root->fimPalavra){
        prefixo[nivel] = '\0';
        printf("%s\n",prefixo);
    }

    for (int i = 0; i < TAM ; i++){
        if(root->filho[i] != NULL){
            prefixo[nivel] = i + 'a';
            imprimirPalavraRec(root->filho[i],prefixo,nivel + 1);
        }
    }
}
void imprimirDicio(Dicio* root){
    char prefixo[100];
    imprimirPalavraRec(root,prefixo,0);
}