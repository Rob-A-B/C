/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor1,valor2,valor3,soma;
    printf("Digite 3 valores \n");
    //scanf("%f",&valor1);
    //scanf("%f",&valor2);
    //scanf("%f", &valor3);
    scanf("%f %f %f",&valor1,&valor2,&valor3);
    soma=valor1+valor2+valor3;
    printf("%f",soma/3);
    return 0;
}
