#include <math.h>
#include <stdio.h>

void Compute(double *cp, double *anglep, double a, double b){
double alpha, beta;
 *cp=sqrt(pow(a,2)+pow(b,2));
  alpha=45/atan(1.)*atan(b/a);
  beta=45/atan(1.)*atan(a/b);
  *anglep=alpha<beta ? alpha : beta;
}

int main(){
double a, b,c, angle;
double *cp=&c;
double *angelp=&angle;


printf("Legs: ");
 scanf("%lf %lf",&a,&b);
 Compute(cp,angelp,a,b);
printf("Hypotenuse: %.1lf\n",c);
printf("Smallest angle: %.1lf degree\n",angle);

return 0;
}
