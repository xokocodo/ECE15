#include <stdio.h>
#define MAX 5
int compare(char word1[], char word2[]);

int main(){
int a,i,m;
char word1[15], word2[15], word3[15], word4[15], word5[15];
char check[15];
int stop=0;

printf("Dictionary: ");
scanf("%s %s %s %s %s",word1, word2,word3,word4, word5);

while(stop==0)){
printf("Word: ");
    for(i=0, m=0;check[i]!=' ';i++)
        scanf("%c",check[i]);
        if(check[i]=='0'){
            stop=1;
            break;}
m+=compare(word1[], check[]);
m+=compare(word2[], check[]);
m+=compare(word3[], check[]);
m+=compare(word4[], check[]);
m+=compare(word5[], check[]);
if(m>0){printf("Yeah! I found it in the dictionary.")}else{printf("Nay! It is not in the dictionary.")}
}


return 0;
}



int compare(char word1[], char word2[]){
//word one is the changing, variable words in the dictionary.....word 2 is the one we are checking for
int l;
int returnvalue=1;

for(l=0; word[l]!='\0';l++)
if(word2[l]!=word1[l])
    returnvalue=0;

return returnvalue;
}
