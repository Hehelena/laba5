#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2,a,b,c,x3,y3;
	float p,a1,b1,c1;
	cout << "1)введите координаты первой точки x1 и y1" << endl;
	cin >> x1 >> y1;
	cout << "введите координаты второй точки x2 и y2" << endl;
	cin >> x2 >> y2;
	cout << "расстояние между двумя точками равно: " << sqrt(pow(x1-x2,2)+pow(y1-y2,2))<<endl;
	cout << "2)введите три точки A, B, C на числовой оси" << endl;
	cin >> a >> b >> c;
	cout << "длина отрезка AC: " <<abs(a-c)<<endl;
	cout << "длина отрезка BC: " << abs(b - c) << endl;
	cout << "сумма длин отрезков AC и BC: " << abs(a - c) + abs(b - c) << endl;
	cout << "3)введите три точки A, B, C на числовой оси, причем точка C расположена между точками A и B" << endl;
	cin >> a >> b >> c;
	cout << "длина отрезка AC: " << abs(c - a) << endl;
	cout << "длина отрезка BC: " << abs(c - b) << endl;
	cout << "произведение длин отрезков AC и BC: " << abs(c - a) * abs(c - b) << endl;
	cout << "4)введите координаты двух противоположных вершин прямоугольника : (x1, y1), (x2, y2)" << endl;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << "периметр треугольника равен: " << abs(x1 - x2) + abs(y1 - y2) + sqrt(pow(abs(x1 - x2),2)+pow(abs(y1 - y2),2)) << endl;
	cout << "площадь треугольника равна: " << 0.5 * (abs(x1 - x2) * abs(y1 - y2)) << endl;
	cout << "5)введите координаты трех вершин прямоугольника : (x1, y1), (x2, y2), (x3, y3)" << endl;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	a1 = sqrt(pow(abs(x2 - x1),2) + pow(abs(y2 - y1),2));
	b1 = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));
	c1 = sqrt(pow(abs(x3 - x1), 2) + pow(abs(y3 - y1), 2));
	p = 0.5 * (a1 + b1 + c1);
	cout << "площадь треугольника равна: " << sqrt(p*(p - a1)*(p - b1)*(p - c1))<<endl;
	cout << "периметр треугольника равен: " << (a1 + b1 + c1)<<endl;
	}