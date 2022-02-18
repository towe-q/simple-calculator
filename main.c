/*simple calculator
 by Mike Maina
 Feb 2022 MIT license
 C89 Compiler



*/
#include <stdlib.h>

int main()
{int numl, num2,sum,diff,product;
    //variable declaration\n");
    printf("simple calculator!\n");
    //capture input
    float quotient;
    printf("Enter two ValuesL:");
    scanf("%d%",&numl,&num2);
    //computation
    sum=numl+num2;
    diff=numl-num2;
    product=numl*num2;
    quotient=(float)numl/num2;
    //output
    printf("%d+%d=%d\n",numl,num2,sum);
    printf("%d-%d=%d\n",numl,num2,diff);
    printf("%d*%d=%d\n",numl,num2,product);
    printf("%d/%d=%f\n",numl,num2,quotient);
    return 0;
}
