#include <stdio.h>

void Addition(void);
void Subtraction(void);
void Multiplication(void);
void Division(void);
void Factorial(void);

int main() {
    unsigned int choice = 0;
    while (choice != EOF){
        printf_s("%s","1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Factorial\n6:Quit");
        puts("\n Enter the Choice => ");
        scanf_s("%u",&choice);
        switch (choice) {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                Factorial();
                break;
            case 6:
                choice = EOF;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                puts("Error !!! Try again");
                break;
        }
    }
    return 0;
}
void Addition(void){
    int one,two;
    printf_s("%s","\nEnter two Numbers => ");
    scanf_s("%d%d",&one,&two);
    printf_s("%s%d%s","\nSum => ",one + two,"\n");
}
void Subtraction(void){
    int one,two;
    printf_s("%s","\nEnter two Numbers => ");
    scanf_s("%d%d",&one,&two);
    printf_s("%s%d%s","\nSubtraction => ",one - two,"\n");
}
void Multiplication(void){
    int one,two;
    printf_s("%s","\nEnter two Numbers => ");
    scanf_s("%d%d",&one,&two);
    printf_s("%s%d%s","\nMultiplication => ",one * two,"\n");
}
void Division(void){
    int one,two;
    printf_s("%s","\nEnter two Numbers => ");
    scanf_s("%d%d",&one,&two);
    printf_s("%s%d%s","\nDivision => ",one / two,"\n");
}
void Factorial(void){
    int one;
    int sum = 1;
    printf_s("%s","\nEnter Numbers => ");
    scanf_s("%d",&one);
    for (int i = one ; i >= 1; --i) {
        sum *= i;
    }
    printf_s("%s%d%s","\nFactorial => ",sum,"\n");
}