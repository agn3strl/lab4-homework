#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_CTYPE, "RUS");
	int vasya, petya;
	puts("ДЕЛЁЖКА ПИЦЦЫ");
	puts("_____________");
	puts("Вася А проголодался? (0 - да, 1 - нет)");
	scanf("%d", &vasya);
	puts("Петя В проголодался? (0 - да, 1 - нет)");
	scanf("%d", &petya);
	if ((vasya % 2 == 0 && petya % 2 != 0) || (petya % 2 == 0 && vasya % 2 !=0)) puts("Следует порезать пиццу на 4 куска");
	else puts("Следует порезать пиццу на 6 кусков");
	return 0;

}