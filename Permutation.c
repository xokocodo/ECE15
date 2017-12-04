#include <stdio.h>

int matrix[10][10];

int CheckRow(int size, int rowNum){
int i,o,z;
z=o=0;
for(i=0; i<size; i++)
    if(matrix[i][rowNum]==1)
        o++;
    if(matrix[i][rowNum]==0)
        z++;
if((o==1)&&(z==size-1))
return 1;
else
return 0;

}

int CheckCol(int size, int colNum){
int i,o,z;
z=o=0;
for(i=0; i<size; i++)
    if(matrix[colNum][i]==1)
        o++;
    if(matrix[colNum][i]==0)
        z++;
if((o==1)&&(z==size-1))
return 1;
else
return 0;
}



int main(){
int size,i,k,x,y;
k=0; x=0; y=0;
printf("Size: ");
scanf("%d", size);
printf("Entries: ");

for(i=0; i<size*size; i++){
    scanf("%d", matrix[x][y]);
    if(x==size-1) x=0; y++;}

for(x=0; x<size; x++)
k+=CheckCol(size, x)

for(y=0; y<size; y++)
k+=CheckRow(size, y)


if(k==2*size)
printf("A Permutation!")
else
printf("Not a Permutation!")
return 0;
}
