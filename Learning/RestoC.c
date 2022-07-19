/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int resto,valor1,valor2;
    printf("Informe dois numeros \n");
    //scanf("%d", &valor1);
    //scanf("%d",&valor2);
    scanf("%d %d", &valor1,&valor2);
    resto=valor1%valor2;
    printf("%d \n", resto);

    return 0;
}
