

#include "arvorebinaria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//_.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-.__.-B(-._
void exibir_titulo(){
    char esp[3]=" ";
    char c[10]=">>---- * ";
    char d[10]="----<<";
    
    char _CONVENIENCIA[20] = "CONVENIENCIA";
    
    printf("\n%s%s%s%s%s%s%s\n",c,d,c,d,c,d,c);
    printf("\n%19s%s",esp,_CONVENIENCIA);
    printf("\n\n%s%s%s%s%s%s%s\n\n",c,d,c,d,c,d,c);
}
//=========================================================================
//------------------ VETOR OPCOES DE MENUS | MENU PRINICPAL ---------------



char menu_principal[9][20] = { " ", "Cadastrar", "Alterar","Excluir","Buscar", 
"Vendas","Relatorios", "Sair"
};


//=========================================================================
//---------- VETOR OPCOES DE MENUS | MENU CATEGORIAS DE PRODUTOS ----------

char categoria[11][15] = { " ", "Doces", "Laticinios", "Higiene", "Bebida",
  "Hortifruti", "Mercearia", "Padaria","Acougue","Diversos"
};

//=========================================================================
//------------------ VETOR OPCOES DE MENUS | PRODUTO --------------------

char menuProduto[9][20]= {" ","Nome","Matricula","Valor","Qdt","Tipo","Total",
" Voltar"};

//=========================================================================
//-------------- VETOR OPCOES DE MENUS | TIPOS DE RELATCRRIOS -------------

char tipos_relatorio[13][20] = {
  " ", "Doces",
  "Laticinios",
  "Higiene",
  "Bebida",
  "Hortifruti",
  "Mercearia",
  "Padaria" ,
  "Matricula",
  "Categoria",
  "Quantidad",
  "Valor",
  "Mais Vendidos"
};



//===========================  F U N C O E S ==============================
//-------------------------------------------------------------------------


//--------
void mensagem(){
    char esp[3] = " ";
    char Escolha[15] = "Escolha";
    char uma[5] = "Uma";
    char opcao[10]= "Opcao";
    printf("\n\n>------<: :>----------<>------<: :>---------->>\n");
    printf("%s %s %s: ",Escolha, uma, opcao);

}

void cabecalho_produtos (){
  char _matricula[15] = "Matricula";
  char _nome[15] = "Nome";
  char _categoria[15] = "Categoria";
  char _qtd[10] = "Qtd";
  char _tipo[10] = "Tipo";
  char _valor[10] = "Valor";

    ("\n****************************************************************************\n");
  printf ("\n%-17s%-15s%-15s%-10s%-10s%-10s\n", _matricula, _nome, _categoria,
	  _qtd, _tipo, _valor);
  printf
    ("\n****************************************************************************\n");

}


//-------------------------------------------------------------------------
//---------------------- FUNCOES | EXIBE MENU PRINCIPAL --------------------
void exibe_menu_principal (){
  int i;
  
          char esp[3]= " ";
          exibir_titulo();

  for (i = 1; i < 8; i++)
    {
      printf (" %d - %-9s  %-6s", i, menu_principal[i],esp);
      if(i%3==0) printf("\n\n");
      

    }				//end for
}
//-------------------------------------------------------------------------
//---------------------- FUNCOES | EXIBE MENU PRODUTOS --------------------
void exibir_menu_produtos (){
    int i;
    
    char esp[3]= " ";
    exibir_titulo();
    
    for (i = 1; i < 9; i++){
        printf (" %d - %-9s  %-6s", i, menuProduto[i],esp);
        if(i%3==0) printf("\n\n");
    }				//end for
}

//=========================================================================
//------------- FUNCOES | EXIBE MENU DE CATEGORIAS DE PRODUTOS ------------

void menu_categoria (){
   
  int i;
  char esp[3] = " ";
 
 
  printf ("\n%6sTIPOS DE PRODUTOS\n\n",esp);
  
  for (i = 1; i <= 9; i++){
      printf ("%5s %2d) - %-16s",esp, i, categoria[i]);
      if(i%3 == 0) printf("\n\n");
        
    }//end for
    printf("\n\n");
}

