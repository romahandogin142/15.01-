#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
#define sizeArr 12
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "������� ����� �������: " << endl;
		cout << " ��� �� ����� ������� 200'" << endl;
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			cout << "�������� ���������� ������ ������ ���� ��������� ������� M." << endl;
			cout << "������� �������� ��������� � ������� ���������� ��������� �����. ������������ ������." << endl;
			int mas[17];
			unsigned long long summa = 0;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "  " << endl;
			}

		}
		break;

		case 2:
		{
			cout << "������ ������������ ��� �������� �������� ����� �������� �������." << endl;
			cout << "� ������� ������� ��������� ����� ��������� ������ ������ ����������, " << endl;
			cout << "�������� � ��������� �� 50 �� 100 ������������" << endl;
			int mas[20];
			unsigned long long summa = 0;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 50 + rand() % 100;
				cout << mas[i] << "  " << endl;
			}

		}


		case 3:
		{
			cout << "��������� ������ �� ������ ��������� ����� �������, ����� �������� ��������� ��� ��������� ������� ����� ������� ������������: " << endl;
			cout << "b.	������������ ������������������" << endl;
			int mas[sizeArr];
			int per;
			int per1;
			for (int i = 0; i < sizeArr; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "   " << endl;
			}
			int chet = 0;
			int chet1 = 0;

			for (int i = 0; i < sizeArr; i++)
			{
				for (int h = (sizeArr - 1); h > i; h--)
				{
					if (mas[h - 1] > mas[h])
					{
						per = mas[h - 1];
						mas[h - 1] = mas[h];
						mas[h] = per;
						chet++;
					}
				}
			}
			for (int i = 0; i < sizeArr; i++)
			{
				cout << "������������ ������������������ " << mas[i] << endl;
			}




			break;



		}

		case 4:
		{
			cout << "��� ������ ����� �����. ��������: " << endl;
			cout << "�������� �� s-� ������� ������� ������������� ������" << endl;
			cout << "�������� �� k-� ������� ������� ������ ������" << endl;
			cout << "����� ������� ������� ������: k-� ��� s-�." << endl;
			int mas[20], s, k,sox,sox1;
			for (int i = 0; i < 20; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "Index " << i << " === "<< mas[i] << "   " << endl;
			}
			do
			{
				cout << "������ ����� S" << endl;
				cin >> s;
				cout << "������ ����� K" << endl;
				cin >> k;

			} while ((s < 0 || s > 19) && (k < 0 || k > 19));

			for (int i = 0; i < 20; i++)
			{

				if (i == s)
				{	
					 sox = mas[i];
					if (mas[i] > 0)
						cout << "������� ������� ������������� ������" << s << endl;
					else if (mas[i] < 0)
						cout << "������� ������� �� ������������� �����" << s << endl;
				}
					
				else if (i == k)
				{
					sox1 = mas[i];
					if (mas[i] % 2 == 0)
						cout << "������� ������� ��������  ������ ������" << k << endl;
					else if (mas[i] % 2 != 0)
						cout << "������� ������� �������� ��  ������ ������" << k << endl;
				}
			}
			if (sox > sox1)
				cout << "K ������ S  " << endl;
			else
				cout << "S ������ K  " << endl;






		}break;


		case 5:
		{
			cout << "5.	��� ������. ��� ��� ��������:" << endl;
			cout << "	a.��������� �� 20" << endl;
			cout << "b.�������� �� ��������� �������" << endl;
			cout << "c.��������� �� ����� �." << endl;
			





		}





		}

		system("pause");

	} while (tm != 200);



}