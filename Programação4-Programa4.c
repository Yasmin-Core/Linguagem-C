/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i= 2;
    int soma = 0;

    for(i =2; i <= 20; i= i+2){
        
        if(i % 2 == 0) 
            soma += i;
            printf("%d\n", i);
}
    printf("Somatório: %d", soma);
}