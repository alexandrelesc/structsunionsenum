#include <stdio.h>

struct example1 {
  char a;
  int b;
  char c;
};

typedef struct {
  unsigned dia : 5;
  unsigned mes : 4;
  unsigned ano : 7;
} DataBit;

int main(void) {
  printf("DataBit Example\n");
  DataBit testbit;
  struct example1 exe1;

  testbit.ano = 24;
  testbit.mes = 12;
  testbit.dia = 12;
  printf("Data: %d/%d/%d\n", testbit.dia, testbit.mes, testbit.ano);

  exe1.a = 'a';
  exe1.b = 10;
  exe1.c = 'c';
  printf("example1: %c %d %c\n", exe1.a, exe1.b, exe1.c);

  printf("Tamanho de DataBit: %lu\r\n", sizeof(DataBit));
  printf("Tamano de example1: %lu\n", sizeof(exe1));

  return 0;
}