#include <stdio.h>

struct  AAA
{
    int a;
    char b;
    double c;
}; //16 byte

struct BBB
{
    char a;
    double b;
    int c;
}; // 24 byte

int main()
{
    printf("%ld\n", sizeof(struct AAA));
    printf("%ld\n", sizeof(struct BBB));
}