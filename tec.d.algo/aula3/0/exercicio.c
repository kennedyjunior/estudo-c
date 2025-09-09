// ler duas notas e calcular a soma, apos isso, exibir na tela
// APROVADO se soma for maior ou igual a 6,0
//FINAL se soma for menor que 6,0 e maior ou igual a 1,0
// REPROVADO se soma for menor que 1,0

#include <stdio.h>

void soma(float nota1, float nota2) {
    float total = (nota1 + nota2);
    if (total >= 6.0){
    printf("aprovado!\n"); 
    
    }else if (total < 6.0 && total >=1){
    printf("FOI PRA FINAL!\n");
            
    }else {
    printf("REPROVADO!\n");
    }
   
    
}
int main() {
    float nota1, nota2;
    
    printf("digite a primeira nota e tecle enter!\n");
    scanf("%f", &nota1);
    printf("agora digite a segunda nota e tecle enter!\n");
    scanf("%f", &nota2);
    
    soma(nota1, nota2);
    
    printf("pressione ENTER para sair...");
    getchar();
    getchar();
    
    

}
