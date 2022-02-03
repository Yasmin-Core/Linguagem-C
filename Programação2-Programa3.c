#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int dif1 = 0;
    int dif2 = 0;
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);
    
        if (n1 > n2)
        {
            dif1= n1-n2;
            printf("Diferença: %d", dif1);
        }   
        else
        {
            dif2= n2-n1;
            printf("Diferença: %d", dif2);
        }
    return 0;
}
