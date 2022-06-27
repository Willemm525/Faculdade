class Fila {
    private:
        struct elemento {
            int id;
            string arquivo;
            int folhas;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
        int cont_folhas;
        int cont_id;
    public:
        Fila();
        bool vazia();
        bool cheia();
        // alterar
        bool inserir(string auxArquivo,int auxFolhas);
        bool remover(int &auxID, string &auxArquivo,int &auxFolhas);
        // implementar
        string listar();
        int listarFolhas();
        bool inserirFolhas(int auxFolhaSoma);
        bool imprimir();
};
