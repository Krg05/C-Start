#include <stdio.h>
#include <string.h>

int main(void) {
	char input[10] = "±è·®°ï";
	char result[10] = "È«±æµ¿";
	strcpy(result, input);
	printf("¹®ÀÚ¿­ º¹»ç: %s\n", result);
	return 0;
}
