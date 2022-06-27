#include <iostream>
#include <windows.h>
#include <string.h>

#define A 1000

using namespace std;

void func_leitura(char texto[A],char linha[A],char &vazio){
//Função que faz a leitura no conteúdo do arquivo texto, e verifica se o mesmo possúi conteúdo.
    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    if(arquivo == NULL){
        cout << "Impossivel continuar,erro ao abrir o arquivo 'texto.txt'.\n";
        system("pause");
        vazio = '1';
    }

    else{
        strcpy(texto,"");
            while(fgets(linha,1000,arquivo)!=NULL){
                strcat(texto,linha);
            }
    }

    if (strlen(texto) == 0){
        cout << "Impossivel continuar, não há conteúdo no arquivo 'texto.txt'.\n";
        system("pause");
        vazio = '1';
    }
    fclose(arquivo);
}

void func_criptog(char texto[A]){
//Função que faz a criptografia do conteúdo no arquivo texto e coloca esse conteúdo dentro dele.
    FILE *arquivo;
    arquivo = fopen("texto.txt","w");
    int i;
    for (i=0;i<strlen(texto);i++){
        if(texto[i]!='x' && texto[i]!='y' && texto[i]!='z' && texto[i]!='X' && texto[i]!='Y' && texto[i]!='Z' && texto[i]!=' '){
            texto[i] = texto[i] + 3;  
        }
        else{
        if(texto[i] == ' '){
            texto[i] = ' ';
            fputc(texto[i],arquivo);
        }
        if(texto[i] == 'x'){
            texto[i] = 'a';
        }
        if(texto[i] == 'y'){
            texto[i] = 'b';
        }
        if(texto[i] == 'z'){
            texto[i] = 'c';
        }
        if(texto[i] == 'X'){
            texto[i] = 'A';
        }
        if(texto[i] == 'Y'){
            texto[i] = 'B';
        }
        if(texto[i] == 'Z'){
            texto[i] = 'C';
        }
        }
        if(isalpha(texto[i])){
            fputc(texto[i],arquivo);
        }
    }
    fclose(arquivo);
}

void func_descriptog(char texto[A]){
//Função que faz a descriptografia do conteúdo no arquivo texto e coloca esse conteúdo dentro dele.
    FILE *arquivo;
    arquivo = fopen("texto.txt","w");
    int i;
    for (i=0;i<strlen(texto);i++){
        if(texto[i]!='a' && texto[i]!='b' && texto[i]!='c' && texto[i]!='A' && texto[i]!='B' && texto[i]!='C' && texto[i]!=' '){
            texto[i] = texto[i] - 3;  
        }
        else{
        if(texto[i] == ' '){
            texto[i]=' ';
            fputc(texto[i],arquivo);
        }
        if(texto[i] =='a'){
            texto[i] = 'x';
        }
        if(texto[i] == 'b'){
            texto[i] = 'y';
        }
        if(texto[i] == 'c'){
            texto[i] = 'z';
        }
        if(texto[i] == 'A'){
            texto[i] = 'X';
        }
        if(texto[i] == 'B'){
            texto[i] = 'Y';
        }
        if(texto[i] == 'C'){
            texto[i] = 'Z';
        }
        }
    
        if(isalpha(texto[i])){
        fputc(texto[i],arquivo);
        }
    }
    fclose(arquivo);
}

void func_mostratexto(char texto[A],char linha[A]){
//Função que exibe o conteúdo do arquivo texto.
    int i,tamanho;
    tamanho = strlen(texto);
    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    strcpy(texto,"");
        while(fgets(linha,1000,arquivo)!=NULL){
            strcat(texto,linha);
        }
    
    for (i=0;i<tamanho;i++){
        if(texto[i] == ' '){
        cout << texto[i];
        }
        if(isalpha(texto[i])){
        cout << texto[i];
        }
    
    fclose(arquivo);
}
    cout << "\n\n\n\n";
}

int main(){
//Função principal para a execução do código.
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    int op,i;
    char texto[A],linha[A],vazio;
    
    func_leitura(texto,linha,vazio);

    if (vazio != '1'){
    do
    {
        system("cls");
        cout << "* * * * * M E N U * * * * *\n\n\n";
        cout << "\n1 - Criptografar Texto";
        cout << "\n2 - Descriptografar Texto";
        cout << "\n3 - Mostrar Texto";
        cout << "\n9 - Sair\n\n";
        cout << "\nDigite a sua opcao -> ";
        cin >> op;

        switch (op){
        case 1 :
        system("cls");
        cout << "* * * * * C R I P T O G R A F A R * * * * *\n\n";

        func_criptog(texto);

        cout << "\n\nTexto Criptografado com sucesso!\n\n\n\n";
        system("pause");
        break;

        case 2 :
        system("cls");
        cout << "* * * * * D E S C R I P T O G R A F A R * * * * *\n\n";

        func_descriptog(texto);

        cout << "\n\nTexto Descriptografado com sucesso!\n\n\n\n";
        system("pause");
        break;

        case 3 :
        system("cls");

        cout << "* * * * * M O S T R A R  T E X T O * * * * *\n\n";
        cout << "\n\nO texto presente no documento texto.txt é:\n\n\n\n";

        func_mostratexto(texto,linha);

        system("pause");
        break;
        }
    } while (op!=9);
    }

SetConsoleOutputCP(LinguaPadrao);
return 0;
}