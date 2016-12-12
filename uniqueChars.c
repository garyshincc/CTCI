#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseString(char * mystr);

int main(){
	printf("hello world\n");
	char* mystr = (char*)malloc(sizeof(char)*21);
	
	char tempchar = 'a';
	for (int i = 0; i < 21; i++){
		mystr[i] = tempchar;
		tempchar++;
	}
	printf("%s\n", mystr);

	reverseString(mystr);
	
	free(mystr);
	return 0;
}

void reverseString(char * mystr){
	int length = sizeof(mystr);
	printf("length of string is: %d\n",length);
}
