#include <iostream>
#define MAX 40



using namespace std;




typedef struct EPilha{
char dado[MAX];
int topo;
}TPilha;



int push (TPilha *p, int e)
{
if (p->topo>=(MAX-1))
return 2;
else
{
p->topo=p->topo+1;
p->dado[p->topo]=e;
return 0;
}
}



int pop (TPilha *p)
{
if (p->topo<0)
return -1;
else
{
p->topo=p->topo-1;
return 0;
}
}




int main()
{
TPilha pilha;
pilha.topo=-1;
char expressao[MAX];
int flag, i;
flag=0; //flag=0 ok flag=1 faltou fechar parenteses flag =-1 faltou abrir parenteses
// flag=2 erro estouro de pilha
cout << "\n\nDigite a expressao numerica: ";
gets(expressao);
i=0;
while((expressao[i]!='\0') && flag==0)
{
if (expressao[i]=='(')
flag=push(&pilha,'(');



if (expressao[i]==')')
flag=pop(&pilha);
i++;



}



if (pilha.topo>=0)
flag=1;



if (flag==0)
cout << "\n\n Parenteses balanceado! \n\n";
else
if (flag==1)
cout << "\n\nFaltou fechar parenteses!\n\n";
else
if (flag==-1)
cout << "\n\nFaltou abrir parenteses!\n\n";
else
cout << "\n\nERRO!! Estouro de pilha...";




return 0;
}