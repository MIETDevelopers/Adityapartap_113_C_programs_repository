//Arithmetic operations using addition, subtraction, multiplication and remainder operator
#include<stdio.h>//Preprocessor directive
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);
    //operator body
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);
            break;
//Operator does not match
        default:   
    printf("Error encountered by the input values");
    }
    return 0;
}