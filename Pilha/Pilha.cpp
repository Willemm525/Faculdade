#include "Pilha.h"

Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

void Pilha::invertepilha(){
    int inverte[MAX], i;

    for(int i = 0; i < contador; i++){
        inverte[i] = conteudo[contador - i -1];
    }

    for(int i = 0; i < contador; i++){
        conteudo[i] = inverte[i];
    }
}

int Pilha::maiorvalor(){
    int maior_val = 0, i;

    for(i = 0; i < MAX; i++){
        if(conteudo[i] > maior_val){
            maior_val = conteudo[i];
        }
    }

    return maior_val;
}

int Pilha::menorvalor(){
    int menor_val, i;

    for(i = 0; i < MAX; i++){
        if(i == 0){
            menor_val = conteudo[i];
        }
        else{
            if(conteudo[i] < menor_val){
                menor_val = conteudo[i];
            }
        }
    }

    return menor_val;
}

float Pilha::mediavalores(){
    int media_val, soma_val = 0, i;

    for(i = 0; i < MAX; i++){
        soma_val += conteudo[i];
    }

    media_val = soma_val / contador;

    return media_val;
}

string Pilha::listaimpares(){
    int i;
    string lista_i;

    for(i = 0; i < MAX; i++){
        if(conteudo[i] % 2 != 0){
            lista_i = lista_i + "\n" + to_string(conteudo[i]);
        }
    }

    return lista_i;
}

bool Pilha::verif_palindromo(){
    string palavra1 = "esse";

    if (palavra1 == string(palavra1.rbegin(), palavra1.rend())) {
        return true;
    } else {
        return false;
    }
}
