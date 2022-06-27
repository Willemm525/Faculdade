#include <iostream>
#include <windows.h>

#define MAX 10

using namespace std;

typedef struct SPilha {
int dados[MAX];
int topo;
}TPilha;

int main(){
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    int i, op;

    TPilha pilha;
    pilha.topo = -1;

    do
    {
        system("cls");
        cout << "* * * * * MENU * * * * *\n\n";
        cout << "\n1 - Push";
        cout << "\n2 - Pop";
        cout << "\n3 - Imprime";
        cout << "\n9 - Sair";
        cout << "\n\nDigite a sua opção: ";
        cin >> op;

        switch (op)
        {
            case 1 : system("cls");
            cout << "* * * * * PUSH * * * * *\n\n";
                if (pilha.topo < MAX - 1){
                    pilha.topo = pilha.topo + 1;
                    cout << "\nDigite o elemento a ser inserido: ";
                    cin >> pilha.dados[pilha.topo];
                    cout << "\nElemento inserido com sucesso\n\n";  
                }
                else
                    cout << "Impossivel inserir, a pilha está cheia.\n\n";
                    system("pause");
                    break;
                
            case 2 : system("cls");
            cout << "* * * * * POP * * * * *\n\n";
                if (pilha.topo >= 0){
                    cout << "Elemento excluido: " << pilha.dados[pilha.topo] << "\n";
                    pilha.topo = pilha.topo - 1;
                    cout << "\nElemento removido com sucesso\n\n";
                    
                }
                else
                    cout << "\nImpossivel remover, a pilha está vazia.";
                    system("pause");
                    break;

            case 3 : system("cls");
            cout << "* * * * * IMPRIME * * * * *\n\n";
                if (pilha.topo >=0){
                    for(i = pilha.topo;i >= 0; i--){
                        cout <<"\t" << pilha.dados[i] << "\n";
                    }
                    cout << "\n\n";
                    system("pause");
                }
                else{
                    cout << "\n\nA pilha está vazia.\n\n";
                    system("pause");
                    break;
                }

        }

    } while (op != 9);
    
    
    SetConsoleOutputCP(LinguaPadrao);
    return 0;
}