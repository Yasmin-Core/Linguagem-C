/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont;
    cont= 1;
    int soma= 0;

    
    while (cont<=10){
        printf("%d \n", cont);
        soma= soma + cont;
        cont ++;
}
    
    printf("Somatório: %d\n", soma);       
    return 0;
}

