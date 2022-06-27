#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    cont_id = 1;
    cont_folhas = 0;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(string auxArquivo, int auxFolhas) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:      
    PonteiroElemento p;
    p = new elemento;
    if (cont_folhas < auxFolhas){
    return false;                
    }    
    p->arquivo = auxArquivo;
    p->folhas = auxFolhas;
    cont_folhas = cont_folhas - auxFolhas;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->id = cont_id;
    cont_id++;
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &auxID , string &auxArquivo , int&auxFolhas) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
    return false;

    auxFolhas = inicio->folhas;
    auxArquivo = inicio->arquivo;
    auxID = inicio->id;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui
    PonteiroElemento aux;
    string retorno;
    for(aux = inicio; aux != NULL; aux = aux->proximoElemento){
        retorno = retorno + to_string(aux->id) + " - " + aux->arquivo + " - " + to_string(aux->folhas) + "\n";
    }

    return retorno;	
    
}
bool Fila::inserirFolhas(int auxFolhaSoma) {
    // Inserir mais folhas na impressora;
	// Seu código aqui
    cont_folhas = cont_folhas + auxFolhaSoma;
    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui
    return cont_folhas;
}

