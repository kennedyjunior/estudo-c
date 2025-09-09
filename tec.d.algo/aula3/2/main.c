#include <stdio.h>
// LER O ANO DE NASCIMENTO DE UM NADADOR E CLASSIFICAR EM CATEGORIAS, INFANTIL A- 5 A 7 ANOS, B- 8-10 ANOS
// JUVENIL A - 11-13 ANOS, JUVENIL B- 14-17 ANOS, SENIOR- MAIOR DE 17 ANOS
int main(){
    //DECLARAÇÃO DE VARIAVEIS
    int anoNascimento;
    int anoAtual = 2025;
    int idadeNadador;
     // ENTRADA--- LER DATA DE NASCIMENTO
     printf("ESCREVA SEU ANO DE NASCIMENTO E TECLE ENTER\n");
     scanf("%d" , &anoNascimento);
     
     // PROCESSAMENTO--- CALCULAR A IDADE DO NADADOR
     idadeNadador = (anoAtual - anoNascimento);
     
     // SAIDA--- IMPRIMIR "O NADADOR DE IDADE $IDADE ANOS É DA CATEGORIA $CATEGORIA
     if(idadeNadador >=5 && idadeNadador <=7){
            printf("O NADADOR ESTA NA CATEGORIA INFANTIL A\n");
     }else if (idadeNadador >=8 && idadeNadador <=10){
            printf("O NADADOR ESTA NA CATEGORIA INFANTIL B\n"); 
     }else if (idadeNadador >=11 && idadeNadador <=13){
            printf("O NADADOR ESTA NA CATEGORIA JUVENIL A\n"); 
     }else if (idadeNadador >=14 && idadeNadador <=17){
            printf("O NADADOR ESTA NA CATEGORIA JUVENIL B\n"); 
     }else if(idadeNadador > 17){
            printf("O NADADOR ESTA NA CATEGORIA SENIOR\n"); 
     }else{
           printf("Idade inválida para clasificação\n");
     }
     
     getchar();
     getchar();
}