//=========================================================================
//------------- FUNCOES | EXIBE MENU DE RELATORIOS DE PRODUTOS ------------
int menu_relatorio (){
    int i, op_relatorio;
    printf ("\nTIPO DE RELATORIO\n\n");
    for (i = 1; i <= 11; i++){
       printf ("%5d)- %-18s", i, tipos_relatorio[i]);
            if(i%3 == 0) printf("\n\n\n");
    }//enD for
    
    printf ("\nDigite um tipo de relatorio: ");
    scanf ("%d", &op_relatorio);
    getchar ();
    
    return op_relatorio;
}

//=========================================================================
//--------- FUNCOES | EXIBE A PALAVRA "LOJA" NA TELA PRINCIPAL -------------

void titulo_geral (){
  char a = '#';
  char b = '#';
  printf ("\n|========================|");
  printf ("\n%3c%6c%c%c%c%6c%3c%c%c%c", b, b, b, b, b, b, b, b, b, b);
  printf ("\n%3c%6c%3c%6c%3c%3c", a, a, a, a, a, a);
  printf ("\n%3c%6c%3c%6c%3c%c%c%c", a, a, a, a, a, b, b, a);
  printf ("\n%3c%6c%3c%3c%3c%3c%3c", a, a, a, a, a, a, a);
  printf ("\n%3c%c%c%c%3c%c%c%c%3c%c%c%c%3c%3c", b, b, b, b, b, b, b, b, b, b,
	  b, b, b, b);
  printf ("\n|========================|\n\n");
}

//=========================================================================
//--------- FUNCOES | RECEBE PRODUTO E ARMAZENA DA VARIAVEL pdt -----------

Produto insere_produto (Produto pdt){
    system("clear");
    exibir_titulo();
    printf ("\nInsere dados do produto\n ");
    
    printf ("\n Matricula -------------:");
    scanf ("%d", &pdt.matricula);
    
    printf ("\n Nome do Produto -------:");
    scanf ("%s", pdt.nome);
    getchar ();
    printf ("\n Valor -----------------:");
    scanf ("%f", &pdt.valor);
    printf ("\n Quantidade-------------:");
    scanf ("%d", &pdt.qtd);
    
    menu_categoria ();
    
    printf ("\n Tipo-------------------:");
    scanf ("%d", &pdt.tipo);
    getchar ();
    
    for (int i = 1; i <= 7; i++){
        if (pdt.tipo == i){
            strcpy (pdt.tipo_categoria, categoria[i]);
        }			//end if
    }				//end for
    
    pdt.total = pdt.qtd*pdt.valor;
    system("clear");
    return pdt;
    }//end function

//============ F U N C O E S   A R V O R E S   B I N A R I A S ============
//=========================================================================
//------------------- FUNCOES | INICIALIZA  A ARVORE  ----------------------
Arv *inicializa (void){
    return NULL;
}

//=========================================================================
//--------------- FUNCAO | CRIA ARVORE E INSERE UM PRODUTO ----------------

Arv *cria (Produto pdt, Arv * sae, Arv * sad){
    Arv *p = (Arv *) malloc (sizeof (Arv));
    p->info = pdt;
    p->esq = sae;
    p->dir = sad;
    return p;
}

//=========================================================================
//-------------- FUNCOES | VERIFICA sE A ARVORE VAZIA (NULL) --------------
int vazia (Arv * a){
    return a == NULL;
}

//=========================================================================
//------------------- FUNCOES | INSERE PRODUTO NA ARVORE  -----------------

