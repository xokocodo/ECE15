#include <stdio.h>
#include <math.h>

int doit (int i){
int x;
if(i==1) return f1;
if(i==2) return f2;
x=doit(floor(double)(i/2))+doit(ceil(double)(i/2))
return x;
}

int f1, f2;

int main(){
int i;
printf("Initial Values: ")
scanf("%d %d", &f1, &f2);
for(i=0; i<9; i++)
printf("%d", doit(i))



return 0;
}
