#include <stdio.h>
#include <string.h>

int main(void) {
	char input[10] = "�跮��";
	char result[10] = "ȫ�浿";
	strcpy(result, input);
	printf("���ڿ� ����: %s\n", result);
	return 0;
}
