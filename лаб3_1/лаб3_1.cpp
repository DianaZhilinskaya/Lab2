// лаб3_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "matrix.h"
#include <iostream>
#include <locale>
using namespace std; 
int _tmain(int argc, _TCHAR* argv[])
{ 
	
	setlocale(LC_ALL, ".1251");
	pryamoug* ar; int s, v, max, k=0, n=0, nk=0, np=0,size;
	cout << "Введите размер массива: "; 
	cin >> size;
	ar = pryamoug::mass(size);
	
	for (int i=0; i < size; i++)
	{
		if (ar[i].get_vysota() == ar[i].get_shyrina())
		{ 

			k++; 
			if (nk < ar[i].get_area()) nk = ar[i].get_area();
		}
		else if (ar[i].get_vysota()!= ar[i].get_shyrina())
		{

			n++;
			if (np < ar[i].get_area()) np = ar[i].get_area();
		}
	}
	cout << "Квадратов: " << k << endl;
	cout << "Прямоугольников: " << n << endl;
	cout << "Самая большая площадь у квадратов: " << nk << endl;
	cout << "Самая большая площадь у прямоугольнтков: " << np << endl;
	cout << pryamoug::max_size << endl;
	return 0;
}

