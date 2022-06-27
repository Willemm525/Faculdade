#include <iostream>
#define MAX 10



using namespace std;



int main()
{
int fila[MAX], fim, i, elemento, op;
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
cout << "* * * * * I n s e r i r n a F i l a * * * * *\n\n\n";
if (fim<(MAX-1))
{
cout << "\nDigite o elemento a ser inserido: ";
cin >> elemento;
fim++;
fila[fim]=elemento;
cout << "\n\nElemento inserido com sucesso!\n\n";
}
else
cout << "\n\nImpossivel inserir...\nFila Cheia!\n\n";



system("pause");
break;





case 2 : system("cls");
cout << "* * * * * R e m o v e r d a F i l a * * * * *\n\n\n";
if (fim>=0)
{
elemento=fila[0];
for (i=0;i<fim;i++)
fila[i]=fila[i+1];
fim--;
cout << "\n\nElemento removido: " << elemento;
cout << "\nElemento removido com sucesso!!\n\n";
}
else
cout << "\n\nImpossivel remover...\nFila vazia!\n\n";



system("pause");
break;




case 3 : system("cls");
cout << "* * * * * I m p r i m i r F i l a * * * * *\n\n\n";
if (fim<0)
cout << "\n\nFila Vazia!\n\n";
else
for (i=0;i<=fim;i++)
cout << fila[i] << "\t";



cout << "\n\n\n";
system("pause");
break;



}




}while(op!=9);




return 0;
}