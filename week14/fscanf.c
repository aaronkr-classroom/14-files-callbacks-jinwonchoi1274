#include <stdio.h>

int main(void) {
	int num;
	int num_arr[10] = { 412,413,414,415,416,417,418,419,420,421 };
	FILE* p_file = fopen("num.txt", "wt");
	if (NULL != p_file) {
		printf("파일이 열렸습니다.");
		for (int i = 0; i < 10; i++) {
			fprintf(p_file, "%d\n", num_arr[i]);
		}

		printf("파일의 내용을 썼습니다!");

		while (EOF != fscanf_s(p_file, "%d", &num)) {

			printf("%d\n",num);
		}
		printf("파일의 내용을 읽었습니다.");
		fclose(p_file);
		printf("파일이 닫았습니다");
	}
}