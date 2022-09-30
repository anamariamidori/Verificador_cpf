#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void) {
    int cpf[11];
    int i = 0;
    int a = 0;
    int a1 = 0;
    int multiplica = 0;
    int multiplica1 = 0;
    int soma = 0;
    int soma1 = 0;
    int conta = 0;
    int conta1 = 0;
    int verifica = 0;
    int verifica1 = 0;
    for (i = 0; i <= 10; i++){/*recebe os valores do cpf*/
        printf("\n digite o numero %d do cpf ", i);
        scanf("%d", &cpf[i]);
        printf("\n cpf digitado foi: %d  ", cpf[i]);
    }
    for (i = 0; i<=8; i++){/*verifica primeiro digito*/
      multiplica = 10-a;
      a = a +1;
      conta = multiplica * cpf[i];
      printf("\n Conta feita deu %d: ", conta);
      soma = soma + conta;
      printf("\n soma feita deu %d: ", soma);   
    }
    verifica = soma % 11;
    int resultado = 11 - verifica;
    printf("\n verificação deu %d", resultado);
    if(resultado == cpf[9]){
        printf("\n primero numero verificado");
    }
    else{
        printf("\n cpf inválido");
        return 0;
    }
   for (i = 0; i<=9; i++){/*verifica segundo digito*/
      multiplica1 = 11 - a1;
      a1 = a1 +1;
      conta1 = multiplica1 * cpf[i];
      printf("\n Conta feita deu %d: ", conta1);
      soma1 = soma1 + conta1;
      printf("\n soma feita deu %d: ", soma1);   
    }
    verifica1 = soma1 % 11;
    int resultado1 = 11 - verifica1;
    printf("\n verificação deu %d", resultado1);
    if(resultado1 == cpf[10]){
        printf("\nsegundo numero verificado, cpf válido");
        return 0;
    }
    else{
        printf("\ncpf inválido");
        return 0;
    }
    return 0;
}
