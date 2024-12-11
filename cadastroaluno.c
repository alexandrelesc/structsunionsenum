#include <stdio.h>
#include <string.h>

struct modelo_ficha {
  char nome[40];
  int dia, mes, ano;
  char endereco[100];
};

struct modelo_ficha ficha;

int main(void) {
  strcpy(ficha.nome, "Alexandre Coelho");
  ficha.dia = 27;
  ficha.mes = 10;
  ficha.ano = 1978;
  strcpy(ficha.endereco, "Campus do Pici S/N Bloco 723");

  printf("%s\r\n", ficha.nome);
  printf("%d/%d/%d\r\n", ficha.dia, ficha.mes, ficha.ano);
  printf("%s\r\n", ficha.endereco);
  return 0;
}