#include <iostream>
#include <cmath> 
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

//#define Stepen
//#define Week
//#define Vector
#define Function

using namespace std;


//float vector(int x, int y, int z);
double step(float m, int e)
{
	float t = 1;
	for (0; e; e--)
	{
		t = t * m;
	}
	return t; 
}

void main()
{
	setlocale(LC_ALL, "");

#ifdef Stepen
	
	/*int a, n, result = 1; 
	cout << "\t\t\t\t Возведение числа в степень......." << endl;
	cout << "введите число: "; 
	cin >> a; 
	cout << endl; 
	cout << "введите в какую степень возводим число: ";
	cin >> n; 
	cout << endl; 
	for (int i = 0; i < n; i++)
	{
		result *= a; 
	}
	cout << result << endl; */

	// другой 
	/*cout << "\t\t\t\t Возведение числа в степень....2 вариант..." << endl;
	int a, n, res;
	 
	cout << "введите число: ";
	cin >> a;
	res = a;
	cout << endl;
	cout << "введите в какую степень возводим число: ";
	cin >> n;
	cout << "----------------" << endl; 
	for (int i = 1; i < n; i++)
	{
		a= a*res; 
		cout << a << endl; 
	}
	cin.get(); */

	// другой   
	cout << "\t\t\t\t Возведение числа в степень.....3 вариант.." << endl;
	int number; 
	cout << "введите число: ";
	cin >> number; 
	cout << endl; 

	int n; 
	cout << "введите степень числа: ";
	cin >> n;
	cout << endl;
	int count = 1; 
	int res = number; 
	do
	{
		if (n == 0) res = 1;
		else
			if (n != 1 && n > 1) res = res * number; 
		count++; 
	} while (n > count);
	cout << "число " << number << " в степени " << n << " = " << res << endl; 

#endif // Stepen

#ifdef Week
	cout << "\t\t\t Выбор дня недели :-)" << endl; 
	int number; 
	cout << "из предложенного выберете нужный день недели: " << endl; 
	cout << " 1. Понедельник " << endl; 
	cout << " 2. Вторник " << endl;
	cout << " 3. Среда " << endl;
	cout << " 4. Четверг " << endl;
	cout << " 5. Пятница " << endl;
	cout << " 6. Суббота " << endl;
	cout << " 7. Воскресенье " << endl;
	cin >> number;
	switch (number) 
	{
		case 1: { cout << " Понедельник :-)"; break; }
		case 2: { cout << " Вторник :-)"; break; }
		case 3: { cout << " Среда :-)"; break; }
		case 4: { cout << " Четверг :-)"; break; }
		case 5: { cout << " Пятница :-)"; break; }
		case 6: { cout << " Суббота :-)"; break; }
		case 7: { cout << " Воскресенье :-)"; break; }
		default: { cout << "введите число от 1 до 7 и выберите день недели, спасибо за понимание" << endl; cin >> number;}
		
	}
	cout << endl; 
	 		
		

#endif // Week

#ifdef Vector
	cout << "\t\tВведите координаты для вычисления длинны вектора ... " << endl; 

	/*double aX(0.0), aY(0.0), aZ(0.0);
	double VectorLen(0.0);

	cout << "Введите Х: "; 
	cin >> aX; 
	
	cout << "Введите Y: ";
	cin >> aY;
	
	cout << "Введите Z: ";
	cin >> aZ;
	cout << endl;

	cout << "Вы ввели следующие значения: " << "X= " << aX << "; Y = " << aY << "; Z = " << aZ << endl; 
	VectorLen = sqrt(aX * aX + aY * aY + aZ * aZ); 
	cout << "длинна вектора равна:  " << VectorLen << endl; */

	int x, y, z; 
	cout << "Введите Х: ";
	cin >> x;

	cout << "Введите Y: ";
	cin >> y;

	cout << "Введите Z: ";
	cin >> z;
	cout << endl;
	cout << "Вы ввели следующие значения: " << "X= " << x << "; Y = " << y << "; Z = " << z << endl;
	cout << "длинна вектора равна:  " << vector(x,y,z) << endl; 

#endif // Vector

#ifdef Function 
	
	cout << "\t\t\t Вычисление значения" << endl; 
	
	const double x1 = -1.1, x2 = 0.3, x3 = 0.2; // параметры 
	double y; // итоговое
	for (float x = x1; x < x2; x += x3)
	{
		for (int m = 1; m < 5; ++m)
		{
			y = step(x, m) * step(sin(x * m), m);
			cout << "Значение функции = " << y << " \t\t При m = " << m << endl; 
		}
		cout << "вычислено при х = " << x << endl; 
	}
	system("pause"); 


#endif // Function 


}
//float vector(int x, int y, int z)
//{
//	float v; 
//	v = sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
//	return v; 
//}