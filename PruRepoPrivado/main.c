/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int casos;
    
    printf("Esta version es solo para comprobar si los repos privados se incluyen en el historial de Github !!!\n");

    printf("Elija un caso !!\n");
    scanf("%i",&casos);
    
    switch (casos)
    {
        case 1:
            printf("Ud. elegio el primer caso.\n");
        break;
        
        case 2:
            printf("Ud. elegio el segundo caso.\n");
        break;
        
        case 3:
            printf("Ud. elegio el tercer caso.\n");
        break;
        
        case 4:
            printf("Ud. elegio el cuarto caso.\n");
        break;
        
        default:
            printf("No encontramos ese caso !!.\n");
        break;
    }

    return casos;
}
