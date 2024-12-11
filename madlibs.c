//Liam Wall, Cece Arroyo, Paige Roylance (?)
//11/28/2024
//Madlibs
#include <stdio.h>
#define INPUT "madlib2.txt"
#define OUTPUT "file_replace_output.txt"
#define SIZE 100

int readFile(FILE* fPtr, char array[][SIZE]);
void storeString(char stringArray[], int arraySize);
void speech(char Filearray[][SIZE], int filesize);
void display(FILE* fPtr1, FILE* fPtr2, char str[]);
//void replace(FILE* fPtr1, FILE*fPtr2, char str[], int filesize, char Filearray[][SIZE]);
int main(){
	//creating variables
	FILE* fp1;
	FILE* fp2;
	int y;
	char array[SIZE], arrayD[SIZE], arrayTwo[SIZE][SIZE];
	fp1 = fopen(INPUT, "r");
	if (fp1 == NULL){
    	printf("File does not open\n");
    	return 0;
	}
	fp2 = fopen(OUTPUT, "w");
	if (fp2 == NULL){
    	printf("File does not open\n");
    	return 0;
	}
    
	y = readFile(fp1, arrayTwo);
	
	speech(arrayTwo, y);


	fclose(fp1);

	fp1 = fopen(INPUT, "r");
	
	display(fp1, fp2, arrayD);
	
	fclose(fp1);
	fclose(fp2);
	
	fp2 = fopen(OUTPUT, "r");
	printf("\n");
	display(fp2, stdout, arrayD);
	
	fclose(fp2);
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
	scanf("%s", stringArray);
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

void display(FILE* fPtr1, FILE* fPtr2, char str[]){
while (fgets(str, SIZE, fPtr1) != NULL) {
	fprintf(fPtr2, "%s", str);
	}
}

/*void replace(FILE* fPtr1, FILE*fPtr2, char str[], int filesize, char Filearray[][SIZE]){
while (fgets(str, SIZE, fPtr1) != NULL) {
for(int i = 0; i < filesize; i++){
    	if(Filearray[i][0] == 'A'){
	printf("%s", Filearray[i]);
    	}
    	else if (Filearray[i][0] == 'N'){
	printf("%s", Filearray[i]);
    	}
    	else if (Filearray[i][0] == 'V'){
	printf("%s", Filearray[i]);
    	}
	}
}
}*/
