//Liam Wall
//11/28/2024
//Madlibs
#include <stdio.h>
#define INPUT "madlib2.txt"
#define SIZE 100
char readFile(FILE* fPtr);
void storeString(char stringArray[], int arraySize);
int main(){
	//creating variables
	FILE* fp;
	char y;//this holds the value for A, N, or V
	char array[SIZE]; //this holds the string that the user enters
	fp = fopen(INPUT, "r");
	if (fp == NULL){
		printf("no work\n");
		return 0;
	}
	
	y = readFile(fp);
	storeString(array, SIZE);
	fclose(fp);
	return 0;
}
/*This function goes thru the file until it reaches an A, N, or V, then it returns the value. So it will only continue to work for the whole program if we immediately replace the A, N, or V with the user input (which I think is what we talked about). If you have any questions or need me to work on the function more just text me. */
char readFile(FILE* fPtr){
	char x;
	int i = 0, k = 0;
	while (fscanf(fPtr, "%c", &x) == 1){
		i++;
	}
	fPtr = fopen(INPUT, "r");
	for(int j = 0; j < i; j++){
		fscanf(fPtr, "%c", &x);
		if(x == 'A' || x == 'N' || x == 'V'){
			return x;
		}
	}
}
/*This function just stores the input from the user into the array in the main function. There is no prompting in the function because the prompts could be different and I thought that could be handled in the specific adjective, noun, or verb functions. So the funciton will need to be called after the prompting each time. If you have any questions or need me to work on it or if it breaks just text me. */
void storeString(char stringArray[], int arraySize){
	fgets(stringArray, arraySize, stdin);
}

