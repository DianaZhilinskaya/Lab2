#include"StdAfx.h"
#include"Matrix.h"
using namespace std;

int pryamoug::magicDiana = 15;

pryamoug::pryamoug()
{
	this->vysota = vysota;
	this->shyrina = shyrina;
}

pryamoug::pryamoug(int vysota, int shyrina )
{
	this->vysota = vysota;
	this->shyrina = shyrina;
}

pryamoug::pryamoug(pryamoug &v)
{
	vysota = v.vysota;
	shyrina = v.shyrina;
}

pryamoug::~pryamoug()
{
	
}

pryamoug::pryamoug(int j)
{
	int v, s;
	cout << "Высота " <<j+1<< ": " << endl;
	cin >> v;
	this->prvysota(v);
	cout << "Ширина " <<j+1<< ": " << endl;
	cin >> s;
	this->prshyrina(s);
}

pryamoug* pryamoug::mass(int size)
{
	pryamoug* n = new pryamoug[size];
	for (int i = 0; i < size; i++)
	{
		pryamoug e(i);
		n[i] = e;
	}
	return n;
}

double pryamoug::get_vysota()
{
	return vysota;
}

double pryamoug::get_shyrina()
{
	return shyrina;
}

double pryamoug::get_area()
{ 
	return (vysota) * (shyrina);
}

double pryamoug::get_perimetr()
{
	return 2 * (vysota + shyrina);
}

bool pryamoug::prvysota(int nvysota)
{
	if (nvysota < 0)
		return false;
	else
	{
		vysota = nvysota;
		return true;
	}
}

bool pryamoug::prshyrina(int nshyrina)
{
	if (nshyrina < 0)
		return false;
	else
	{
		shyrina = nshyrina;
		return true;
	}
}
