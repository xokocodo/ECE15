#include <stdio.h>

int main(){



char letter,upper,lower,indicator;
indicator=0;


printf("Enter an English letter: ");
scanf("%c", &letter);
if(letter>=65 && letter<=90){
indicator=1}

if(letter>=97 && letter<=122){
indicator=2}



switch (<indicator>) {
case 1:
printf("%c is an upper case English letter and its lower case is %c", letter, letter+32);
break;
case 2:
printf("%c is an lower case English letter and its upper case is %c", letter, letter-32);
break;
Case 0:
printf("**I speak only English.**");
break;
}

return 0;
}