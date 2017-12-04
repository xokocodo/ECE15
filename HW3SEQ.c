#include <stdio.h>

int main(){
int first=0;
int n=0;
int i=0;
int even=0;
int divtof=0;
int greaterthan=0;
int prev;

do{
    printf("Enter an Integer: ");
    scanf("%d",&i);
    if(n==0){first=i;}
    if(i%2==0){even++;}
    if((i%3==0)||(i%5==0)){divtof++;}
    if(i>prev){greaterthan++;}
    n++;
    prev=i;
}while(first!=i);

printf("Even: %d", even);
printf("Divisible by three or five: %d", divtof);
printf("Greater than the preceding integer: %d", greaterthan);

return 0;
}
