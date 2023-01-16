    
    #ifndef ARVORE_H
    #define ARVORE_H
    #include <stdio.h>
    #include <stdlib.h>
    FILE Arq_produto;
    typedef struct produto
    {
      char tipo_categoria[15];
      char nome[15];
      int matricula;
      float valor;
      int qtd;
      int tipo;
      float total;
    
    
    } Produto;
    
    
    typedef struct arv
    {
      Produto info;
      struct arv *esq;
      struct arv *dir;
    } Arv;
    void exibir_titulo ();
    void exibir_menu_produtos ();
    int alterar_nome (Arv * a, Produto pdt, char nome[25]);
    int alterar_valor (Arv * a, Produto pdt, int valor);
    int alterar_matricula (Arv * a, Produto pdt, int matricula);
    int alterar_tipo (Arv * a, Produto pdt, int tipo);
    Arv *alterar (Arv * a, Produto p);
    int _buscar (Arv * a, Produto pdt, int matricula);
    int buscaMatricula (Arv * a, Produto pdt, int matricula);
    Arv *leitura (Arv * a, Produto pdt);
    Arv *escrever (Arv * a, Produto pdt);
    int* ordena (Arv * a,int *vetor, int qtd);
    //-------------------------------------------------------------
    void mensagem ();
    void titulo_geral ();
    void menu_categoria ();
    void exibe_menu_principal ();
    int menu_relatorio ();
    Produto insere_produto (Produto pdt);
    Arv *inicializa (void);
    Arv *cria (Produto c, Arv * e, Arv * d);
    int vazia (Arv * a);
    void cabecalho_produtos ();
    Arv *insere_na_Arvore (Arv * a, Produto p);
    Arv *retira (Arv * raiz, int chave);
    void imprime (Arv * a);
    int busca (Arv * a, Produto pdt);
    Arv *libera (Arv * a);
    Arv *relatorio_categoricos (Arv * a, int num);
    int contar (Arv * a);
    int *insere_Vetor (Arv * a, Produto pdt, FILE * f);
    Arv *excluir_produto (Arv * a, int chave);

    #endif
