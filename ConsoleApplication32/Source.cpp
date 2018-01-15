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
		cout << "Введите номер задания: " << endl;
		cout << " Что бы выйти введите 200'" << endl;
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			cout << "Создайте одномерный массив целого типа заданного размера M." << endl;
			cout << "Задайте значения элементов с помощью генератора случайных чисел. Распечатайте массив." << endl;
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
			cout << "Массив предназначен для хранения значений весов двадцати человек." << endl;
			cout << "С помощью датчика случайных чисел заполнить массив целыми значениями, " << endl;
			cout << "лежащими в диапазоне от 50 до 100 включительно" << endl;
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
			cout << "Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали: " << endl;
			cout << "b.	возрастающую последовательность" << endl;
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
				cout << "возрастающую последовательность " << mas[i] << endl;
			}




			break;



		}

		case 4:
		{
			cout << "Дан массив целых чисел. Выяснить: " << endl;
			cout << "является ли s-й элемент массива положительным числом" << endl;
			cout << "является ли k-й элемент массива четным числом" << endl;
			cout << "какой элемент массива больше: k-й или s-й." << endl;
			int mas[20], s, k,sox,sox1;
			for (int i = 0; i < 20; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "Index " << i << " === "<< mas[i] << "   " << endl;
			}
			do
			{
				cout << "Ведите число S" << endl;
				cin >> s;
				cout << "Ведите число K" << endl;
				cin >> k;

			} while ((s < 0 || s > 19) && (k < 0 || k > 19));

			for (int i = 0; i < 20; i++)
			{

				if (i == s)
				{	
					 sox = mas[i];
					if (mas[i] > 0)
						cout << "элемент массива положительным числом" << s << endl;
					else if (mas[i] < 0)
						cout << "элемент массива не положительное число" << s << endl;
				}
					
				else if (i == k)
				{
					sox1 = mas[i];
					if (mas[i] % 2 == 0)
						cout << "элемент массива является  четным числом" << k << endl;
					else if (mas[i] % 2 != 0)
						cout << "элемент массива является не  четным числом" << k << endl;
				}
			}
			if (sox > sox1)
				cout << "K меньше S  " << endl;
			else
				cout << "S меньше K  " << endl;






		}break;


		case 5:
		{
			cout << "5.	Дан массив. Все его элементы:" << endl;
			cout << "	a.уменьшить на 20" << endl;
			cout << "b.умножить на последний элемент" << endl;
			cout << "c.увеличить на число В." << endl;
			





		}





		}

		system("pause");

	} while (tm != 200);



}