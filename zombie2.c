#include <stdio.h>
#define SQ 5
int main(){
int run;
char game[SQ*SQ];
char change[SQ*SQ];
int i,j,k;
int input;

for(i=0; i<=SQ*SQ; i++){
scanf("%c", input);
if(input==0){game[i]='-';change[i]='-';}else{game[i]='*';change[i]='*';}
}

for(j=0; j<4; j++){

    if(j!=0){
        for(i=0, k=0, i<=SQ*SQ, i++){
            if(game[i]=='-'){
              if(game[i-1]=='*')k++;
              if(game[i+1]=='*')k++;
              if(game[i-1+SQ]=='*')k++;
              if(game[i+1+SQ]=='*')k++;
              if(game[i-1-SQ]=='*')k++;
              if(game[i+1-SQ]=='*')k++;
              if(game[i-SQ]=='*')k++;
              if(game[i+SQ]=='*')k++;
              if(k>2)change[i]=='-';if(k<2);{change[i]=='*';}
                }
            }
        }
        for(i=0; i<=SQ*SQ; i++)
        save[i]=change[1];
        printf("State %d:\n", j);
        for(i=0, i<=SQ*SQ; i++){
        printf("%c", game[i]);
        if(game[i]%SQ==0)
            printf("\n");
        }

    }

return 0;
}
