/*
	Caesar Cipher Decryption
	Created by: Edxio Kraudy Mora
	Date: November 25, 2019

*/

#include <stdio.h>

//Variable declaration
int key;
char word[20];

//Calling decryption function
char plaintext ();

int main (void) {

	//Ask user for ciphertext
	printf("Enter your ciphertext: ");
	scanf("%s", word);
		
	//Ask user for key
	printf("Enter the cipher key: ");
	scanf("%d", &key);

	plaintext();
	
	//Display decrypted text
	printf("Decrypted text is: %s\n", word);

}

//Decryption function
char plaintext () {

	int index, character;

	for (index = 0; word[index] != '\0'; index++) {

		character = word[index]; 

		if (character >= 'a' && character <= 'z') {
			character = character - key;
		}

		if (character < 'a') {
			character = character + 'z' - 'a' + 1;
		}

		word[index] = character;

	}

	return 0;	

}
