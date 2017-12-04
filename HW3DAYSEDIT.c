#include <stdio.h>

int main(){

int month, day, daysleft;
daysleft=0;

printf("Enter today's date: ");
scanf("%d/%d",&month, &day);
switch(month){
case 12:
daysleft+=30;
break;
case 11:
daysleft+=31;
break;
case 10:
daysleft+=30;
break;
case 9:
daysleft+=31;
break;
case 8:
daysleft+=31;
break;
case 7:
daysleft+=30;
break;
case 6:
daysleft+=31;
break;
case 5:
daysleft+=30;
break;
case 4:
daysleft+=31;
break;
case 3:
daysleft+=28;
break;
case 2:
daysleft+=31;
break;
case 1:
daysleft+=0;
break;
}
daysleft+=day;
//2011 started on a Saturday
int dayofweek;
dayofweek=daysleft%7;

switch(dayofweek){
case 0:
printf("Happy Saturday!");
break;
case 1:
printf("Happy Sunday!");
break;
case 2:
printf("Happy Monday!");
break;
case 3:
printf("Happy Tuesday!");
break;
case 4:
printf("Happy Wednesday!");
break;
case 5:
printf("Happy Thursday!");
break;
case 6:
printf("Happy Friday!");
break;
}
return 0;
}
