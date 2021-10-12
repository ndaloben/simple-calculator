#include <stdio.h>
#include <stdlib.h>


int main()

{
    //variable declaration
    int num1,num2,sum,diff,pro,mod;
    float quot;

    //Assignment
    num1 =200;
    num2 =56;
    //Computation
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    quot = (float) num1 / num2;
    mod = num1 % num2;

    //output
    //sum: result
    //3+5=8
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,diff);
    printf("%d * %d = %d\n",num1,num2,pro);
    printf("%d / %d = %f\n",num1,num2,quot);
    printf("%d mod %d = %d\n",num1,num2,mod);


    return 0;
}
