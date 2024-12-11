// C Program to Read a File Using fscanf()
#include <stdio.h>
#define SIZE 100
void storeString(FILE* ptr, char stringArray[][SIZE], int arraySize);
void speech(FILE* fp, char Filearray[][SIZE], int filesize);
int main() {
    FILE *ptr = fopen("madlib2.txt", "r");
    if (ptr == NULL) {
        printf("no such file.\n");
        return 0;
    }
char name[100][100];

    storeString(ptr, name, 18);

    return 0;
}

void storeString(FILE* ptr, char stringArray[][SIZE], int arraySize){
	while (fscanf(ptr, "%s", stringArray) == 1){
	printf("%s", stringArray);
	}
}

void speech(FILE* fp, char Filearray[][SIZE], int filesize){
	for(int i = 0; i < filesize; i++){
    	if(Filearray[i][0] == 'A'){
        	printf("Please enter an adjective: ");
       
        	storeString(fp, Filearray[i][SIZE], SIZE);
    	}
    	else if (Filearray[i][0] == 'N'){
        	printf("Please enter a noun: ");
      
        	storeString(fp, Filearray[i][SIZE], SIZE);
    	}
    	else if (Filearray[i][0] == 'V'){
        	printf("Please enter a verb: ");
        	
        	storeString(fp, Filearray[i][SIZE], SIZE);
    	}
	}
}
