/*
simple calculator
created by Brian Mwonga dbit-01-8854/2021
on July,2022
c89 compiler
MIT license
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,diff,product;
    float quotient;
    printf("\tsimple calculator!\n");
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);


    //computation
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=(float)num1/num2;


    //output
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d-%d=%d\n",num1,num2,diff);
    printf("d%*d%=%d\n",num1,num2,product);
    printf("%d/%d=%f/n",num1,num2,quotient);


    return 0;
}
