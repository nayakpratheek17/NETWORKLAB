#include<stdio.h>

int main() {
	char string1[5];
	char string2[5];
	int n;
	printf("Enter two binary strings of length 5\n");
	scanf("%s", string1);
	scanf("%s", string2);
	
	char ans[5] = {};
	for(int i = 0; i < 5; i++) {
		if(string1[i] == string2[i]) 
			ans[i] = '0';
		else
			ans[i] = '1';	
	}
	printf("answer\n");
	for(int i = 0; i < 5; i++)
		printf("%c", ans[i]);
		
}
