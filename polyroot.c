#include <stdio.h>
#define ITERATIONS 50
int main() {
double point;
 int a[4];
 // int a0, a1, a2, a3;
 int i,j;
printf("Coefficients: ");
 for(i=0; i<4 ; i++){
 scanf("%d", &a[i]);}
//scanf("%d %d %d %d", &a0,&a1, &a2, &a3);
printf("Initial Point: ");
scanf("%lf",&point);

 double fx, dfx, abfx;
 abfx=1;

 for(j=0; j<ITERATIONS; j++){
   fx=a[0] + (a[1]*point) + (a[2]*point*point) + (a[3]*point*point*point);
    dfx= a[1] + (2*a[2]*point) + (3*a[3]*point*point);
    //    printf("fx %lf dx  %lf point %lf\n", fx, dfx,point);

    if(fx<0){
      abfx=-fx;
      }else{abfx=fx;}

        if (abfx<=.00001){
     printf("%.5lf\n", point);
      break;}

        if (dfx == 0){
    printf("%.5lf\n", point); 
     break;}

    point -= fx/dfx;

    if(j==(ITERATIONS-1))
        printf("%.5lf\n", point);
}



return 0;
}
