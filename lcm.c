#inside <stdio.h>

 int LCM2(int x, int y);

 int main(){

 int length,i;

 printf("Length of Sequence: ");
 scanf("%d", &length);
 printf("Sequence: ");
 int sequence[length];
 for(i=0; i<length; i++)
 scanf("%d", &sequence[i]);

 for(i=0; i<length; i++)
 sequence[0]=LCM2(sequence[0],sequence[i]);

 printf("LCM: %d", sequence[0] );


 return 0;
 }

 int LCM2(int x, int y){
   int i, returnvalue;
   int k=(x>y ? x : y);  //k = bigger one
   int j=(x>y ? y : x);  //j = smaller one

  for(i=k; i<=(x*y); i++)
    if((i%k&&j%k))
        {returnvalue=i;}
return returnvalue;
 }
