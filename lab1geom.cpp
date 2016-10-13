/*
Лабораторная работа №1
Задание 2: Определить, какая из точек A(x1,y1,z1), B(x2,y2,z2), C(x23y3,z3) или D(x4,y4,z4)
		   расположена дальше от центра координат
Алексей Шапран 
Группа: ИУ8-14
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(void)
{
	// x, y, z - координаты точек
	float x = 0.0;
	float y = 0.0;
	float z = 0.0;
	// a, b, c, d - длины векторов OA, OB, OC и OD, соответственно
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;

	cout << endl << "\tThe program determines which of the points";
	cout << endl << "\t[ A(x1,y1,z1), B(x2,y2,z2), C(x23y3,z3) or D(x4,y4,z4) ] is the farthest from the center of coordinates" << endl;
	cout << endl << "\t\t point A = {x1; y1; z1}" << endl;
	cout << endl << "\t\tx1 = "; 
	cin >> x; 
	cout << endl << "\t\ty1 = "; 
	cin >> y; 
	cout << endl << "\t\tz1 = "; 
	cin >> z; 

	a = sqrt(x*x+y*y+z*z);

	cout << endl << "\t\t point B = {x2; y2; z2}" << endl;
	cout << endl << "\t\tx2 = "; 
	cin >> x; 
	cout << endl << "\t\ty2 = "; 
	cin >> y; 
	cout << endl << "\t\tz2 = "; 
	cin >> z; 

	b = sqrt(x*x+y*y+z*z);

	cout << endl << "\t\t point C = {x3; y3; z3}" << endl;
	cout << endl << "\t\tx3 = "; 
	cin >> x; 
	cout << endl << "\t\ty3 = "; 
	cin >> y; 
	cout << endl << "\t\tz3 = "; 
	cin >> z; 

	c = sqrt(x*x+y*y+z*z);

	cout << endl << "\t\t point D = {x4; y4; z4}" << endl;
	cout << endl << "\t\tx4 = "; 
	cin >> x; 
	cout << endl << "\t\ty4 = "; 
	cin >> y; 
	cout << endl << "\t\tz4 = "; 
	cin >> z; 

	d = sqrt(x*x+y*y+z*z);
	
	if( a > b && a > c && a > d ) cout << endl << "\t\t\tPoint A is the farthest from the center of coordinates" << endl;

		else if ( b > a && b > c && b > d ) cout << endl << "\t\t\tPoint B is the farthest from the center of coordinates" << endl;
			
			else if ( c > a && c > b && c > d ) cout << endl << "\t\t\tPoint C is the farthest from the center of coordinates" << endl;

				else if ( d > a && d > b && d > c ) cout << endl << "\t\t\tPoint D is the farthest from the center of coordinates" << endl;
					
					else  cout << endl << "\t\t\tAll points have the same distance from the center of coordinates" << endl;
		
	// вывод длин векторов OA, OB, OC и OD 
	cout << endl << "\t\t\t\tOA = " << a;
	cout << endl << "\t\t\t\tOB = " << b;
	cout << endl << "\t\t\t\tOC = " << c;
	cout << endl << "\t\t\t\tOD = " << d << endl;

	cout << endl << "\tPress any button to exit the program" << endl;

	_getch();
	return 0;
}