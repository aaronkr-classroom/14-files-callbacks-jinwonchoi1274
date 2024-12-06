#include <stdio.h>

int Sum(int a, int b) { return a + b; } //덧셈
int Sub(int a, int b) { return a - b; } //뺄셈
int Mul(int a, int b) { return a * b; } //곱셈
int Div(int a, int b) { return a / b; } //나눗셈

int main(void) {
	//함수 포인터를 배열로 선언하고
	//함수 원형이 int fnuc(int,int);로
	//같은 네 함수의 주소 값을 저장함
	int x = 8, y = 12;
	int(*p[4])(int, int) = {&Sum,&Sub,&Mul,&Div};
	char op_table[4] = { '+','-','*','/' };
	//sum,sub,mul,div순으로 호출함
	for (int i = 0; i < 4; i++)
		printf("%d %c %d = %d\n",x,op_table[i],y, (*p[i])(x, y));
}