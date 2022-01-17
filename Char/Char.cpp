#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
	char text[] = "jested";
	char druha[] = "slovo";
	printf("%s\n", text);
	printf("delka: %d\n", strlen(text));
	char buffer[1024];
	strcpy(buffer, text);
	strcat(buffer, druha);
	printf("%s\n", buffer);
}