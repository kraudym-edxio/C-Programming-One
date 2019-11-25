/*
	Caesar Cipher Encryption
	Created by: Edxio Kraudy Mora
	Date: November 25, 2019
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	//Variable declaration
	char word[20];
	int key, character;

	//Ask user for word input
	printf("Enter your text: ");
	scanf("%s", word);

	//Ask user for key input
	printf("Enter a cipher key: ");
	scanf("%d", &key);

	for (int index = 0; word[index] != '\0'; index++) {
	
		character = word[index];
	
		if (character >= 'a' && character <= 'z') {
			character = character + key;
		}

		if (character > 'z') {
			character = character - 'z' + 'a' - 1;
		}

		word[index] = character;
		
	}

	printf("Ciphertext is: %s\n", word);

	return 0;

}