Arv *insere_na_Arvore (Arv * a, Produto pdt){

    if (a == NULL){
        a = cria (pdt, a, inicializa ());
    }				//end if
    else{
        if (pdt.matricula < a->info.matricula){
        a->dir = insere_na_Arvore (a->dir, pdt);
    
    }//end if
        else{
        a->esq = insere_na_Arvore (a->esq, pdt);
        }
    }//end else
    return a;
}

    
//=========================================================================
//------------ FUNCOES | RETIRA PRODUTO DA ARVORES BINARIA ----------------
Arv *retira (Arv * raiz, int chave){
    //if 1 - Se a arvore for vazia, finaliza a funC'C#o
    if (raiz == NULL){
        printf ("Valor nao encontrado!\n");
        return NULL;
    }				//end if 1
    //----------------------------------------------------------------
    
    else{//else 1 - Procura o produto para remocao
        
        if (raiz->info.matricula == chave){	// if 2
            // if 3 - remove produto de arvore sem descendentes
            if (raiz->esq == NULL && raiz->dir == NULL){
                free (raiz);
                return NULL;
            }			//end if 3
            
            //else 2 - Remove produto de arvores com descendentes
            else{
            //if 4 - Remove produtos com arvores com 2 descendentes
            if (raiz->esq != NULL && raiz->dir != NULL){
                Produto p;
                Arv *aux = raiz->esq;
                while (aux->dir != NULL)
                    aux = aux->dir;
                p = raiz->info;
                raiz->info = aux->info;
                aux->info = p;
                raiz->esq = retira (raiz->esq, chave);
                return raiz;
            }		//end if 4
            else{		// else 3 remove produto com arvore com 1 descendente
                Arv *aux;
                if (raiz->esq != NULL)
                    aux = raiz->esq;
                else
                    aux = raiz->dir;
                free (raiz);
                return aux;
            }//end else 3
            }//end else 2
        }//end if 2
        
        //else 4
        else
        {
        
        if (chave < raiz->info.matricula)
            raiz->esq = retira (raiz->esq, chave);
        else
            raiz->dir = retira (raiz->dir, chave);
        return raiz;
        }//end else 4
    }//end else 1

}//end funcao


//=========================================================================
//------------ FUNCOES |  PARA EXCLUIR PRODUTO DA ARVORE  -----------------

Arv* excluir_produto(Arv *a, int chave){
    printf("\n\nDigite a matricula do produto para remocao: ");
    scanf("%d",&chave);
    getchar();
    a = retira (a, chave);
}
//=========================================================================
//------------------ FUNCOES| IMPRIME ARVORE BINARIA ----------------------



void imprime (Arv * a){
  if (a != NULL)
    {
      printf ("%-16d ", a->info.matricula);
      printf ("%-16s", a->info.nome);
      printf ("%-15s", a->info.tipo_categoria);
      printf ("%-10d ", a->info.qtd);
      printf ("%-8d ", a->info.tipo);
      printf ("R$ %-8f ", a->info.valor);

      printf
	("\n----------------------------------------------------------------------------\n");
      imprime (a->esq);		/* mostra sae */
      imprime (a->dir);		/* mostra sad */
    }
}
//=========================================================================
//---------------- FUNCOES| IMPRIME UM UNICO PRODUTO ----------------------
Produto imprime_produto (Arv * a){

  if (!vazia (a)){

      printf ("%-14d ", a->info.matricula);
      printf ("%-15s", a->info.nome);
      printf ("%-17s", a->info.tipo_categoria);
      printf ("%-10d ", a->info.qtd);
      printf ("%-4d ", a->info.tipo);
      printf ("R$ %-8.2f ", a->info.valor);
      printf
	("\n---------------------------------------------------------------------------\n");
    }
}

//=========================================================================
//-------------- FUNCAO | BUSCA PRODUTO EM UMA ARVORE ---------------------
int busca (Arv * a, Produto pdt){
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
    return a->info.matricula == pdt.matricula || busca (a->esq, pdt) ||
      busca (a->dir, pdt);
}

