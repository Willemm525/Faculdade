#include <iostream>
#define MAX 4



using namespace std;



int main()
{
int matriz[MAX][MAX];
int linha, coluna, i;
int sds,qnpds, snidp, sdp, difsom;
int op;



do
{
system("cls");
cout << "* * * * * * * * * * M E N U * * * * * * * * * *\n\n\n";
cout << "\n1 - Carrega matriz";
cout << "\n2 - Imprime matriz";
cout << "\n3 - Somatoria dos elementos da diagonal secundaria";
cout << "\n4 - Quantidade de numeros pares da diagonal secundaria";
cout << "\n5 - Somatoria dos numeros impares da diagonal principal";
cout << "\n6 - A diferenca da somatoria da dp pela somatoria da ds";
cout << "\n9 - Sair";
cout << "\n\nDigite a sua opcao-> ";
cin >> op;



switch(op)
{
case 1 : system("cls");
cout << "* * * * * C a r g a d a M a t r i z * * * * *\n\n";
for (linha=0;linha<MAX;linha++)
for (coluna=0;coluna<MAX;coluna++)
{
cout << "\nDigite o elemento " << linha << " X " << coluna << " da matriz: ";
cin >> matriz[linha][coluna];
}
cout << "\n\nElementos inseridos com sucesso!!\n\n\n";
system("pause");
break;



case 2 : system("cls");
cout << "* * * * * I m p r e s s a o d a M a t r i z * * * * *\n\n\n";
for(linha=0;linha<MAX;linha++)
{
cout << endl;
for(coluna=0;coluna<MAX;coluna++)
cout << matriz[linha][coluna] << "\t";
}
cout << "\n\n\n";
system("pause");
break;



case 3 : system("cls");
cout << "* * * * * Somatoria dos elementos da diagonal secundaria * * * * *\n\n\n";
sds=0;
for (i=0;i<MAX;i++)
sds+=matriz[i][(MAX-1)-i];
cout << "\n\nA somatoria dos elementos da diagonal secundaria eh: " << sds << "\n\n\n";
system("pause");
break;



case 4 : system("cls");
cout << "* * * * * Quantidade de numeros pares da diagonal secundaria * * * * *\n\n\n";
qnpds=0;
for (i=0;i<MAX;i++)
if (matriz[i][(MAX-1)-i]%2==0)
qnpds++;
cout << "\n\nA quantidade de numeros pares da diagonal secundaria eh: " << qnpds << "\n\n\n";
system("pause");
break;



case 5 : system("cls");
cout << "* * * * * Somatoria dos numeros impares da diagonal principal * * * * *\n\n\n";
snidp=0;
for(i=0;i<MAX;i++)
if (matriz[i][i]%2!=0)
snidp+=matriz[i][i];
cout << "\n\nA somatoria dos numeros impares da diagonal principal eh: " << snidp << "\n\n\n";
system("pause");
break;




case 6 : system("cls");
cout << "* * * * * A diferenca da somatoria da dp pela somatoria da ds * * * * *\n\n\n";
sdp=0;
for(i=0;i<MAX;i++)
sdp+=matriz[i][i];
sds=0;
for(i=0;i<MAX;i++)
sds+=matriz[i][(MAX-1)-i];
difsom=sdp-sds;
cout << "\n\nA diferenca da somatoria da dp pela somatoria da ds eh: " << difsom << "\n\n\n";
system("pause");
break;



}





}while(op!=9);



return 0;
}