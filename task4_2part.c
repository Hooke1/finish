#include <stdio.h>
#include <Windows.h>

}
void def422()
{
	int i = 1;
	do {
		int j = 1;
		do {
			printf("%d\t", i * j);
			j = j + 1;
		} while (j <= 10);
		printf("\n");
		i = i + 1;

}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = -1;

	while (n != 0)
	{
		
		{
		case 1:
			int i;
			int j;
			printf("n = ");
			scanf_s("%d", &i);
			printf("m = ");
			scanf_s("%d", &j);

			def421(i, j);
			break;
		case 2:
			def422();
			break;
		case 3:
			def423();
			break;
		case 4:
			def424();
			break;
		}
	}
}