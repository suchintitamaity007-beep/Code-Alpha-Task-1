#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    printf("\n Enter an operator (+ - * /):");
    scanf("%c",&operator);
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    switch(operator)
    {
        case '+' :
           result=num1+num2;
           printf("\n Result is %lf",result);
           break;
        case '-' :
           result=num1-num2;
           printf("\n Result is %lf",result);
           break;
        case '*' :
           result=num1*num2;
           printf("\n Result is %lf",result);
           break;
        case '/' :
           result=num1/num2;
           printf("\n Result is %lf",result);
           break;
        default :
           printf("\n %c is not valid",operator);
    }
}