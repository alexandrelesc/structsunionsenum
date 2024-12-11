#include <stdio.h>
#include <string.h>

struct modelo_ficha {
  char nome[40];
  int dia;
  int mes;
  double ano;
  char endereco[100];
};

struct modelo_ficha ficha[2];

int main(void) {
  strcpy(ficha[0].nome, "Guga");
  ficha[0].dia = 10;
  ficha[0].mes = 9;
  ficha[0].ano = 1976;
  strcpy(ficha[0].endereco, "Floripa");

  printf("%s\r\n", ficha[0].nome);
  printf("%d/%d/%d\r\n", ficha[0].dia, ficha[0].mes, ficha[0].ano);
  printf("%s\r\n", ficha[0].endereco);

  printf("%ld\r\n", sizeof(ficha[0]));
  return 0;
}
