#include <stdio.h>

double convert_length (double input,double base, char unit, char unit2, double output);
double convert_mass (double input,double base, char unit, char unit2, double output);


int main(){

int choice1;
double input,base, output;
char unit,unit2; 


printf("Chem Calc Version 1. Options: \n");
printf("Press 1 for length conversion \n");
printf("Press 2 for mass conversion \n");
scanf("%d", &choice1);
switch(choice1){

case 1:
printf("Enter the amount and unit: \n ");
printf("Use the following for units....\n");
printf("Meter - m\n");
printf("Centimeter - c\n");
printf("Kilometer - k\n");
printf("Mile - l\n");
printf("Inch - i\n");
printf("Foot - f\n\n");
scanf("%lf %c", &input, &unit);
printf("That is %lf Centimeters...\n",base);
printf("What unit do you want to convert to?: \n");
printf("Use the following for units....\n");
printf("Meter - m\n");
printf("Centimeter - c\n");
printf("Kilometer - k\n");
printf("Mile - l\n");
printf("Inch - i\n");
printf("Foot - f\n");
scanf(" %c", &unit2);
printf("Your conversion yields %lf of the selected unit. \n", convert_length(input,base,unit,unit2,output));
break;




case 2:
printf("Enter the amount and unit:  ");
printf("Use the following for units....\n");
printf("Gram - g\n");
printf("Kilogram - k\n");
printf("Pound - p\n");
printf("Ounce - 0\n");
printf("Ton - t\n");
printf("Milligram - m\n");
scanf("%lf %c", &input, &unit);
printf("That is %lf grams...\n",base);
printf("What unit do you want to convert to?: \n");
printf("Use the following for units....\n")
printf("Gram - g\n");
printf("Kilogram - k\n");
printf("Pound - p\n");
printf("Ounce - 0\n");
printf("Ton - t\n");
printf("Milligram - m\n");
scanf(" %c", &unit2);
printf("Your conversion yields %lf of the selected unit. \n",convert_mass(input,base,unit,unit2,output));
break;


default:
printf("**NOT A VALID INPUT**\n");
break;
}
}


double convert_length (double input,double base, char unit, char unit2, double output)
{
#define METER 100;
#define CENTIMETER 1;
#define KILOMETER 100000;
#define MILE 160934.4;
#define INCH 2.54;
#define FOOT 30.48;

switch(unit){
case 'm':
  base=input*METER;
break;

case 'c':
  base=input*CENTIMETER;
break;

case 'k':
  base=input*KILOMETER;
break;

case 'l':
  base=input*MILE;
break;

case 'i':
  base=input*INCH;
break;

case 'f':
  base=input*FOOT;
break;

default:
printf("**NOT A VALID INPUT**\n");
break;
}

switch(unit2){
case 'm':
  output=base/METER;
break;
case 'c':
  output=base/CENTIMETER;
break;
case 'k':
  output=base/KILOMETER;
break;
case 'l':
  output=base/MILE;
break;
case 'i':
  output=base/INCH;
break;
case 'f':
  output=base/FOOT;
break;
default:
 printf("**NOT A VALID INPUT**\n");
break;
}
return output;
}



double convert_mass (double input,double base, char unit,char unit2, double output)
{
#define GRAM 1;
#define KILOGRAM 1000;
#define POUND 453.59237;
#define OUNCE 28.3495231;
#define TON 907184.74;
#define MILLIGRAM 0.001;

switch(unit){
case 'g':
  base=input*GRAM;
break;

case 'k':
  base=input*KILOGRAM;
break;

case 'p':
  base=input*POUND;
break;

case 'o':
base=input*OUNCE;
break;

case 't':
base=input*TON;
break;

case 'm':
base=input*MILLIGRAM;
break;

default:
  printf("**NOT A VALID INPUT**\n");
break;
}

switch(unit2){
case 'g':
  output=base/GRAM;
break;

case 'k':
  output=base/KILOGRAM;
break;

case 'p':
  output=base/POUND;
break;

case 'o':
  output=base/OUNCE;
break;

case 't':
  output=base/TON;
break;

case 'm':
  output=base/MILLIGRAM;
break;

default:
printf("**NOT A VALID INPUT**\n");
break;
}
return output;
}
