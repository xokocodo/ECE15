#include <stdio.h>
#include <math.h>
#include "auxiliary.h"

int main(){
int b;
double fact, stirl, error;
printf("Enter a positive integer: ");
scanf("%d",&b);
fact=Factorial(b)
printf("Exact=%d", fact);
stirl=sqrt(8*atan(1.)*b)*pow(b,b)/Exp(b)
printf("Stirling=%.4lf", stirl);
error=(fact-stirl)/fact;
if(error<0)
error=-error;
printf("Error=%.4lf", error)

return 0;
}
