#include <stdio.h>
#include <stdlib.h>

void main() {

  int som;
  int mult;
  int div;
  int sub;
  int valor1;
  int valor2;

  int rep;
  rep= 10;

while (rep==10){
  
  printf("insira o primeiro valor\n");
  scanf("%d", &valor1);

  printf("insira o segundo valor\n");
  scanf("%d",&valor2);
  
  int swit;
  
  printf("escolha o operador:\n 1 = soma \n 2 = subtração\n 3 = divisão\n 4 = multiplicação\n");
  scanf("%d",&swit);

  int resul_som;
  int resul_mult;
  int resul_div;
  int resul_sub;

  int decis;

  switch(swit){

    case 1:
     resul_som= valor1 + valor2;
     printf("o resultado da soma é: %d + %d =%d\n", valor1, valor2, resul_som);
      printf("Quer continuar a executar?\n  1 para sim\n 2 para não\n");
      scanf("%d", &decis);   
      if(decis==1){ 
        rep=10;
       }else {
         rep=11;
         }
    
    break;
    
    case 2:
    resul_sub= valor1 - valor2;
    printf("o resultado da subtração é: %d - %d =%d\n", valor1, valor2, resul_sub);
    printf("Quer continuar a executar?\n  1 para sim\n 2 para não\n");
      scanf("%d", &decis);   
      if(decis==1){ 
        rep=10;
       }else {
         rep=11;
         } 
    break;
    
    case 3:
    resul_div= valor1 / valor2;
    printf("o resultado da divisão é: %d / %d =%d\n", valor1, valor2, resul_div);
    printf("Quer continuar a executar?\n  1 para sim\n 2 para não\n");
      scanf("%d", &decis);   
      if(decis==1){ 
        rep=10;
       }else {
         rep=11;
    }
    break;

    case 4:
    resul_mult= valor1 * valor2;
    printf("o resultado da multiplicação é: %d * %d =%d\n", valor1, valor2, resul_mult);
    printf("Quer continuar a executar?\n  1 para sim\n 2 para não\n");
      scanf("%d", &decis);   
      if(decis==1){ 
        rep=10;
       }else {
         rep=11;
         }
    break;
    }
  }    
}
