#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    int i,a;

    printf("\nDigite um número inteiro para ser feita a tabuada\n");
    scanf("%d",&i);

    for (a = 0; a < 9; a++){
        printf("%d X %d = %3d     %d X %d = %3d\n",i,a+1,i*(a+1),i+1,a+1,(i+1)*(a+1));
    }

    printf("\n");

    for (a = 0; a < 9; a++){
        printf("%d X %d = %3d     %d X %d = %3d\n",i+2,a+1,(i+2)*(a+1),i+3,a+1,(i+3)*(a+1));
    }
    SetConsoleOutputCP(LinguaPadrao);
    return 0;
}