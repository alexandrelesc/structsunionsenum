#include <stdio.h>

struct example1
{
    int isMemoryAllocated;
    int isObjectAllocated;
};

struct example2
{
    int isMemoryAllocated : 4;
    int isObjectAllocated : 4;
};

struct example3 {
    char a;
    int b;
    char c;
};

struct __attribute__((__packed__)) example4 {
    char a;
    int b;
    char c;
};

struct  example5 {
    unsigned char a:4;
    unsigned int b:8;
    unsigned char c:4;
};

struct __attribute__((__packed__)) example6 {
    unsigned char a:4;
    unsigned int b:8;
    unsigned char c:4;
};

int main(void)
{
    printf("\n sizeof example1 is [%lu], sizeof example2 is [%lu]\n", sizeof(struct example1), sizeof(struct example2));

    printf("\n sizeof example3 is [%lu], sizeof example4 is [%lu]\n", sizeof(struct example3), sizeof(struct example4));
    
    printf("\n sizeof example5 is [%lu], sizeof example6 is [%lu]\n", sizeof(struct example5), sizeof(struct example6));
  
    return 0;
}
