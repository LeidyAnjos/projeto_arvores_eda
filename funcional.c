#include"funcional.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Login escrever_login (Login l, FILE * Arquivo_login)
{


  Arquivo_login = fopen ("login.bin", "a");
  if (Arquivo_login != NULL)
    {

      fwrite (&l, sizeof (Login), 1, Arquivo_login);

    }
  return l;
  fclose (Arquivo_login);
}
int
validaSenha (char senha[20])
{

  int senha_aux[20];
  int cont_Letra_Maiuscula = 0;
  int cont_Letra_Minuscula = 0;
  int cont_Numero = 0;
  int cont_Caracteres = 0;

  
  printf("\n\n\n|A senha deve conter entre 8 e 15 caractes");
  printf("\n|Obrigatorio:1 letra minuscula - 1 letra maiuscula");
  printf("\n|1 caractere e 1 numeros");
  printf("\n\nDigite a senha:");
  scanf("%s",senha);


  int i = 0;
  //Transforma em inteiros

  for (i = 0; i < strlen (senha); i++)
    {
      senha_aux[i] = senha[i];
    }

  for (i = 0; i < strlen (senha); i++)
    {
      if (senha_aux[i] > 47 && senha_aux[i] < 58)
	cont_Numero++;
      if (senha_aux[i] > 64 && senha_aux[i] < 91)
	cont_Letra_Maiuscula++;
      if (senha_aux[i] > 96 && senha_aux[i] < 123)
	cont_Letra_Minuscula++;
    }
  if (strlen (senha) > 15 || strlen (senha) < 8 || cont_Numero == 0
      || cont_Letra_Maiuscula == 0 || cont_Letra_Minuscula == 0)
    {
      return 0;
    }
  else
    {
      return 1;

    }
    
}






 void _cadastrar_usuario(Login l)
{
    FILE* Arquivo_login;
  char nome_login[40] = "SISTEMA  DE  CONVENIENCIA";
  char esp[5] = " ";
  char _senha[15] = "Senha";
  char _usuario[10] = "Usuario";
  int _val_senha;


  printf ("%-5s", esp);
  printf ("%-10s", nome_login);
  printf ("\n-------------------------------------\n");
  printf ("\n%-5s: ", _usuario);
  scanf ("%s", l.usuario);
  getchar ();

  _val_senha = validaSenha(l.senha);
  
  
  if(_val_senha==0){
      printf("\nSenha Invalida\n\n");
      _cadastrar_usuario(l);
  }
  else
    l = escrever_login (l,Arquivo_login);



}
void _tela_inicial(Login l){
    
    int op_Tela;
    char nome_Sistema[40] = "SISTEMA  DE  CONVENIENCIA";
    char nome_Cadasto[4][40] = {" ","Cadastrar","Entrar","Sair"};
    
    printf("\n-------------------------------");
    printf("\n%-5s",nome_Sistema);
    printf("\n-------------------------------");
    for(int i = 1;i < 4;i++){
        printf("\n [%d] %-6s",i,nome_Cadasto[i]);
    }
    printf("\n\nEscolha: ");
    scanf("%d",&op_Tela);
    
    
    switch(op_Tela){
        //CADASTRAR
        case 1:{
            _cadastrar_usuario(l);
            break;
        }
        //Entrar
        case 2:{break;} 
        case 3:{
            exit(1);
            
            break;}
        default: 
            {printf("\nOpcao Invalida");
            _tela_inicial(l);
        
        }
    }
}