//------------------------ R E L A T O R I O ------------------------------
//=========================================================================
//------------------ FUNCOES | RELATORIO | TIPO | VARIADOS  ----------------
Arv *relatorio_categoricos (Arv * a, int num){
    if (vazia (a))
        return 0;			/* C!rvore vazia: nC#o encontrou */
    else{
        if (a->info.tipo == num){
            imprime_produto (a);
        }//end if
    }//end else
    relatorio_categoricos (a->esq, num) || relatorio_categoricos (a->dir, num);
 }//end function




//=========================================================================
//------------------ FUNCOES | BUSCA - PELO NOME DO PRODUTO  --------------


int alterar_nome (Arv * a, Produto pdt,char nome[25]){
    
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
  
    if(strcmp(a->info.nome, nome)==0){
        printf("\nDados do Produto\n");
        imprime_produto(a);
        
        printf ("\n Nome do novo Produto -------:");
        scanf ("%s", a->info.nome);
        getchar();
        printf("\nDados do Produto(Atualizado)\n");
        
        imprime_produto(a);
        
    }
  
      alterar_nome (a->esq, pdt,nome) ||
      alterar_nome (a->dir, pdt,nome);

}
//=========================================================================
//-------------- FUNCAO | BUSCA - PELA MATRICULA DO PRODUTO  --------------

int alterar_matricula (Arv * a, Produto pdt,int matricula){
    
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
  
    if(a->info.matricula == matricula){
        printf("\nDados do Produto\n");
        imprime_produto(a);
        
        printf ("\n Nova Matricula do Produto -------:");
        scanf ("%d", &a->info.matricula);
        getchar();
        printf("\nDados do Produto(Atualizado)\n");
        
        imprime_produto(a);
        
    }
  
      alterar_matricula (a->esq, pdt,matricula) ||
      alterar_matricula (a->dir, pdt,matricula);
}

//=========================================================================
//----------- FUNCAO | BUSCA - ALTERA PELO VALOR DO PRODUTO  --------------
int alterar_valor (Arv * a, Produto pdt,int valor){
    
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
  
    if(a->info.valor == valor){
        printf("\nDados do Produto\n");
        imprime_produto(a);
        
        printf ("\n Novo valor do Produto -------:");
        scanf ("%d", &a->info.matricula);
        getchar();
        printf("\nDados do Produto(Atualizado)\n");
        
        imprime_produto(a);
        
    }
  
      alterar_valor (a->esq, pdt,valor) ||
      alterar_valor (a->dir, pdt,valor);
}

//=========================================================================
//-------------- FUNCAO | BUSCA - ALTERA PELO TIPO DO PRODUTO -------------
int alterar_tipo (Arv * a, Produto pdt,int tipo){
    
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
  
    if(a->info.tipo == tipo){
        printf("\nDados do Produto\n");
        imprime_produto(a);
        
        printf ("\n Novo tipo  do  Produto -------:");
        scanf ("%d", &a->info.tipo);
        getchar();
        printf("\nDados do Produto(Atualizado)\n");
        
        imprime_produto(a);
        
    }
  
      alterar_tipo (a->esq, pdt,tipo) ||
      alterar_tipo (a->dir, pdt,tipo);
}

//=========================================================================
//-------------- FUNCAO | BUSCA - ALTERA PELA QTD DO PRODUTO --------------
int alterar_qtd (Arv * a, Produto pdt,int qtd){
    
  if (vazia (a))
    return 0;			/* C!rvore vazia: nC#o encontrou */
  else
  
    if(a->info.qtd == qtd){
        printf("\nDados do Produto\n");
        imprime_produto(a);
        
        printf ("\n Novo tipo  do  Produto -------:");
        scanf ("%d", &a->info.qtd);
        getchar();
        printf("\nDados do Produto(Atualizado)\n");
        
        imprime_produto(a);
        
    }
  
      alterar_qtd (a->esq, pdt,qtd) ||
      alterar_qtd (a->dir, pdt,qtd);
}


//=========================================================================
//------------------ FUNCAO | ALTERAR DADOS DO PRODUTO  -------------------

