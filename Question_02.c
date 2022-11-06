#include <stdio.h>
#define swp(a, b) \
    int c;        \
    c = a;        \
    a = b;        \
    b = c;
void swap();
int main()
{

    swap();

    return 0;
}

void swap()
{
    int a = 0;
    int b = 0;

    printf("Enter Value 1 \t: ");
    scanf("%d", &a);
    printf("Enter Value b \t: ");
    scanf("%d", &b);

    printf("Before Swap \t: a = %d b = %d\n", a, b);
    swp(a, b);
    printf("After Swap  \t: a = %d b = %d", a, b);
}