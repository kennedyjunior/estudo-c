//ler um numero inteiro e escrever na tela se o numero lido foi par ou impar

#include <stdio.h>

void verificacao(int verificar){
    if(verificar % 2 == 0){
    printf("o numero eh par\n");  
     }else {
      printf("O numero nao eh par\n");
     }
}


int main() {
    
    int verificar;
    
    printf("ESCREVA UM NUMERO INTEIRO E TECLE ENTER!!\n");
    scanf("%d", &verificar); 
    
    verificacao(verificar);  
    
    printf("APERTE ENTER PARA FECHAR O PROGRAMA...\n");
    getchar();
    getchar();  
    
}
