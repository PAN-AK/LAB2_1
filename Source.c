#include <stdio.h>
#include <locale.h>

int vichsl()
{
	printf("1\n\t2\n\t\t3\n");
	printf("%5d\n %10d\n %15d\n %20d\n", 1, 2, 3, 4);
	printf("\n%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("%d умножить на %d = %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);

}
void time()
{
	int N = 8;
	int K = 20;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", K * 60);
	printf("Текущий час  %f суток  и текущая минута %f часа\n", N / 24., K / 60.);

}
int zdn3()
{
	int L = 2333;
	int n = 3;
	printf("Дано:\n              %d\n           %d\n", n, L);
	printf("       ________\n");
	printf("Ответ:\n      %+010.5f", 3 / 2333.);

}
void main()
{
	setlocale(LC_ALL, "RUS");
	vichsl();
	time();
	zdn3();
	return 10;
}