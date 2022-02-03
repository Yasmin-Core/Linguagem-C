#include <stdio.h>

int main()
{
    int n1 = 0;
    printf("Número 1: ");
    scanf("%d", &n1);
    
        if (n1 % 2 == 0)
            printf("O número %d é: Par.", n1);
        else
            printf(" O número %d é: Impar.", n1);
    
    
    return 0;
}

