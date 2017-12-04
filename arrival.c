#include <stdio.h>

int main(){

int distance,speed,timeleft;
int departhours,departminutes,departtotal;
int newtotal;

printf("Distance: ");
scanf("%d", &distance);
printf("Speed: ");
scanf("%d", &speed);
printf("Departure time: ");
scanf("%d:%d", &departhours, &departminutes);

 int newhours,newminutes;

 departtotal=(60*departhours)+departminutes;
  timeleft=distance/speed*60;
  newtotal=departtotal+timeleft;
  newhours=newtotal/60;
  newminutes=newtotal%60;


  printf("Expected arrival time: %d:%2d on the same day.\n", newhours,newminutes);

return 0;
}
