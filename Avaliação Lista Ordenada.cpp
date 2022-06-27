#include <iostream>
#include <windows.h>
#define MAX 10

using namespace std;

int main()
{
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    int lista[MAX], fim, i, elemento, posi, op;
    fim=-1;
do
{
    system("cls");
    cout << "* * * * * M E N U * * * * *\n\n\n";
    cout << "\n1 - Inserir";
    cout << "\n2 - Remover";
    cout << "\n3 - Imprimir";
    cout << "\n9 - Sair\n\n";
    cout << "\nDigite a sua opcao -> ";
    cin >> op;



    switch (op)
{

    case 1 : system("cls");
        cout << "* * * * * I n s e r i r n a L i s t a * * * * *\n\n\n";
        if (fim<(MAX-1))
        {
            cout << "\nDigite a posição a onde quer inserir: ";
            cin >> posi;
            cout << "\nDigite o elemento a ser inserido: ";
            cin >> elemento;
            fim++;

            if (fim >= (posi - 1)){
                
                for (i = fim; i >= (posi - 1); i--)
                {
                    lista[i+1] = lista[i];
                }
            
                lista[posi - 1] = elemento;
                cout << "\nElemento inserido com sucesso\n\n";
            }
            else{
                fim--;
                cout << "\nNão é possivel deixar buracos na lista\n\n";
                system("pause");
                break;
                }
                
    }
    else
        cout << "\nImpossivel inserir, a lista está cheia.\n";
        system("pause");
        break;


    case 2 : system("cls");
        cout << "* * * * * R e m o v e r d a L i s t a * * * * *\n\n\n";
        if (fim>=0)
            {
            cout << "\nInsira a posição da qual quer remover: ";
            cin >> posi;
            cout << "\nElemento removido : " << lista[posi-1] << "\n\n";

            for (i = (posi - 1); i <= fim ; i++)
            {
                lista[i] = lista[i + 1];
            }
            fim--;
            }
        else
            cout << "\n\nImpossivel remover...\nLista vazia!\n\n";
            system("pause");
            break;


    case 3 : system("cls");
        cout << "* * * * * I m p r i m i r L i s t a * * * * *\n\n\n";
        if (fim<0)
            cout << "\n\nLista Vazia!\n\n";
    else
        for (i=0;i<=fim;i++){
            cout << i + 1 << "\t"; 
        }
        cout << "\n\n\n";
        for (i=0;i<=fim;i++)
            cout << lista[i] << "\t";

            cout << "\n\n\n";
            system("pause");
            break;

    }

    }while(op!=9);




return 0;
}