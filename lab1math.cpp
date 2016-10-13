/*
Лабораторная работа №1
Задание 1: Вычисление корней квадратного уравнения
Алексей Шапран 
Группа: ИУ8-14
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(void)
{
	// a, b, c - коэффициенты квадратного уравнения
	float a =0.0;
	float b =0.0;
	float c =0.0;
	// корни квадратного уравнения
	float x1 = 0.0;
	float x2 = 0.0;
	float x = 0.0;
	// дискриминант квадратного уравнения
	float d = 0.0;

	cout << endl << "\tLet's solve this quadratic equation: " << endl;
	cout << endl << "\t\ta*x^2+b*x+c=0" << endl;
	cout << endl << "\t\t\ta = "; 
	cin >> a; 
	cout << endl << "\t\t\tb = "; 
	cin >> b;
	cout << endl << "\t\t\tc = "; 
	cin >> c;

	// вычисление дискриминанта
	d = b*b - 4*a*c;

	if ( d > 0 )
	{
		x1 = (float)(-b+sqrt(d))/(2*a);
		x2 = (float)(-b-sqrt(d))/(2*a);
		
		cout << "\t\t Two solutions: " << endl;
		cout << "\t\t\tx1 = " << x1 << endl;
		cout << "\t\t\tx2 = " << x2 << endl;
		cout << "\t\t\td = " << d << endl;
	}
		else if ( d == 0 )
		{
			x = (float)(-b)/(2*a);

			cout << endl << "\t\t One solution: " << endl;
			cout << endl << "\t\t\tx = " << x << endl;
			cout << endl << "\t\t\td = " << d << endl;
		}
			else cout << endl << "\t\t No solutions, d < 0, d = " << d << endl;

		cout << endl << "\tPress any button to exit the program" << endl;

	_getch();
	return 0;
}