#include <stdio.h>

int main(void) {
	char* string = "Hello world!";
	short int data = 0xAEFC;

	FILE* p_file = fopen("hello.txt", "wt");
	if (NULL != p_file) {
		fprintf(p_file, "%s\n",string);
		fprintf(p_file, "%x\n", data);

		printf("���ϳ����� �̷��� ����!~");
		while (fgets(line, MAX_LINE, p_file)) {

		}
		fclose(p_file);
	}



	return 0;
}