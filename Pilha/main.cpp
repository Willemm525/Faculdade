#include <iostream>
using namespace std;
#define MAX 5
#include "Pilha.cpp"

int main() {
    Pilha minhaPilha;
    int recebeValor;
    string lista;
    minhaPilha.empilhar(1);
    minhaPilha.empilhar(2);
    minhaPilha.empilhar(3);
    minhaPilha.empilhar(4);
    minhaPilha.empilhar(5);
    lista = minhaPilha.listaimpares();
    minhaPilha.invertepilha();
    cout << "Pilha invertida com sucesso!" << endl;
    cout << "Lista de impares" << lista << endl;
    cout << "Maior Valor : " << minhaPilha.maiorvalor() << endl;
    cout << "Menor Valor : " << minhaPilha.menorvalor() << endl;

    if (minhaPilha.verif_palindromo() == true){
    cout << "\nPalindromo" << endl;
    }else{
        cout << "Nao e Palindromo" << endl;
    }
}
