#include <stdio.h>

#define FILE_NAME "madlib2.txt"
#define IMAGE_NUM_LINES 100
#define IMAGE_LINE_LENGTH 100

void displayCode(FILE* fin, int numLines, int lineLength);
void display(FILE* file_ptr, char str[]);

int main(){

	FILE* code;
	
	code = fopen(FILE_NAME, "r");
	
	char string[100];

	if(code == NULL){ 
		printf("File didn't open.\n");
		return 0;
	}
printf("      CODE:\n");
	display(code, string);
	fclose(code);
	return 0;
}

void displayCode(FILE* fin, int numLines, int lineLength){ // The exact numbers
	int a;
	for(int i=0; i< numLines; i++){
		for(int j=0; j<lineLength; j++){
			fscanf(fin, "%c", &a);
			printf("%c ", a);
		}
		printf("\n");
	}	
	
}

void editFile(){


}

void display(FILE* file_ptr, char str[]){

  printf("Content of this file are:: \n");
    while (fgets(str, 50, file_ptr) != '\0') {
        printf("%s", str);
    }
}

