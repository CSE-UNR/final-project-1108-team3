//Liam Wall, Cece Arroyo, Paige Roylance (?)
//11/28/2024
//Madlibs
#include <stdio.h>
#define INPUT "madlib2.txt"
#define SIZE 100

int readFile(FILE* fPtr, char array[][SIZE]);
void storeString(char stringArray[], int arraySize);
void speech(char Filearray[][SIZE], int filesize);
void display(FILE* fPtr, char str[]);
int main(){
	//creating variables
	FILE* fp;
	int y;
	char array[SIZE], arrayD[SIZE], arrayTwo[SIZE][SIZE];
	fp = fopen(INPUT, "r");
	if (fp == NULL){
    	printf("no work\n");
    	return 0;
	}
    
/*display(fp, arrayD);
    
    printf("\n");
    fclose(fp);
    
    fp = fopen(INPUT, "r");*/
    
   y = readFile(fp, arrayTwo);
    
	printf("%d\n", y);
	
	
  speech(arrayTwo, y);
    
    fclose(fp);
   fp = fopen(INPUT, "r");
    
//displayTwo(fp, arrayD, arrayTwo, y);
	fclose(fp);
	return 0;
}

int readFile(FILE* fPtr, char array[][SIZE]){
int counter = 0;
for(int i = 0; fgets(array[i], SIZE, fPtr) != NULL; i++) {
counter ++;
    }
	return counter;
}

void storeString(char stringArray[], int arraySize){
	fgets(stringArray, arraySize, stdin);
	printf("%s", stringArray);
}

void speech(char Filearray[][SIZE], int filesize){
	for(int i = 0; i < filesize; i++){
    	if(Filearray[i][0] == 'A'){
        	printf("Please enter an adjective: ");
       
        	storeString(Filearray[i], SIZE);
    	}
    	else if (Filearray[i][0] == 'N'){
        	printf("Please enter a noun: ");
      
        	storeString(Filearray[i], SIZE);
    	}
    	else if (Filearray[i][0] == 'V'){
        	printf("Please enter a verb: ");
        	
        	storeString(Filearray[i], SIZE);
    	}
	}
}

void display(FILE* fPtr, char str[]){
    while (fgets(str, SIZE, fPtr) != NULL) {
        printf("%s", str);
    }
}


