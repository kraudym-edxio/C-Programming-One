#include <stdio.h>

//Calling the function 
int upper_or_lower (char *word, int size);

//Declaring global variables
char word[20];
int size;
int a;

int main (void) {

	//Asking user for a string
	printf("Enter a word: ");
	scanf("%s", word);

	//Asking user for the string's length
	printf("Enter the size/length of the word: ");
	scanf("%d", &size);

	upper_or_lower(word, size);

}

//Creating a function with two input parameters
int upper_or_lower (char *word, int size) {

	if (word[0] >= 65 && word[0] <= 90) {
		a = 1;
	}

	else if (word[0] >= 97 && word[0] <= 122 ) {
		a = 0;
	}

	else {
		a =  -1;
	}

	printf("%d\n", a);

	return 0;
	
}
