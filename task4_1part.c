//#include <stdio.h>
//#include <Windows.h>
//#include <math.h>
//
//void def1()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def2()
//{
//	int i = 10;
//	while (i >= 1)
//	{
//		printf("%d ", i);
//		i = i - 1;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def3()
//{
//	int k = 1;
//	int i = 1;
//	while (k <= 5)
//	{
//		printf("%d ", i);
//		k = k + 1;
//		i = i + 2;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//
//void def11()
//{
//	int i = 100;
//	while (i >= 10)
//	{
//		printf("%d ", i);
//		i = i - 10;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def12()
//{
//	int i = 1000;
//	while (i >= 100)
//	{
//		printf("%d ", i);
//		i = i - 100;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def13(int s, int n)
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("����� %d ���: %d ���.\n", i, s);
//		i = i + 1;
//		s = (s * (100 + n)) / 100;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def20(int n)
//{
//	int i = 1000;
//	while (i >= 0)
//	{
//		printf("%d ", i);
//		i = i - n;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def21(int n)
//{
//	int i = 1;
//	int t = 1;
//	while (i <= n)
//	{
//		t = t * i;
//		i = i + 1;
//		printf("%d ", t);
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def22(int n)
//{
//	int i = 1;
//	int cur = 1;
//	int pre = 0;
//	while (i <= n)
//	{
//		printf("%d ", cur);
//		int new = cur + pre;
//		pre = cur;
//		cur = new;
//		i = i + 1;
//	}
//	printf("\n����� ��������\n\n");
//}
//
//void def23(int n)
//{
//	int i = 1;
//	int tmp = 0;
//	while (i <= n)
//	{
//		if (n % i == 0)
//		{
//			int flag = 0;
//			int k = 1;
//			while (k <= sqrt(i))
//			{
//				if (i % k == 0)
//				{
//					flag = flag + 1;
//					if (flag > 1)
//					{
//						break;
//					}
//				}
//				k = k + 1;
//			}
//			if (flag == 1)
//			{
//				printf("%d ", i);
//				tmp = tmp + 1;
//			}
//		}
//		i = i + 1;
//	}
//	if (tmp == 1) {
//		printf("%d ", n);
//	}
//	printf("\n����� ��������\n\n");
//}
//
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
//		printf("11 - ����� ����� �� 100 �� 10 � ����� 10\n");
//		printf("12 - ����� ����� �� 1000 �� 100 � ����� 100\n");
//		printf("13 - ��������� �����\n");
//		printf("20 - ����� ����� �� 1000 �� 0 � ����� n\n");
//		printf("21 - ����� ������ n �����������\n");
//		printf("22 - ����� ������ n ����� ���������\n");
//		printf("23 - ����� ������� ���������� �����\n");
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
//		case 11:
//			def11();
//			break;
//		case 12:
//			def12();
//			break;
//		case 13:
//			int s;
//			int p;
//			printf("s = ");
//			scanf_s("%d", &s);
//			printf("n = ");
//			scanf_s("%d", &p);
//			def13(s, p);
//			break;
//		case 20:
//			int t;
//			printf("n = ");
//			scanf_s("%d", &t);
//			def20(t);
//			break;
//		case 21:
//			int a;
//			printf("n = ");
//			scanf_s("%d", &a);
//			def21(a);
//			break;
//		case 22:
//			printf("n = ");
//			scanf_s("%d", &a);
//			def22(a);
//			break;
//		case 23:
//			printf("n = ");
//			scanf_s("%d", &a);
//			def23(a);
//			break;
//		}
//	}
//}
