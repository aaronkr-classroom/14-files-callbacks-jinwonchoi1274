#include <stdio.h>

int Sum(int a, int b) { return a + b; } //����
int Sub(int a, int b) { return a - b; } //����
int Mul(int a, int b) { return a * b; } //����
int Div(int a, int b) { return a / b; } //������

int main(void) {
	//�Լ� �����͸� �迭�� �����ϰ�
	//�Լ� ������ int fnuc(int,int);��
	//���� �� �Լ��� �ּ� ���� ������
	int x = 8, y = 12;
	int(*p[4])(int, int) = {&Sum,&Sub,&Mul,&Div};
	char op_table[4] = { '+','-','*','/' };
	//sum,sub,mul,div������ ȣ����
	for (int i = 0; i < 4; i++)
		printf("%d %c %d = %d\n",x,op_table[i],y, (*p[i])(x, y));
}