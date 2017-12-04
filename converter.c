#include <stdio.h> 

int main(){

//first line is rates
//second line in the input ammounts
//third line is the currencies converting from and to

double EURUSD, GBPUSD, USDEUR, USDGBP, EURGBP, GBPEUR;
double output;
int input;
char currencyfrom,currencyto;

printf("Exchange rate of Euro to Dollar: ");
scanf("%lf", &EURUSD);
printf("Exchange rate of Pound to Dollar: ");
scanf("%lf", &GBPUSD);

printf("Amount and currency you want to convert from: ");
scanf("%d %c", &input, &currencyfrom);

printf("Currency you want to convert to: ");
scanf("%c", &currencyto);


//ASSIGN ALL RATE BASED ON INPUTED RATES
//   EUR/GBP  =  (EUR/USD)/(GBP/USD)

USDEUR=(1/EURUSD);
USDGBP=(1/GBPUSD);
EURGBP=(EURUSD/GBPUSD);
GBPEUR=(GBPUSD/EURUSD);


int assignment1,assignment2;

// 6 conversion possibilities E>U-6 E>P-10 U>E-3 U>P-11 P>E-4 P>U-8

switch(currencyfrom){
case 'E':
assignment1=1
break;

case 'U':
assignment1=2
break;

case 'P':
assignment1=3
break;
}

switch(currencyto){
case 'E':
assignment2=1
break;

case 'U':
assignment2=5
break;

case 'P':
assignment2=9
break;
}


// 6 conversion possibilities E>U-6 E>P-10 U>E-3 U>P-11 P>E-4 P>U-8

int conversion=assignment1+assignment2

switch(conversion){
case 6:
output=input*EURUSD;
printf(%d euros are equivalent to %.2lf dollars.", input, output);
break;

case 10:
output=input*EURGBP;
printf(%d euros are equivalent to %.2lf pounds.", input, output);
break;

case 3:
output=input*USDEUR;
printf(%d dollars are equivalent to %.2lf euros.", input, output);
break;

case 11:
output=input*USDGBP;
printf(%d dollars are equivalent to %.2lf pounds.", input, output);
break;

case 4:
output=input*GBPEUR;
printf(%d pounds are equivalent to %.2lf euros.", input, output);
break;

case 8:
output=input*GBPUSD;
printf(%d pounds are equivalent to %.2lf dollars.", input, output);
break;
}





return 0;
}
