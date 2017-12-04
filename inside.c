#include <stdio.h>

int check (int x1, int y1, int x2, int y2, int x3, int y3,);

int main(){
int x1, x2 , x3 , y1 , y2 ,y3,out;
printf("Corners: ");
scanf("%d %d %d %d", x1, y1, x2, y2);
printf("Point: ");
scanf("%d %d", x3, y3);
out=check(x1,y1,x2,y2,x3,y3);
if(out==0){printf("Outside!\n");}
if(out==1){printf("Inside!\n");}

return 0;}



int check (int x1, int y1, int x2, int y2, int x3, int y3,){

int i=0;
int returnvalue;

if(x1>x2)if(x3=>x2&&x3<=x1)i++;else{returnvalue=0;}
if(x1<=x2)if(x3=>x1&&x3<=x2)i++;else{returnvalue=0;}

if(y1>y2)if(y3=>y2&&y3<=y1)i++;else{returnvalue=0;}
if(y1<=y2)if(y3=>y1&&y3<=y2)i++;else{returnvalue=0;}

if(i==2)
returnvalue=1;

return returnvalue;
}
