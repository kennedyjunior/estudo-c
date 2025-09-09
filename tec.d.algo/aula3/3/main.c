#include <stdio.h>

//RESOLVENDO EXERCICIO ANTERIO UTILIZANDO SWITCH CASE
int main(){
    //VARIAVEIS
    int anoNascimento;
    int anoAtual = 2025;
    int idade;
    //ENTRADA
    printf("ESCREVA O ANO QUE O ATLETA NASCEU!\n");
    scanf("%d", &anoNascimento);
    
    //PROCESSAMENTO
    idade = (anoAtual - anoNascimento);
    
    //SAIDA
    
    switch(idade) { 
         case 0:   
         case 1:
         case 2: 
         case 3:
         case 4:   
               printf("Idade minima n�o alcan�ada!\n");
               break;   
         
         case 5:   
         case 6:
         case 7: 
              printf("Categoria infantil A!\n");
              break;
         
         case 8:   
         case 9:
         case 10: 
              printf("Categoria infantil B!\n");
              break;
         
         case 11:   
         case 12:
         case 13: 
              printf("Categoria juvenil A!\n");
              break;
              
         case 14:   
         case 15:
         case 16:
         case 17:
              printf("Categoria juvenil B!\n");
              break;
         
         default:
                 if(idade > 17){
                          printf("Categoria senior!\n");                 
                 
                 }else {
                       printf("Idade informada n�o � v�lida!\n");                 
                 }
                 break;
    
    
    }
  getchar();
  getchar();
}
