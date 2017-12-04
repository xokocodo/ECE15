#include <stdio.h>
int main(){

int i,testi, indicator, x;
printf("Enter an Integer: ");
scanf("%d, &i");
printf("%d",i);
i=testi;
do{
testi/=10;
indicator++;
}while(testi>0);

while(x<=indicator){
printf("*");
}

do{
printf("%d, i%10");
i/=10;
}while(i!=0);

printf("\n");

return 0;}
