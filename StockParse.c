#include <stdio.h>

double SMA15(double Close[],int i);
double SMA30(double Close[],int i);
double SMA60(double Close[],int i);
int signals(double one, double three, double six);
int CheckProfit(int durration, int day, double Close[]);


int main(){
double Open[6000], Close[6000], Low[6000], High[6000], Volume[6000], AdjClose[6000], GSMA15[6000], GSMA30[6000], GSMA60[6000];
//int Month[5000], Day[5000], Year[5000];
 char *Date[5000];

int i=0;
int n=0;
FILE *StockInfoInput=fopen("STOCK.txt", "r");
 while(fscanf(StockInfoInput, "%lf %lf %lf %lf %lf %lf",&Open[i], &High[i], &Low[i], &Close[i], &Volume[i], &AdjClose[i])>0){
       i++;
            }
 fclose(StockInfoInput);
 //for(n=0; n<=10; n++)
   // printf("%lf %lf %lf %lf %lf %lf\n",Open[n],Close[n],High[n],Low[n],Volume[n], AdjClose[n]);

for(n=0; n<5000; n++){
GSMA15[n]=SMA15(Close, n);
GSMA30[n]=SMA30(Close, n);
GSMA60[n]=SMA60(Close, n);
}

 FILE *StockInfoOutput=fopen("STOCKOUT.txt", "w");

for(n=0; n<5000; n++)
  fprintf(StockInfoOutput,"%4d  -- %5.2lf   %5.2lf   %5.2lf\n", n, GSMA15[n], GSMA30[n], GSMA60[n]);

 int order;

FILE *Analysis=fopen("Analysis.txt", "w");

 for(n=0; n<5000; n++){
 order=signals(GSMA15[n],GSMA30[n],GSMA60[n]);
 switch(order){
 case 163: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 case 136: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 case 316: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 case 361: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 case 613: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 case 631: fprintf(Analysis, "%d - %d - Message Goes Here", n, order); break;
 fprintf(Analysis, "  %d   ", CheckProfit(10,n,Close));
 fprintf(Analysis, "  %d   ", CheckProfit(30,n,Close));
 fprintf(Analysis, "  %d\n", CheckProfit(90,n,Close));
 }





 fclose(StockInfoOutput);

 fclose(Analysis);
return 0;
}


double SMA15(double Close[],int i){
int x;
double sum=0;
if(i<15)
return 0;
for(x=i-14;x<=i;x++)
sum+=Close[x];
return sum/15;
}

double SMA30(double Close[],int i){
int x;
double sum=0;
if(i<30)
return 0;
for(x=i-29;x<=i;x++)
sum+=Close[x];
return sum/30;
}

double SMA60(double Close[],int i){
int x;
double sum=0;
if(i<60)
return 0;
for(x=i-59;x<=i;x++)
sum+=Close[x];
return sum/60;
}

int signals(double one, double three, double six){
int x;
if(one>three&&one>six){x=100; if(three>six) x+=36; else x+=63;}
if(three>one&&three>six){x=300; if(one>six) x+=16; else x+=61;}
if(six>three&&six>one){x=600; if(one>three) x+=13; else x+=31;}
return x;
}

int CheckProfit(int durration, int day, double Close[]){
return Close[day+durration]-Close[day];
}





