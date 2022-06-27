#include <cstdlib>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


bool Fila::primeiro(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do primeiro elemento da lista
	// seu c�digo aqui:
           if(vazia()){
           return false;
           }
           x = inicio->valor;
	       return x;

}

bool Fila::ultimo(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do �ltimo elemento da lista
	// seu c�digo aqui:
           if(vazia()){
           return false;
           }
           x = fim->valor;
           return x;


}

bool Fila::esvaziar() {
	// caso a lista esteja vazia retornar falso
	// remover todos os elementos da lista
	// seu c�digo aqui:
	       if(vazia()){
           return false;
           }
           PonteiroElemento p;
           p = inicio;
           do{
               inicio = inicio->proximoElemento;
               delete p;
               p = inicio;
           }while(p != NULL);
           return true;

}

int Fila::tamanho() {
	// retornar o tamanho da lista, 0 se estiver vazia
	// seu c�digo aqui:
	       if (vazia()){
           return 0;
           }
           PonteiroElemento aux;
           int tamanho = 0;
           for(aux = inicio; aux != NULL; aux = aux->proximoElemento){
            tamanho++;
           }
           return tamanho;

}

bool Fila::inverter() {
	// caso a lista esteja vazia retornar falso
	// inverter a ordem dos elementos da lista
	// seu c�digo aqui:
            if(vazia()){
            return false;
            }
            int contador = tamanho();
            int vetor[contador], i;
            PonteiroElemento p, aux;

            for(p = inicio, i = contador - 1; p != NULL; p = p->proximoElemento, i--){
                vetor[i] = p->valor;
            }


            for(aux = inicio, i = 0; aux != NULL; aux = aux->proximoElemento, i++){
                aux->valor = vetor[i];
            }

            return true;
}

string Fila::listar() {
	// retornar string com todos os elementos da lista separados por ;
	// exemplo: 1 ; 3 ; 5
	// string vazia se a lista estiver vazia
	// seu c�digo aqui:
            int y;
            Fila auxFila;
            string retorno = "";

            if(vazia())
                return retorno;

            while (remover(y)) {
                retorno = retorno + to_string(y) + " ; ";
                auxFila.inserir(y);
            }

            while (auxFila.remover(y)) {
                inserir(y);
            }

            retorno.pop_back();
            retorno.pop_back();
            retorno.pop_back();
            return retorno;


    }

bool Fila::estaNaFila(int x) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu c�digo aqui:
            PonteiroElemento aux;
            for(aux = inicio; aux != NULL; aux = aux->proximoElemento){
            if(aux->valor == x){
            return true;
            }
            }
            return false;

}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersec��o com a lista atual
	// elementos em comum com as 2 listas
	// sem repeti��o de elementos
	// seu c�digo aqui:
            int s;

            Fila retorno, auxiliar;

             while(remover(s)){
                if(auxFila.estaNaFila(s) && retorno.vazia()){
                    retorno.inserir(s);
                }
                else{
                    if (retorno.estaNaFila(s))
                    {

                    }     
                    else 
                    if(auxFila.estaNaFila(s)){
                        retorno.inserir(s);
                    } 
                }
            auxiliar.inserir(s);
            }
            
            while (auxiliar.remover(s))
            {
                inserir(s);
            }
            
            return retorno;
}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a uni�o com a lista atual
	// elementos das 2 listas
	// sem repeti��o de elementos
	// seu c�digo aqui:
        int s;

            Fila retorno, auxiliar;
            while (remover(s) or auxFila.remover(s))
            {
                auxiliar.inserir(s);
                if (retorno.vazia())
                {
                    retorno.inserir(s);
                }
                else {
                    if (retorno.estaNaFila(s))
                    {
                        
                    }
                    else {
                        retorno.inserir(s);
                    }
                    
                }
                
            }
            while (auxiliar.remover(s))
            {
                inserir(s);
            }
            
            return retorno;

}




