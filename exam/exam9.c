#include <stdio.h>

int equal (char word1[], char word2[]);

int main (void) {

	char word1[20];
	char word2[20];

	printf("Enter two words: ");
	scanf("%s %s", word1, word2);

	printf("%d\n", equal(word1, word2));

}

int equal (char word1[], char word2[]) {

	int a = 1;
	int c = 0;

	while (word1[c] != '\0' && word2[c] != '\0') {

		if (word1[c] != word2[c]) {
			a = 0;		
			break;
		}

		c++;

	}

	return a; 

}
