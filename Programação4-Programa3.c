/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int i= 1;
    int soma= 0;
    for(i= 1; i<=10; i++){
        printf("%d\n", i);
        soma= soma + i;
}
    printf("Somatório: %d", soma);
    return 0;
}
