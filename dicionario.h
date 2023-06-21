typedef struct dicionario Dicio;


Dicio* inicailarDicio();
Dicio* inserirPalavra(Dicio* root, char* palavra);
Dicio* consultar(Dicio* root,char* palavra);
void imprimirPalavraRec(Dicio*,char*,int);
void imprimirDicio(Dicio*);
