#include <stdio.h>

void swap(int *n1, int *n2);

int main(void) 
{
    int n1 = 0;
    int n2 = 0;
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);
    swap(&n1, &n2);
    printf("%d %d", n1, n2);
    
}

void swap(int *x, int *y)
{ 
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
