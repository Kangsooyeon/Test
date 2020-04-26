#include <Stdio.h>
#include <stdlib.h>

void print_menu() {
	printf("=======================\n");
	printf("MENU             \n");
	printf("=======================\n");
	printf("1.덧셈\n");
	printf("2.뺄셈\n");
	printf("3.곱셈\n");
	printf("4.나눗셈\n");
	printf("5.나머지\n");
}

int Add(int a, int b) {
	return (a + b);
}

int Substract(int a, int b) {
	return (a - b);
}

int Multiply(int a, int b) {
	return (a * b);
}

int Divide(int a, int b) {
	return ((float)a / (float)b);
}

int Modulus(int a, int b) {
	return (a % b);
}

int main(void)
{
	print_menu();
	int yourchoice;
	int a;
	int b;
	char confirm;
	do
	{
		printf("원하는 메뉴를 선택하시오(1-5): ");
		scanf_s("%d", &yourchoice);
		printf("숫자 2개를 입력하시오: ");
		scanf_s("%d %d%*c", &a, &b);
		switch (yourchoice) {
		case 1:printf("연산결과 :%d", Add(a,b)); break;
		case 2:printf("연산결과 :%d", Substract(a,b)); break;
		case 3:printf("연산결과 :%d", Multiply(a,b)); break;
		case 4:printf("연산결과 :%d", Divide(a,b)); break;
		case 5:printf("연산결과 :%d", Modulus(a,b)); break;
		default:printf("잘못된 연산\n");

		}

		printf("\n");
		printf("계속하려면 y를 누르시오: ");
		scanf_s("%c", &confirm);
	} while (confirm == 'y' || confirm == 'Y');

	return 0;
}