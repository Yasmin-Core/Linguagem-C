#include <stdio.h>
int main()
{
    int n1 = 0;
    int n2 = 0;
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);  

    if (n1 > n2)
        {
            printf("---------------------------------\n");
            printf("O numero maior é o número 1.\n");
            printf("Fim\n");
        }
    else
        {
            printf("---------------------------------\n");
            printf("O numero maior é o numero 2.\n");
            printf("Fim\n");
        }
    return 0;
}

