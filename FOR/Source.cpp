#include<iostream>
using namespace std;
//#define FOR_BASICS
//#define FACTORIAL
//#define STEPEN
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
#define SIMPLE

void main()
{                                        
	setlocale(LC_ALL, "Russian");

#ifdef FOR_BASICS
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i=0; i<n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif	//FOR_BASICS

#ifdef FACTORIAL
	int n;
	int f =1;   //Factorial
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << " ! = " << f << endl;

#endif //FACTORIAL

#ifdef STEPEN
	double a; //Основание степени, которое умножается само на себя
	int n; // Показатель степени
	double N = 1; //Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif //STEPEN

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C"); //Включаем кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец" << endl;

#endif //ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif //FIBONACCI_1

#ifdef FIBONACCI_2
	int n; int sum;
	cout << "Введите количество чисел: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		if ()
		{
			sum = 
		}
		cout << a << "\t";
	}
	cout << endl;
#endif //FIBONACCI_2

#ifdef SIMPLE

	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool simple = true; //предполагаем, что число простое,
		//но это нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif //SIMPLE

}
