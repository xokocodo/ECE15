#include <stdio.h>
#include <string.h>

int main(int argc, char*argv[]){
    char word[5000];
    int i;

FILE  *input = fopen("WinterOlympic.txt", "r")

while(fscanf(input, %s, word)==1)
    if(stricmp(word,argv[1])==1){
        printf("Yes");
        i++;
    }





fclose(input);

return 0;
}
