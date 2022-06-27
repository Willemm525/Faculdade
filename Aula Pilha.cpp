#include <iostream>
#include <windows.h>

#define MAX 10

using namespace std;

int main(){
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    int topo = -1, pilha[MAX], i, op;

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
                if (topo < MAX - 1){
                    topo++;
                    cout << "\nDigite o elemento a ser inserido: ";
                    cin >> pilha[topo];
                    cout << "\nElemento inserido com sucesso\n\n";  
                }
                else
                    cout << "Impossivel inserir, a pilha está cheia.\n\n";
                    system("pause");
                    break;
                
            case 2 : system("cls");
            cout << "* * * * * POP * * * * *\n\n";
                if (topo >= 0){
                    cout << "Elemento excluido: " << pilha[topo] << "\n";
                    topo--;
                    cout << "\nElemento removido com sucesso\n\n";
                    
                }
                else
                    cout << "\nImpossivel remover, a pilha está vazia.";
                    system("pause");
                    break;

            case 3 : system("cls");
            cout << "* * * * * IMPRIME * * * * *\n\n";
                if (topo >=0){
                    for(i = topo;i >= 0; i--){
                        cout <<"\t" << pilha[i] << "\n";
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