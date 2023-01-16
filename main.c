#include "arvorebinaria.h"
#include "funcional.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    
cabecalho_produtos();

// 1- Controle de acesso
_tela_inicial();

Arv* a;
a = inicializa();
Produto p;
imprime(a);

int menu=0;
int chave;
int matricula;
int op_relatorio;
float somaTotal;

do{
    exibe_menu_principal ();
    mensagem();
    scanf("%d",&menu);
    getchar();
    
    switch(menu){
        
        case 1: //cadastrar
        {
            p = insere_produto(p);
            a = insere_na_Arvore (a,p);
            break;
        }
        //alterar
        case 2: {
            a = alterar(a,p);
            break;
        }
        //excluir
        case 3: {
            a = excluir_produto(a,chave);
            break;
        }
        //buscar
        case 4: {
           _buscar(a,p, matricula);
            break;
        }
        //vendas
        case 5: {
            break;
        }
        //relatorio
        case 6: {
            
            imprime(a);
            op_relatorio = menu_relatorio();
            switch(op_relatorio){
                
                case 1:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 2:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 3:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 4:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 5:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 6:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 7:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                 case 8:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                 case 9:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
                case 10:
                    {relatorio_categoricos (a, op_relatorio); 
                    break;
                    }
            }
        }
    
        //default:
            //printf("\nOpcao invalida\n\n\n");
        
    }


}while(menu!=7);


libera(a);

    return 0;
}

















                
                    