/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PI 3.14
int main()
{
    float area;
    float raio;
    printf("Digite o raio\n");
    scanf("%f", &raio);
    area=PI*raio*raio;
    printf(" a area eh %f", area);
    return  0;
}
