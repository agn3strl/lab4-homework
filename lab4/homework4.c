#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_CTYPE, "RUS");
	int vasya, petya;
	puts("��˨��� �����");
	puts("_____________");
	puts("���� � ������������? (0 - ��, 1 - ���)");
	scanf("%d", &vasya);
	puts("���� � ������������? (0 - ��, 1 - ���)");
	scanf("%d", &petya);
	if ((vasya % 2 == 0 && petya % 2 != 0) || (petya % 2 == 0 && vasya % 2 !=0)) puts("������� �������� ����� �� 4 �����");
	else puts("������� �������� ����� �� 6 ������");
	return 0;

}