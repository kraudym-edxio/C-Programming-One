#include <stdio.h>

int main (void) {
 
	int num, rem;
	int ans = 0;
	
	printf("Enter an integer to determine if it is a palindrome: ");
	scanf("%d", &num);
		
	int save = num;
	
	while (num != 0) {
		
		rem = num % 10;
		num = num / 10;
		ans = (ans * 10) + rem;
	
	}
	
	//printf("%d\n%d\n", save, ans);

	printf(ans == save ? "Palindrome\n" : "Not a palindrome\n");	

}
