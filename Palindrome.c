#include <stdio.h>

int isPalindrome(char word[]){
int i,j,h, cap;
cap=0;
for(i=0; i<15; i++)
    if(word[i]=='\0'){
        j=i;
        break;}

if(j/2==(j+1)/2)
    h=(j/2);
else
    h=(j/2)+1


for(i=0; i<h; i++){
    if((word[i]>64)&&(word[i]<91))
        cap=1
    if((word[i]>96)&&(word[i]<123))
        cap=-1
    if((word[i]!=word[j-i-1])&&((word[i]+(cap*32))!=word[j-i-1]))
        return 0;
        }

return 1:
}


void PrintResult(char word[], int iP){
    int i;
if(iP==1)
    printf("A Palindrome!");
if(iP==0){

    for(i=0; i<15; i++)
        if(word[i]=='\0'){
            break;}

    for(i=0; i>=0; i--)
        printf("%c", word[i]);
}

}


int main(){
char word[15];
int iP;
printf("Word: ");
scanf("%c", word);
isPalindrome(word[]);
PrintResult(word[], iP):
return 0;
}
