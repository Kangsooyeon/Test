#include <Stdio.h>
#include <stdlib.h>

void print_menu() {
	printf("=======================\n");
	printf("MENU             \n");
	printf("=======================\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("3.����\n");
	printf("4.������\n");
	printf("5.������\n");
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
		printf("���ϴ� �޴��� �����Ͻÿ�(1-5): ");
		scanf_s("%d", &yourchoice);
		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf_s("%d %d%*c", &a, &b);
		switch (yourchoice) {
		case 1:printf("������ :%d", Add(a,b)); break;
		case 2:printf("������ :%d", Substract(a,b)); break;
		case 3:printf("������ :%d", Multiply(a,b)); break;
		case 4:printf("������ :%d", Divide(a,b)); break;
		case 5:printf("������ :%d", Modulus(a,b)); break;
		default:printf("�߸��� ����\n");

		}

		printf("\n");
		printf("����Ϸ��� y�� �����ÿ�: ");
		scanf_s("%c", &confirm);
	} while (confirm == 'y' || confirm == 'Y');

	return 0;
}