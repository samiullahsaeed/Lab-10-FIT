#include <stdio.h>
int main(){
char op;
double a, b;
printf("Enter an operator (+,-,*,/): ");
scanf("%c", &op);
printf("Enter 2 numbers: ");
scanf("%lf %lf", &a, &b);
if (op == '+') printf("Result: %.2lf\n", a+b);
else if (op == '-') printf("Result: %.2lf\n", a-b);
else if (op == '*') printf("Result: %.2lf\n", a*b);
else if (op == '/') {
if (b !=0) printf("Result: %.2lf\n", a/b);
else printf("Error: Division by zero.\n");
} else {
printf("Error: Invalid operator.\n");
}
return 0;
}
























