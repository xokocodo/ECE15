#include <stdio.h>

int main(){
  int i;                              //Main Read and Write loop Itterations
  char Charectors[500];               //Store Sentance
  int wordlength[250];                //A non-corosponding array that saves word length 
  int length=0;                       //Saves the word length
  int k=0;                            //k is to interate the word length array

  printf("Sentance: ");

  for(i=0; i<500; i++){               //Reads at most 500 chars. Every time length is incresed until a space is reached
    scanf("%c",&Charectors[i]);       // once a space is read, the length-1 is saved to a seperate array logging the lengths of the words
    length++;                         //at which point the array is moved to the next value, and length is rest 
    if(Charectors[i]==' '){wordlength[k]=length-1;  k++;  length=0;}    // If a period is read, the code saves the last words length + the period and breaks the loop
    if(Charectors[i]=='.'){wordlength[k]=length; break;}
  }  
  

  int j=i;         //This is used to save the value of i from the first loop
  int charperline=0;         //Used to decide how many charectors to print before going to a new line
  int s=0;                   //Used to itterate the nested while loop
  int g;                     //Used to itterate the nested for loop
  int spaces=0;              //Keeps track of the unrecorded spaces between words



  for(i=0;  i<=j;){           //i starts at zero, and goes until i=j
    charperline=0;           //Resets it every time a line is printed
    spaces=0;                //Resets this too

    while((charperline+wordlength[s]+spaces)<16){     //While the charectors already added + next words charectors + spaces <16
      charperline+=wordlength[s];                     //We add the next word's charectors
      s++; spaces++;}                                 //itterate the loop, and add a space for between the words  
    charperline+=spaces;                              //Once the loop is done, we add in the spaces to charperline to decide exactly how many chars to print
 


    for(g=1;g<=charperline;g++){                      //Now we print chars until we reach the designated charsperline to print 
      // TEST LINE ONLY if(g==1)printf("%d",charperline);
      // if((g==charperline)&&(Charectors[i]==' ' )){i++; break;}
      printf("%c",Charectors[i]);                     //After we reach that number, we go to the next line, and repeat
      i++; }
    printf("\n");
  } 
  
  //THIS IS A TESTING ONLY CODELINE    
  //  int z=k;
  //for(k=0; k<=z; k++ ){
  //printf("\n%d",wordlength[k]);
  //}

return 0;
}
