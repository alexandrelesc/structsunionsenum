#include <stdio.h>
enum state { idle, pay, select, change, dispenser };

int main(void) {
  printf("Vendor Machine\n");
  int count = 0;
  enum state estado = idle;

  while (1) {

    if (estado == idle) {
      printf("Idle\n");
      printf("wainting for money...\n");
      getchar();
      count++;
      if (count == 5) {
        count = 0;
        estado++;
      }
    } else if (estado == pay) {
      printf("Please select your drink\r\n");
      printf("1 - coca-cola\r\n");
      printf("2 - guarana\r\n");
      printf("3 - fanta laranja\r\n");
      printf("4 - fanta uva\r\n");
      getchar();
      estado = idle;
    }
  }
  return 0;
}