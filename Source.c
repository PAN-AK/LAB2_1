#include <stdio.h>
#include <locale.h>

int vichsl()
{
	printf("1\n\t2\n\t\t3\n");
	printf("%5d\n %10d\n %15d\n %20d\n", 1, 2, 3, 4);
	printf("\n%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("%d �������� �� %d = %d\n ", 2000, 4, 2000 * 4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);

}
void time()
{
	int N = 8;
	int K = 20;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", K * 60);
	printf("������� ���  %f �����  � ������� ������ %f ����\n", N / 24., K / 60.);

}
int zdn3()
{
	int L = 2333;
	int n = 3;
	printf("����:\n              %d\n           %d\n", n, L);
	printf("       ________\n");
	printf("�����:\n      %+010.5f", 3 / 2333.);

}
void main()
{
	setlocale(LC_ALL, "RUS");
	vichsl();
	time();
	zdn3();
	return 10;
}