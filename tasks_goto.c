//#include <stdio.h>
//#include <Windows.h>
//#include <math.h>
//
//void def1()
//{
//	int i = 1;
//	label_while:
//	if (i <= 10) {
//		printf("%d ", i);
//		i = i + 1;
//		goto label_while;
//	}
//
//	/*while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}*/
//
//	printf("\n����� ��������\n\n");
//}
//
//void def2()
//{
//	int i = 10;
//	label_while:
//	if (i >= 1)
//	{
//		printf("%d ", i);
//		i = i - 1;
//		goto label_while;
//	}
//
//	/*while (i >= 1)
//	{
//		printf("%d ", i);
//		i = i - 1;
//	}*/
//	
//	printf("\n����� ��������\n\n");
//}
//
//void def3()
//{
//	int k = 1;
//	int i = 1;
//
//	label_while:
//	if (k <= 5)
//	{
//		printf("%d ", i);
//		k = k + 1;
//		i = i + 2;
//		goto label_while;
//	}
//
//	/*while (k <= 5)
//	{
//		printf("%d ", i);
//		k = k + 1;
//		i = i + 2;
//	}*/
//
//	printf("\n����� ��������\n\n");
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int n = -1;
//
//	while (n != 0)
//	{
//		printf("�������� ����������� ��������:\n");
//		printf("1 - ����� ����� �� 1 �� 10\n");
//		printf("2 - ����� ����� �� 10 �� 1\n");
//		printf("3 - ����� ������ 5 �������� �����\n");
//
//
//		printf("0 - �����\n");
//		printf("\n");
//		scanf_s("%d", &n);
//
//		switch (n)
//		{
//		case 1:
//			def1();
//			break;
//		case 2:
//			def2();
//			break;
//		case 3:
//			def3();
//			break;
//		}
//	}
//}