Arv* alterar(Arv* a, Produto pdt){
    system("clear");
    exibir_titulo();
    exibir_menu_produtos();
    
    int op_altera;
    char _nome[25];
    int _matricula;
    int _qtd;
    float _valor;
    int _tipo;
    
    
    
    printf("\n\nDigite uma opcao:");
    scanf("%d",&op_altera);
    getchar();
    
    switch(op_altera){
            case 1:{ //nome
                printf ("\n Nome do Produto -------:");
                scanf ("%s", _nome);
                getchar();
                alterar_nome (a,pdt,_nome);
                break;
            }
             case 2:{ //matricula
                printf ("\n Matricula -------------:");
                scanf ("%d", &_matricula);
                getchar();
                alterar_matricula (a,pdt,_matricula);
                break;
            }
             case 3:{ //valor
                printf ("\n Valor -------------:");
                scanf ("%f", &_valor);
                getchar();
                alterar_valor (a,pdt,_valor);
                
                break;
            }
             case 5:{ //qtd
                printf ("\n Quantidade -------------:");
                scanf ("%d", &_qtd);
                getchar();
                alterar_qtd (a,pdt,_qtd);
                break;
            }
             case 6:{ //tipo
                exibir_menu_produtos ();
                printf ("\n Digite o Tipo do Produto para Alterar: ");
                scanf ("%d", &_tipo);
                getchar();
                alterar_tipo (a,pdt,_tipo);
                break;
            }
             case 7:{ //voltar
                
                break;
            }
             case 8:{//SAIR
                exit(1);
                break;
            }
            default: printf("\nOpcao invalida.");
    }
    
    
    
    return a;
    
}
//=========================================================================
//-------------------- FUNCAO | BUSCA | PRODUTO  --------------------------
int buscaMatricula(Arv * a, Produto pdt, int matricula){
  if (a==NULL){
      printf("\nProduto nao encontrado!!!\n");
      return 0;
  }
  else if(pdt.matricula==matricula){
      imprime_produto(a);
      
  }
      
      buscaMatricula (a->esq, pdt,matricula);
      buscaMatricula (a->dir, pdt,matricula);
}

//=========================================================================
//-------------------- FUNCAO | BUSCA | PRODUTO | 2  --------------------------
int _buscar(Arv*a, Produto pdt, int matricula){
    printf("\nDigite a matricula do produto: ");
    scanf("%d",&matricula);
    getchar();
    buscaMatricula(a,pdt,matricula);
    
    
}

//=========================================================================
//------------------ FUNCAO | LEITURA DE ARQUIVO TXT  ---------------------


Arv *leitura (Arv * a, Produto pdt){
    
    FILE * f;
    f = fopen ("arquivo.bin", "rb");
    
    if (f){
        while (!feof(f)){
            if (fread (&pdt, sizeof (Produto), 1, f)==1){
                a = insere_na_Arvore (a,pdt);
                
            }
        
        }			//else while
    
    }				//end if
    else
        printf ("\nErro ao abrir arquivo!\n");
    return a;
    fclose (f);
}




//=========================================================================
//--------- FUNCAO | ESCREVE DADOS DOS PRODUTOS NO ARQUIVO BIN ------------

Arv*escrever(Arv* a,Produto pdt){
    FILE* f;
    f = fopen ("arquivo.bin", "ab");
    if (f != NULL){
        if(a!=NULL){
            fwrite (&a->info, sizeof (Arv), 1, f);
            fprintf(f,"\n");
            fclose (f);
        }
        
       a = escrever(a->dir,pdt);
       a = escrever(a->esq,pdt);
    }
  
  return a;
}



int contar (Arv * a){

  if (a == NULL)
    return 0;

  else{
      return 1 + contar (a->dir) + contar (a->esq);

    }

}


//=========================================================================
//------------------- FUNCAO| LIBERA MEMORIA ALOCADA ---------------------
Arv *libera (Arv * a){
  if (!vazia (a)){
      libera (a->esq);		/* libera sae */
      libera (a->dir);		/* libera sad */
      free (a);			/* libera raiz */
    }
  return NULL;
}
